#include <userint.h>
#define ALCOJEL_NUM 20
#define BEERS_NUM 10
#define VACCINE_NUM 10
#define COVID_NUM 20

////////////Structs decleration/////////

typedef struct ARROW
{
	double x;
	double y;
	double line;
	
}ARROW;



typedef struct ALCOJEL
{
	int x;
	int y;
	double width;
	int alive;
	
}ALCOJEL;



typedef struct BEERS
{
	int x1;
	int y1;
	double width1;
	int alive1;
}BEERS;



typedef struct VACCINE
{
	int x2;
	int y2;
	double width2;
	int alive2;
}VACCINE;



typedef struct COVIDVIRUS
{
	int x3;
	int y3;
	double width3;
	double Height;
	int alive3
	
}COVIDVIRUS;

typedef struct AllVaribles
{
	int state;
	int degree;
	int ddeg; 
	int lives;
	int score;
	int gamepannel;
	int alcojelnum; 
    int beersnum;
	int vaccinenum;
	int covidnum;
	int timer;
	double dline;
	ALCOJEL alcojel[ALCOJEL_NUM ];
	BEERS beers[BEERS_NUM];
    VACCINE vaccine[VACCINE_NUM];
	COVIDVIRUS covid[COVID_NUM];
	ARROW arrow;
	CAObjHandle mediaHandle;
	
}AllVaribles;

typedef struct USER
{
	char Name[100];
	int Score;
	
}USER;

/////////decleration of dll vars:////////
static int DLLIMPORT j,j1,j2,j3;//j=alcojel index, j1= 6pac index, j2=injection index, j3=covid19 index.
static int DLLIMPORT delta[COVID_NUM] ;

/*** Function prototypes ***/
void DLLEXPORT LoadSources(int* maskspic, int* injectionpic, int* covid_19pic, int* alcojelpic, int* yoram_lasspic, int* packscoronapic, int* boompic,int* background);
void DLLEXPORT InitGame(AllVaribles* allvar);
void DLLEXPORT draw(AllVaribles* allvar,int maskspic, int injectionpic, int covid_19pic, int alcojelpic, int yoram_lasspic, int packscoronapic, int boompic, int background);
void DLLEXPORT StateMachine(AllVaribles* allvar);
int  DLLEXPORT GetIndextoInsert(int score,char* name,  USER use[]);
void DLLEXPORT InsertNewScore(int index,USER use[],int score,char* name);
void DLLEXPORT PrinttoFile(void* fp,USER use[]);
void DLLEXPORT PrinttoTable(USER use[],int scorepannel);
void DLLEXPORT MoveCovidObject(AllVaribles* allvar);