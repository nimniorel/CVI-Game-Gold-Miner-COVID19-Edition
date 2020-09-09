/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  ABOUTPANEL                       1       /* callback function: Aboutcallback */
#define  ABOUTPANEL_PICTURE               2       /* control type: picture, callback function: (none) */
#define  ABOUTPANEL_TEXTMSG               3       /* control type: textMsg, callback function: (none) */

#define  Game_Panne                       2       /* callback function: gamepannelcallback */
#define  Game_Panne_CANVAS                2       /* control type: canvas, callback function: PressButtonCallback */
#define  Game_Panne_SCORE                 3       /* control type: numeric, callback function: (none) */
#define  Game_Panne_OKBUTTON              4       /* control type: command, callback function: ExitCallback */
#define  Game_Panne_TIMER                 5       /* control type: timer, callback function: timeofgamecallback */
#define  Game_Panne_NUMERIC               6       /* control type: numeric, callback function: (none) */

#define  HELP_PANEL                       3       /* callback function: help_callback */
#define  HELP_PANEL_WINDOWSMEDIAPLAYER    2       /* control type: activeX, callback function: (none) */

#define  MAINPANNEL                       4       /* callback function: WelcomePagecallback */
#define  MAINPANNEL_PICTURE               2       /* control type: picture, callback function: (none) */
#define  MAINPANNEL_MAIN_NAME             3       /* control type: string, callback function: (none) */
#define  MAINPANNEL_score                 4       /* control type: textMsg, callback function: scorecallback */
#define  MAINPANNEL_START                 5       /* control type: textMsg, callback function: STARTCALLBACK */

#define  PANEL_AUDI                       5
#define  PANEL_AUDI_WINDOWSMEDIAPLAYER    2       /* control type: activeX, callback function: (none) */

#define  SCORETABLE                       6       /* callback function: scoretablecallback */
#define  SCORETABLE_TABLE                 2       /* control type: table, callback function: (none) */
#define  SCORETABLE_TOMAINBUTTON          3       /* control type: command, callback function: backtomenucallback */
#define  SCORETABLE_PICTURE               4       /* control type: picture, callback function: (none) */

#define  STORE                            7       /* callback function: storecallback */
#define  STORE_OKBUTTON                   2       /* control type: command, callback function: nextlevelCallback */
#define  STORE_PICTURE                    3       /* control type: picture, callback function: (none) */
#define  STORE_MORELIVES                  4       /* control type: picture, callback function: morelivescallback */
#define  STORE_VACCINE                    5       /* control type: picture, callback function: morevaccinecallback */
#define  STORE_MOREALCOJEL                6       /* control type: picture, callback function: morealcojelcallback */
#define  STORE_LESSBEER                   7       /* control type: picture, callback function: lessbeercallback */
#define  STORE_NUMERIC_score_STORE        8       /* control type: numeric, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

#define  MENUBAR                          1
#define  MENUBAR_File                     2       /* callback function: Menubar_file */
#define  MENUBAR_File_HELP                3       /* callback function: Menubar_help */
#define  MENUBAR_File_ABOUT               4       /* callback function: Menubar_about */
#define  MENUBAR_File_EXIT                5       /* callback function: Menubar_Exit */


     /* Callback Prototypes: */

int  CVICALLBACK Aboutcallback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK backtomenucallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ExitCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK gamepannelcallback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK help_callback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK lessbeercallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK Menubar_about(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK Menubar_Exit(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK Menubar_file(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK Menubar_help(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK morealcojelcallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK morelivescallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK morevaccinecallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK nextlevelCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PressButtonCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK scorecallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK scoretablecallback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK STARTCALLBACK(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK storecallback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK timeofgamecallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK WelcomePagecallback(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif