#include "wmp.h"
#include <ansi_c.h>
#include <cvirte.h>		
#include <userint.h>
#include "dll.h"
static int DLLEXPORT j,j1,j2,j3;//j=alcojel index, j1= 6pac index, j2=injection index, j3=covid19 index.
static int DLLEXPORT delta[COVID_NUM] ={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

void DLLEXPORT LoadSources(int* maskspic, int* injectionpic, int* covid_19pic, int* alcojelpic, int* yoram_lasspic, int* packscoronapic, int* boompic, int* background)
{
	///load all the address of the pictures///
	GetBitmapFromFile ("pictures//masksnew.png", maskspic);
	GetBitmapFromFile("pictures//injection.png", injectionpic);
	GetBitmapFromFile ("pictures//covi.png", covid_19pic);
	GetBitmapFromFile ("pictures//alcojel.png", alcojelpic);
	GetBitmapFromFile ("pictures//yoram_lass.png", yoram_lasspic);
	GetBitmapFromFile ("pictures//6packscorona.png", packscoronapic);
	GetBitmapFromFile ("pictures//boompic.png", boompic);
	GetBitmapFromFile ("pictures//panoramic_background.jpg", background);
	srand(time(0));
	 
}
void DLLEXPORT InitGame(AllVaribles* allvar)
{
	
	
//init and creates all the objects
    allvar->state=1;
	allvar->arrow.line=40.0;
	allvar->degree=0;
	allvar->ddeg=1;
	allvar->dline=1.0;
	for(int i=0;i<allvar->alcojelnum;i++)
	{
		
		allvar->alcojel[i].x=(2*i+rand())%500;
	    allvar-> alcojel[i].y=180+(i+rand())%250;
		allvar->alcojel[i].width=10+(i+rand())%60;
		allvar->alcojel[i].alive=1;
	}
	for (int i1=0;i1<allvar->beersnum;i1++)
	{
		allvar->beers[i1].x1=3*i1+rand()%600;
		allvar->beers[i1].y1=200+(2*i1+rand())%150;
		allvar->beers[i1].width1=20+(i1+rand())%60;
		allvar->beers[i1].alive1=1;
	}
	for (int i2=0;i2<allvar->vaccinenum;i2++)
	{
		allvar->vaccine[i2].x2=i2+rand()%600;
		allvar->vaccine[i2].y2=200+i2*rand()%150;
		allvar->vaccine[i2].width2=15+rand()%30;
		allvar->vaccine[i2].alive2=1;
	}
	for (int i3=0;i3<allvar->covidnum;i3++)
	{
		allvar->covid[i3].x3=i3+10*rand()%600;
		allvar->covid[i3].y3=200+3*rand()%150;
		allvar->covid[i3].width3=50;
		allvar->covid[i3].Height=50;
		allvar->covid[i3].alive3=1;
		
	}
	

}


//////////State Machine///////////
void DLLEXPORT StateMachine(AllVaribles* allvar)
{
 	static double rad;
	double pii=3.14;
	
	
	switch(allvar->state)
	
	{		
	//*******  state=1  serching and drawing the gamecanvas without grabing***************
	case 1:
	allvar->dline=1.0;
	allvar->degree=allvar->degree+allvar->ddeg; 
	if(allvar->degree==80||allvar->degree==-80)
		allvar->ddeg=-(allvar->ddeg);
	rad=(allvar->degree)*pii/180;
	allvar->arrow.x=330+(allvar->arrow.line)*sin(rad);
	allvar->arrow.y=70+(allvar->arrow.line)*cos(rad);
	SetCtrlAttribute (allvar->gamepannel, 2, ATTR_PEN_WIDTH, 6);
	
	break;

	
    //*******  state=2  grab state and checking if Intersection happend *************** 
	case 2:   
	allvar->arrow.line=allvar->arrow.line+allvar->dline;
	allvar->arrow.x=330+(allvar->arrow.line)*sin(rad);
	allvar->arrow.y=70+(allvar->arrow.line)*cos(rad);
	if (allvar->arrow.x<=0||allvar->arrow.x>=700||allvar->arrow.y>=450)
	allvar->dline=-2*(allvar->dline);
	if(allvar->arrow.line<40.0)
	{
	allvar->dline=0.0;
 	allvar->arrow.line=40.0;
	allvar->state=1;
	break;
	}
	for( j=0;j<allvar->alcojelnum;j++)
	{
	if(RectIntersection (MakeRect(allvar->arrow.y,allvar->arrow.x,1,1), 
							  MakeRect(allvar->alcojel[j].y,allvar->alcojel[j].x,allvar->alcojel[j].width,allvar->alcojel[j].width), NULL)==1  &&  allvar->alcojel[j].alive==1)
	{ 
		allvar->state=3;
	allvar->dline=1.0;
	allvar->alcojel[j].alive=0;
	break;}	
	}
	for ( j1=0;j1<allvar->beersnum;j1++)
	{
		if(RectIntersection (MakeRect(allvar->arrow.y,allvar->arrow.x,1,1), 
							 MakeRect(allvar->beers[j1].y1,allvar->beers[j1].x1,allvar->beers[j1].width1,allvar->beers[j1].width1),NULL)==1  && allvar->beers[j1].alive1==1)
	{allvar->state=4;
	
	
	allvar->dline=1.0;
	allvar->beers[j1].alive1=0;
	break;}
	}
	for ( j2=0;j2<allvar->vaccinenum;j2++)
	{
		if(RectIntersection (MakeRect(allvar->arrow.y,allvar->arrow.x,1,1), 
							 MakeRect(allvar->vaccine[j2].y2,allvar->vaccine[j2].x2,allvar->vaccine[j2].width2,allvar->vaccine[j2].width2),NULL)==1  && allvar->vaccine[j2].alive2==1)
		{allvar->state=5;
		
	allvar->dline=1.0;
	allvar->vaccine[j2].alive2=0;
	break;}
	}
	for ( j3=0;j3<allvar->covidnum;j3++)
	{
		if(allvar->dline>=0){///////////////make sure you catch covid only when you go down
		if(RectIntersection (MakeRect(allvar->arrow.y,allvar->arrow.x,1,1), 
							 MakeRect(allvar->covid[j3].y3,allvar->covid[j3].x3,allvar->covid[j3].Height,allvar->covid[j3].width3),NULL)==1  && allvar->covid[j3].alive3==1)
		{
			allvar->state=6;
	allvar->dline=1.0;
	allvar->covid[j3].alive3=0;
	allvar->lives=(allvar->lives)-1; 
	if(allvar->lives!=1){
		WMPLib_IWMPPlayer2SetURL (allvar->mediaHandle, NULL, "catch_covid.mp3");
		}
	break;
		}
		}
	}
	break;
	//*******  state=3// catch Alcojel  *************** 
	case 3:
		
		allvar->arrow.x=330+(allvar->arrow.line)*sin(rad);
		allvar->arrow.y=70+(allvar->arrow.line)*cos(rad);
		if(allvar->alcojel[j].width>=50)
		allvar->arrow.line=allvar->arrow.line-(allvar->dline)/4;
		if (allvar->alcojel[j].width<50)
		allvar->arrow.line=allvar->arrow.line-(allvar->dline);
		allvar->alcojel[j].x=(int)allvar->arrow.x-(allvar->alcojel[j].width)/2;
		allvar->alcojel[j].y=(int)allvar->arrow.y-(allvar->alcojel[j].width)/2;
		
		
		if(allvar->arrow.line<40.0)
		{
			if(allvar->alcojel[j].width>=50)
			allvar->score=allvar->score+50;
			if(allvar->alcojel[j].width<50)
			allvar->score=allvar->score+20;
		allvar->arrow.line=40.0;
		allvar->dline=0.0;
		allvar->state=1;
		SetCtrlVal(allvar->gamepannel, 3, allvar->score);
		}
		break;
	//****** state=4 // catch 6pac corona **********
        case 4:
		
		allvar->arrow.x=330+(allvar->arrow.line)*sin(rad);
		allvar->arrow.y=70+(allvar->arrow.line)*cos(rad);
		if(allvar->beers[j1].width1>=50)
		allvar->arrow.line=allvar->arrow.line-(allvar->dline)/4;
		if (allvar->beers[j1].width1<50)
		allvar->arrow.line=allvar->arrow.line-(allvar->dline)/2;
		allvar->beers[j1].x1=(int)allvar->arrow.x-(allvar->beers[j1].width1)/2;
		allvar->beers[j1].y1=(int)allvar->arrow.y-(allvar->beers[j1].width1)/2;
		 	
	
		if(allvar->arrow.line<40.0)
		{
		allvar->score=allvar->score+5;
		allvar->arrow.line=40.0;
		allvar->dline=0.0;
		allvar->state=1;
		SetCtrlVal(allvar->gamepannel, 3, allvar->score);
		
		}
		break;
	//****** state=5 // catch vaccine **********  
		case 5:
		
		allvar->arrow.x=330+(allvar->arrow.line)*sin(rad);
		allvar->arrow.y=70+(allvar->arrow.line)*cos(rad);
		allvar->arrow.line=allvar->arrow.line-2*(allvar->dline);
		allvar->vaccine[j2].x2=(int)allvar->arrow.x-(allvar->vaccine[j2].width2)/2;
		allvar->vaccine[j2].y2=(int)allvar->arrow.y-(allvar->vaccine[j2].width2)/2;
		
		if(allvar->arrow.line<40.0)
		{
		allvar->score=allvar->score+200;
		allvar->arrow.line=40.0;
		allvar->dline=0.0;
		allvar->state=1;
		SetCtrlVal(allvar->gamepannel, 3, allvar->score);
		}
		break;
	//****** state=6 // catch covid virus ********** 
		case 6:
		allvar->arrow.x=330+(allvar->arrow.line)*sin(rad);
		allvar->arrow.y=70+(allvar->arrow.line)*cos(rad);
		allvar->arrow.line=allvar->arrow.line-2*(allvar->dline);
		if(allvar->arrow.line<40.0)
		{
		allvar->arrow.line=40.0;
		allvar->dline=0.0;
		allvar->state=1;
		break;
		}
		  break;
		
	 }
	   
}



void DLLEXPORT draw(AllVaribles* allvar,int maskspic, int injectionpic, int covid_19pic, int alcojelpic, int yoram_lasspic, int packscoronapic, int boompic, int background )
{
	//drawing everything func
	int i;
	CanvasStartBatchDraw (allvar->gamepannel, 2);
	CanvasClear (allvar->gamepannel, 2, VAL_ENTIRE_OBJECT);
	CanvasDrawBitmap (allvar->gamepannel, 2,  background, VAL_ENTIRE_OBJECT, VAL_ENTIRE_OBJECT);
	CanvasDrawBitmap (allvar->gamepannel, 2, yoram_lasspic, VAL_ENTIRE_OBJECT, MakeRect(30,290,86,80));
	CanvasDrawLine (allvar->gamepannel, 2, MakePoint(330,65), MakePoint(allvar->arrow.x,allvar->arrow.y));

//----------alcojel draw---------------------------------	
for( i=0;i<allvar->alcojelnum;i++)
		if(allvar->alcojel[i].y>100.0)
		{CanvasDrawBitmap (allvar->gamepannel, 2, alcojelpic, VAL_ENTIRE_OBJECT, 
						  MakeRect(allvar->alcojel[i].y,allvar->alcojel[i].x,allvar->alcojel[i].width,allvar->alcojel[i].width));
		}
//----------6pac corona draw---------------------------------
for( i=0;i<allvar->beersnum;i++)
	if (allvar->beers[i].y1>100.0)
	{
		CanvasDrawBitmap (allvar->gamepannel, 2, packscoronapic, VAL_ENTIRE_OBJECT,
						  MakeRect(allvar->beers[i].y1,allvar->beers[i].x1,allvar->beers[i].width1,allvar->beers[i].width1));
	}
//----------vaccine draw---------------------------------
for( i=0;i<allvar->vaccinenum ;i++)
	if (allvar->vaccine[i].y2>100.0)
	{
		CanvasDrawBitmap (allvar->gamepannel, 2, injectionpic, VAL_ENTIRE_OBJECT,
						  MakeRect(allvar->vaccine[i].y2,allvar->vaccine[i].x2,allvar->vaccine[i].width2,allvar->vaccine[i].width2));
	}
//----------covid virus draw---------------------------------
for(i=0;i<allvar->covidnum;i++)
	if(allvar->covid[i].alive3==1)
	{
		CanvasDrawBitmap(allvar->gamepannel,2,covid_19pic,VAL_ENTIRE_OBJECT,MakeRect(allvar->covid[i].y3,allvar->covid[i].x3,allvar->covid[i].Height,allvar->covid[i].width3));
	}
//----------masks draw---------------------------------
if (allvar->lives==3)
{
	CanvasDrawBitmap (allvar->gamepannel, 2, maskspic, VAL_ENTIRE_OBJECT, MakeRect(5,5,40,40));
	CanvasDrawBitmap (allvar->gamepannel, 2, maskspic, VAL_ENTIRE_OBJECT, MakeRect(5,60,40,40));
	CanvasDrawBitmap (allvar->gamepannel, 2, maskspic, VAL_ENTIRE_OBJECT, MakeRect(5,115,40,40));
}
if (allvar->lives==2)
{
	CanvasDrawBitmap (allvar->gamepannel, 2, maskspic, VAL_ENTIRE_OBJECT, MakeRect(5,5,40,40));
	CanvasDrawBitmap (allvar->gamepannel, 2, maskspic, VAL_ENTIRE_OBJECT, MakeRect(5,60,40,40));
}
if (allvar->lives==1)
{
	CanvasDrawBitmap (allvar->gamepannel, 2, maskspic, VAL_ENTIRE_OBJECT, MakeRect(5,5,40,40));
}
if (allvar->state==6)
{
	CanvasDrawBitmap(allvar->gamepannel,2, boompic, VAL_ENTIRE_OBJECT, MakeRect(allvar->covid[j3].y3-(allvar->covid[j3].Height),allvar->covid[j3].x3-(allvar->covid[j3].width3),80,100));
	
}

	
	CanvasEndBatchDraw (allvar->gamepannel, 2);
	
	
}

int DLLEXPORT GetIndextoInsert(int score,char* name,  USER use[])///check if the score we recived have place in the best 5 scores//
{
		int i=0;
		while(score<use[i].Score)
		{
			i++;
			if(i==5)
				break;
		}
		if(i<=4){
		return i;
		}else
			return -1;
	
}
void DLLEXPORT InsertNewScore(int index,USER use[],int score,char* name)// update the top 5 score in the arrays//
{
	USER TEMP[5]={0};
	int i=0;
	if (use[index].Score==0){
		use[index].Score=score;
		strcpy(use[index].Name,name);
	}
	else{
		for(i=0;i<index;i++)
		{
		TEMP[i]=use[i];
		}
		TEMP[i].Score=score;
		strcpy(TEMP[i].Name,name);
		for(i=index+1;i<5;i++)
		{
		TEMP[i]=use[i-1];
		}
		for(i=0;i<5;i++)
		{
		use[i]=TEMP[i];
		}
	}
	
}

void DLLEXPORT PrinttoFile(void* fp,USER use[])//insert new score to the file//
{
	FILE* fptmp=(FILE*)fp;
	fptmp = fopen("scorelist.txt", "w");
			if (fptmp == NULL)
			{
				printf("Failed opening the file. Exiting!\n");
				return;
			}
	for(int i=0;i<5;i++){
	fprintf(fptmp,"%s %d\n",use[i].Name,use[i].Score);
	
	}
	fclose(fptmp);
}

void DLLEXPORT PrinttoTable(USER use[],int scorepannel)// insert new score to the table//
{
	char TEMP[5][100]={0};
	int tmpscore[5]={0};
	for(int i=0;i<5;i++){
		strcpy(TEMP[i],use[i].Name);
		tmpscore[i]=use[i].Score;
	}
	for(int i=0;i<5;i++){
	SetTableCellVal (scorepannel, 2, MakePoint (1, i+1), TEMP[i]);
	}
	for(int i=0;i<5;i++){
	SetTableCellVal (scorepannel, 2, MakePoint (2, i+1), tmpscore[i]);
	}
	
}

void DLLEXPORT MoveCovidObject(AllVaribles* allvar)// making the covid virus move on the screen
{
	for (int i3=0;i3<allvar->covidnum;i3++)
	{
		
		allvar->covid[i3].x3+=delta[i3];
		if(allvar->covid[i3].x3==700)
		delta[i3]=-1;
		if(allvar->covid[i3].x3==0)
		delta[i3]=1;
	}
}



