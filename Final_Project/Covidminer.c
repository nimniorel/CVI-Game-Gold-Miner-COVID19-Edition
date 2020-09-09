#include "wmp.h"
#include <cvirte.h>	
#include <ansi_c.h>
#include <utility.h>
#include <userint.h>
#include "Covidminer.h"
#include "dll.h"
#define ALCOJEL_NUM 20
#define BEERS_NUM 10
#define VACCINE_NUM 10
#define COVID_NUM 20
int CVICALLBACK MultThread(void *myData);   /////prototype of multhread function/////
CmtThreadFunctionID threadId;/// new var for multhread func///
static int mainpannel;
int flag=0;
static int index=0;
static int scorepannel;
static int aboutpannel;
static int helppannel;
static int storepannel;
static int audiopannel;
CAObjHandle helpmediaHandle;///activex mediaplayer handle///
static int maskspic, injectionpic, covid_19pic, alcojelpic, yoram_lasspic, packscoronapic,boompic, background;//pictures handles//
FILE* fp;
static char name[100];
AllVaribles allvar;//spcial struct that include all the vars we need for the multhread func//
USER use[5]={0};// arrat for the scores//


int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((mainpannel = LoadPanel (0, "Covidminer.uir", MAINPANNEL)) < 0)
		return -1;
	if ((allvar.gamepannel = LoadPanel (0, "Covidminer.uir", Game_Panne)) < 0)
		return -1;
	if ((scorepannel = LoadPanel (0, "Covidminer.uir", SCORETABLE)) < 0)
		return -1;
	if ((aboutpannel = LoadPanel (0, "Covidminer.uir", ABOUTPANEL)) < 0)
		return -1;
	if ((helppannel = LoadPanel (0, "Covidminer.uir", HELP_PANEL)) < 0)
		return -1;
	if ((storepannel = LoadPanel (0, "Covidminer.uir", STORE)) < 0)
		return -1;
	if ((audiopannel = LoadPanel (0, "Covidminer.uir", PANEL_AUDI)) < 0)
		return -1;
	GetObjHandleFromActiveXCtrl (audiopannel, PANEL_AUDI_WINDOWSMEDIAPLAYER, &allvar.mediaHandle);//get address handle to the vars//
	GetObjHandleFromActiveXCtrl (helppannel, HELP_PANEL_WINDOWSMEDIAPLAYER, &helpmediaHandle);//get address handle to the vars//
	fp = fopen("scorelist.txt", "r");
			if (fp == NULL)
			{
				printf("Failed opening the file. Exiting!\n");
				return;
			}
	for(int i=0;i<5;i++)// scan score and name to our arrays
			{
				fscanf(fp,"%s %d",use[i].Name,&use[i].Score);
			}	
	fclose(fp);
	DisplayPanel (mainpannel);
	WMPLib_IWMPPlayer2SetURL (allvar.mediaHandle, NULL, "opengame.mp3");
	RunUserInterface ();
	DiscardPanel (mainpannel);
	DiscardPanel (allvar.gamepannel);
	DiscardPanel (scorepannel);
	DiscardPanel (aboutpannel);
	DiscardPanel (helppannel);
	DiscardPanel (storepannel);
	DiscardPanel (audiopannel);
	//fclose(fp);
	
	return 0;
}



int CVICALLBACK ExitCallback (int panel, int control, int event,
							  void *callbackData, int eventData1, int eventData2)//exit button from the game pannel//
{
	switch (event)
	{
		case EVENT_COMMIT:
			
			CmtReleaseThreadPoolFunctionID (DEFAULT_THREAD_POOL_HANDLE, threadId);
			HidePanel(allvar.gamepannel);
			DisplayPanel(mainpannel);
			SetCtrlAttribute (allvar.gamepannel, Game_Panne_TIMER, ATTR_ENABLED, 0);
			flag=0;
			

			break;
	}
	return 0;
}

void CVICALLBACK Menubar_file (int menuBar, int menuItem, void *callbackData,
							   int panel)
{
}

void CVICALLBACK Menubar_help (int menuBar, int menuItem, void *callbackData,
							   int panel)
{
	
			DisplayPanel (helppannel);
			WMPLib_IWMPPlayer2SetURL (helpmediaHandle, NULL, "helpvideo.mkv");
			SetPanelAttribute (helppannel, ATTR_WINDOW_ZOOM, VAL_MAXIMIZE);


}

void CVICALLBACK Menubar_about (int menuBar, int menuItem, void *callbackData,
								int panel)
{
	DisplayPanel (aboutpannel);
}

void CVICALLBACK Menubar_Exit (int menuBar, int menuItem, void *callbackData,
							   int panel)
{
	QuitUserInterface (0);
}

int CVICALLBACK help_callback (int panel, int event, void *callbackData,
							   int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_CLOSE:
			HidePanel(helppannel);
			WMPLib_IWMPPlayer2close (helpmediaHandle, NULL);//stop video
			break;
	}
	return 0;
}

int CVICALLBACK scoretablecallback (int panel, int event, void *callbackData,
									int eventData1, int eventData2)// exit from the score menu table
{
	switch (event)
	{
		case EVENT_CLOSE:
			HidePanel(scorepannel);
			QuitUserInterface(0);
			break;
	}
	return 0;
}

int CVICALLBACK gamepannelcallback (int panel, int event, void *callbackData,
									int eventData1, int eventData2)// exit from the game pannel
{
	switch (event)
	{
		case EVENT_CLOSE:
			
			
			flag=0;
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK Aboutcallback (int panel, int event, void *callbackData,
							   int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_CLOSE:
			HidePanel(aboutpannel);
			break;
	}
	return 0;
}

int CVICALLBACK nextlevelCallback (int panel, int control, int event,
								   void *callbackData, int eventData1, int eventData2)//reset the game pannel for the next level
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel(storepannel);
			allvar.timer=60;
			SetCtrlAttribute (allvar.gamepannel, Game_Panne_TIMER, ATTR_ENABLED, 1);
			flag=1;
			DisplayPanel(allvar.gamepannel);
			if (allvar.covidnum<COVID_NUM){
			allvar.covidnum=(allvar.covidnum)+2;
			}
			InitGame(&allvar);
			SetCtrlVal(allvar.gamepannel, Game_Panne_SCORE, allvar.score);
			CmtScheduleThreadPoolFunction (DEFAULT_THREAD_POOL_HANDLE, MultThread, &allvar, &threadId);			
			break;
		
	}
	return 0;
}

int CVICALLBACK WelcomePagecallback (int panel, int event, void *callbackData,
									 int eventData1, int eventData2)
{
	switch (event)
	{
		
		case EVENT_CLOSE:
			
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK scorecallback (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2)//when we press on the trophy the scoretable turn on
{
	switch (event)
	{
		case EVENT_LEFT_CLICK:
			PrinttoTable(use,scorepannel);
			SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 1, ATTR_USE_LABEL_TEXT, 1);
			SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 1, ATTR_LABEL_TEXT, "NAME");
			SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 2, ATTR_USE_LABEL_TEXT, 1);
			SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 2, ATTR_LABEL_TEXT, "SCORE");
			DisplayPanel(scorepannel);
			break;
	}
	return 0;
}


int CVICALLBACK STARTCALLBACK (int panel, int control, int event,
								void *callbackData, int eventData1, int eventData2)// init the games and start play button
{
	switch (event)
	{
		case EVENT_LEFT_CLICK:
			WMPLib_IWMPPlayer2SetURL (allvar.mediaHandle, NULL, "startbutton.mp3");
			GetCtrlVal (mainpannel, MAINPANNEL_MAIN_NAME, name);
			allvar.alcojelnum=ALCOJEL_NUM/4;
			allvar.vaccinenum=VACCINE_NUM/5;
			allvar.covidnum=COVID_NUM/10;
			allvar.beersnum=BEERS_NUM/2;
			allvar.timer=60;
			SetCtrlAttribute (allvar.gamepannel, Game_Panne_TIMER, ATTR_ENABLED, 1);
			HidePanel(mainpannel);
			DisplayPanel(allvar.gamepannel);
			allvar.score=0;
			allvar.lives=3;
			LoadSources(&maskspic, &injectionpic, &covid_19pic, &alcojelpic, &yoram_lasspic, &packscoronapic,&boompic, &background);
			InitGame(&allvar);
			flag=1;
			SetCtrlVal (allvar.gamepannel, Game_Panne_SCORE, allvar.score);
			CmtScheduleThreadPoolFunction (DEFAULT_THREAD_POOL_HANDLE, MultThread, &allvar, &threadId);
			//CmtWaitForThreadPoolFunctionCompletion (DEFAULT_THREAD_POOL_HANDLE, threadId, OPT_TP_PROCESS_EVENTS_WHILE_WAITING);
			//CmtReleaseThreadPoolFunctionID (DEFAULT_THREAD_POOL_HANDLE, threadId);
				
			
			break;
	}
	return 0;
}

int CVICALLBACK timeofgamecallback (int panel, int control, int event,
									void *callbackData, int eventData1, int eventData2)// timer func for the game
{
	switch (event)
	{
		case EVENT_TIMER_TICK:		
			SetCtrlVal (allvar.gamepannel, Game_Panne_NUMERIC, allvar.timer);
			allvar.timer--;
			break;
	}
	return 0;
}
int CVICALLBACK PressButtonCallback (int panel, int control, int event,
									 void *callbackData, int eventData1, int eventData2)//start the grab state
{
	switch (event)
	{
		case EVENT_KEYPRESS:
			if (allvar.state==1)
				allvar.state=2;
			break;
	}
	return 0;
}
int CVICALLBACK MultThread(void *myData)   /////multhread function/////
{
	AllVaribles* allvar=(AllVaribles*)myData;
	while (flag)///make the func periodic///
	{
		if (allvar->timer==0 && allvar->lives>0)
			{
				HidePanel(allvar->gamepannel);
				DisplayPanel(storepannel);
				SetCtrlVal (storepannel, STORE_NUMERIC_score_STORE, allvar->score);
				SetCtrlAttribute (allvar->gamepannel, Game_Panne_TIMER, ATTR_ENABLED, 0);
				flag=0;
			}
			if (allvar->lives==0)
			{
				
				WMPLib_IWMPPlayer2SetURL (allvar->mediaHandle, NULL, "gameover.mp3");
				index=GetIndextoInsert(allvar->score, name, use);
				if (index==0&&allvar->score>0)
					MessagePopup("Congratulation!!","You Broke the High Score");
				if (index>-1){
				InsertNewScore(index, use,allvar->score, name);
				PrinttoFile(fp, use);
				}
				PrinttoTable(use,scorepannel);
				SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 1, ATTR_USE_LABEL_TEXT, 1);
				SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 1, ATTR_LABEL_TEXT, "NAME");
				SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 2, ATTR_USE_LABEL_TEXT, 2);
				SetTableColumnAttribute (scorepannel, SCORETABLE_TABLE, 2, ATTR_LABEL_TEXT, "SCORE");
				HidePanel(allvar->gamepannel);
				DisplayPanel(scorepannel);
				SetCtrlAttribute (allvar->gamepannel, Game_Panne_TIMER, ATTR_ENABLED, 0);
				flag=0;
			}
			StateMachine(allvar);
			MoveCovidObject(allvar);
			draw(allvar,maskspic, injectionpic, covid_19pic, alcojelpic, yoram_lasspic, packscoronapic,boompic, background);
	}
	
	
		
	return 0;
}
int CVICALLBACK morelivescallback (int panel, int control, int event,
								   void *callbackData, int eventData1, int eventData2)//buy button of the store//
{
	switch (event)
	{
		case EVENT_LEFT_CLICK:
			if(allvar.lives<3){
			if (allvar.score>=400){
				allvar.lives++;
				allvar.score=allvar.score-400;
				WMPLib_IWMPPlayer2SetURL (allvar.mediaHandle, NULL, "cash.mp3");
				SetCtrlVal (storepannel, STORE_NUMERIC_score_STORE, allvar.score);
				MessagePopup("Congratulation!!","You Purchased More Lives");
			}
			else{
				MessagePopup("YOU NEED MORE MONEY!!","You don't have enough money\nfor this product please choose\nsomething else or choose ''Next Level''");
			}
			}else{
				MessagePopup("YOU CAN'T PURCHASE!!","You already have three lives");
			}
			break;
			
	}
	return 0;
}

int CVICALLBACK lessbeercallback (int panel, int control, int event,
								  void *callbackData, int eventData1, int eventData2)//buy button of the store//
{
	switch (event)
	{
		case EVENT_LEFT_CLICK:
			if (allvar.score>=50){
				allvar.beersnum--;
				allvar.score=allvar.score-50;
				WMPLib_IWMPPlayer2SetURL (allvar.mediaHandle, NULL, "cash.mp3");
				SetCtrlVal (storepannel, STORE_NUMERIC_score_STORE, allvar.score);
				MessagePopup("Congratulation!!","You Purchased Less Beers");
			}
			else{
				MessagePopup("YOU NEED MORE MONEY!!","You don't have enough money\nfor this product please choose\nsomething else or choose ''Next Level''");
			}
			break;
	}
	return 0;
}

int CVICALLBACK morevaccinecallback (int panel, int control, int event,
									 void *callbackData, int eventData1, int eventData2)//buy button of the store//
{
	switch (event)
	{
		case EVENT_LEFT_CLICK:
			if(allvar.vaccinenum<VACCINE_NUM){
			if (allvar.score>=200){
				allvar.vaccinenum++;
				allvar.score=allvar.score-200;
				WMPLib_IWMPPlayer2SetURL (allvar.mediaHandle, NULL, "cash.mp3");
				SetCtrlVal (storepannel, STORE_NUMERIC_score_STORE, allvar.score);
				MessagePopup("Congratulation!!","You Purchased More Vaccine");
			}
			else{
				MessagePopup("YOU NEED MORE MONEY!!","You don't have enough money\nfor this product please choose\nsomething else or choose ''Next Level''");
			}
			}else{
					MessagePopup("YOU CAN'T PURCHASE!!","You have reached the maximum");
			}
			break;
			
	}
	return 0;
}

int CVICALLBACK morealcojelcallback (int panel, int control, int event,
									 void *callbackData, int eventData1, int eventData2)//buy button of the store//
{
	switch (event)
	{
		case EVENT_LEFT_CLICK:
			if(allvar.alcojelnum<ALCOJEL_NUM){
			if (allvar.score>=100){
				allvar.alcojelnum++;
				allvar.score=allvar.score-100;
				WMPLib_IWMPPlayer2SetURL (allvar.mediaHandle, NULL, "cash.mp3");
				SetCtrlVal (storepannel, STORE_NUMERIC_score_STORE, allvar.score);
				MessagePopup("Congratulation!!","You Purchased More Alcojel");
			}
			else{
				MessagePopup("YOU NEED MORE MONEY!!","You don't have enough money\nfor this product please choose\nsomething else or choose ''Next Level''");
			}
			}else{
				MessagePopup("YOU CAN'T PURCHASE!!","You have reached the maximum");
			}
			break;
	}
	return 0;
}
int CVICALLBACK storecallback (int panel, int event, void *callbackData,
							   int eventData1, int eventData2)//get out from the store pannel
{
	switch (event)
	{
		
		case EVENT_CLOSE:
			flag=0;
			CmtReleaseThreadPoolFunctionID (DEFAULT_THREAD_POOL_HANDLE, threadId);
			QuitUserInterface(0);
			break;
	}
	return 0;
}

int CVICALLBACK backtomenucallback (int panel, int control, int event,
									void *callbackData, int eventData1, int eventData2)//back to the main menu buttom
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel(scorepannel);
			DisplayPanel(mainpannel);
			break;
		
	}
	return 0;
}
