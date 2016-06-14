#include "GUI.h"
#include "GUI_Protected.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
extern const GUI_BITMAP bmMicriumLogo;
extern const GUI_BITMAP bmMicriumLogo1;
extern const GUI_BITMAP bmMicriumLogo2;
extern const GUI_BITMAP bmMicriumLogo3;
extern const GUI_BITMAP bmMicriumLogo4;
extern const GUI_BITMAP bmMicriumLogo_1bpp;
extern const GUI_BITMAP bmpicture;


const int RunNian(int year);
const int MouthDays(int year,int mouth);
const int yearDays(int year);
const int DayisWeek(int year,int mouth,int day);
void printCalendar(int year,int mouth);
/*
  *******************************************************************
  *
  *              main()
  *
  *******************************************************************
*/
void MainTask(void) {
	int select=0,up=0,down=0,secondm=0,second=0,minute=0,hour=10,day=13,mouth=6,year=2016,i=0;
	const GUI_BITMAP *pBitmap;
	GUI_PID_STATE TouchState;
	GUI_Init();
	GUI_SetBkColor(960616);//设置背景色
    GUI_SetColor(GUI_WHITE);//设置前景色
    GUI_Clear();
    GUI_SetColor(000000);//按钮背景色
	//pBitmap=&bmpicture;
    //GUI_DrawBitmap(pBitmap,10,10);
	//LCD_L0_FillRect(207, 201, 251, 224);text
    GUI_SetColor(GUI_WHITE);//设置字体颜色
	GUI_SetBkColor(960616);//设置字体背景色
	GUI_SetFont(&GUI_FontHZ16);//设置字体大小
	GUI_DispStringHCenterAt("设置", 50, 213);
	GUI_DispStringHCenterAt("增加", 140, 213);
	GUI_DispStringHCenterAt("减少", 230, 213);
	GUI_DispStringHCenterAt("年", 110, 35);
	GUI_DispStringHCenterAt("周", 85, 17);
	GUI_DispStringHCenterAt("<", 255, 25);
	GUI_DispStringHCenterAt("<", 270, 25);
	GUI_DispStringHCenterAt(">", 290, 25);
	GUI_DispStringHCenterAt(">", 305, 25);
	GUI_SetFont(&GUI_FontHZ24);//设置字体大小
	GUI_DispStringHCenterAt("月", 50, 20);
	GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
	GUI_DispStringHCenterAt(":", 160, 20);
	GUI_DispStringHCenterAt(":", 200, 20);
	printCalendar(year,mouth,day);
	GUI_SetColor(GUI_WHITE);//设置时间数字颜色
    GUI_SetBkColor(960616);//设置时间数字背景色
	while (1)
	{
		if (select==1)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
        GUI_DispDecAt( second, 210,20,2);//秒
		GUI_SetColor(GUI_WHITE);
		if (select==2)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		GUI_DispDecAt( minute, 170,20,2);//分
		GUI_SetColor(GUI_WHITE); 
		if (select==3)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		GUI_DispDecAt( hour, 130,20,2);//时
		GUI_SetColor(GUI_WHITE);   
		//if (select==4)
		// GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		//GUI_DispDecAt( day, 250,27,2);//日
		GUI_SetColor(GUI_WHITE);
		if (select==5) 
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		GUI_DispDecAt(mouth, 15,20,2);//月
		GUI_SetColor(GUI_WHITE);   
		if (select==6)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font16B_ASCII);  //设置字体大小
		GUI_DispDecAt( year, 70,35,4);//年
		GUI_SetColor(GUI_WHITE);
		
		secondm=GUI_GetTime()/100;//获取时钟信号
		secondm%=10;
		if(secondm==9)
		{second++; GUI_Delay(100);}
		if(second>=60)
		{minute++; second=0;}
		if(second<0)
		{minute--; second=59;}
		if(minute>=60)
		{hour++; minute=0;}
		if(minute<0)
		{hour--; minute=59;}
		if(hour>=24)
		{day++;hour=0;printCalendar(year,mouth,day);}
		if(hour<0)
		{day--; hour=23;printCalendar(year,mouth,day);}
		if(mouth==2)
		{if((year%100!=0&&year%4==0)||year%400==0)
		  {if(day>29)
			  {mouth++;day=1;}}
		  else if(day>28)
		  {mouth++;day=1;}}
		if(mouth==4||mouth==6||mouth==9||mouth==11) 
		{if(day>30)
		  {mouth++;day=1;}}
		else if(day>31)
		{mouth++;day=1;}
		if(mouth==3)
		{if(RunNian(year))
		  {if(day<=0)
			  {mouth--;day=29;}}
		  else if(day<=0)
		  {mouth--;day=28;}}
		if(mouth==5||mouth==7||mouth==10||mouth==12) 
		{if(day<=0)
		  {mouth--;day=30;}}
		else if(day<=0)
		{mouth--;day=31;}
		if(mouth>12)
		{year++; mouth=1;printCalendar(year,mouth,day);}
		if(mouth<=0)
		{year--; mouth=12;printCalendar(year,mouth,day);}

	  

//*****************************第二步检测触摸屏*******************************
		if(GUI_TOUCH_GetState(&TouchState)){
			if((TouchState.x>27)&&(TouchState.x<71)&&(TouchState.y>209)&&(TouchState.y<232))//第一个按键
		{select++;
		if(select>=7)
		  select=0;
		while(GUI_TOUCH_GetState(&TouchState));
		}
			if((TouchState.x>245)&&(TouchState.x<257)&&(TouchState.y>20)&&(TouchState.y<45))//上年
			{
				year--;
				printCalendar(year,mouth,day);
				while(GUI_TOUCH_GetState(&TouchState));
			}
			if((TouchState.x>258)&&(TouchState.x<273)&&(TouchState.y>20)&&(TouchState.y<45))//上个月
			{
				mouth--;
				printCalendar(year,mouth,day);
				while(GUI_TOUCH_GetState(&TouchState));
			}
			if((TouchState.x>278)&&(TouchState.x<290)&&(TouchState.y>20)&&(TouchState.y<45))//下个月
			{
				mouth++;
				printCalendar(year,mouth,day);
				while(GUI_TOUCH_GetState(&TouchState));
			}
			if((TouchState.x>293)&&(TouchState.x<306)&&(TouchState.y>20)&&(TouchState.y<45))//下一年
			{
				year++;
				printCalendar(year,mouth,day);
				while(GUI_TOUCH_GetState(&TouchState));
			}

			if((TouchState.x>117)&&(TouchState.x<161)&&(TouchState.y>209)&&(TouchState.y<232))
			{
				switch(select)
				{
				case 1:
					second++;
					break;
				case 2:
					minute++;
					break;
				case 3:
					hour++;
					break;
				case 4:
					day++;
					printCalendar(year,mouth,day);
					break;
				case 5:
					mouth++;
					printCalendar(year,mouth,day);
					break;
				case 6:
					year++;
					printCalendar(year,mouth,day);
					break;
				}
				while(GUI_TOUCH_GetState(&TouchState));
			}
			if((TouchState.x>207)&&(TouchState.x<251)&&(TouchState.y>209)&&(TouchState.y<232)) //点击减少键
			{
				switch(select)
				{
				case 1:
					second--;
					break;
				case 2:
					minute--;
					break;
				case 3:
					hour--;
					break;
				case 4:
					day--;
					printCalendar(year,mouth,day);
					break;
				case 5:
					mouth--;
					printCalendar(year,mouth,day);
					break;
				case 6:
					year--;
					printCalendar(year,mouth,day);
					break; 
				}
				while(GUI_TOUCH_GetState(&TouchState));
			}
		}
}
}



const int RunNian(int year)
{
	if((year%4==0&&year%100!=0)||(year%100==0&&year%400==0))
		return 1;
	else return 0;
}

const int MouthDays(int year,int mouth)
{
	switch(mouth)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:return 31;break;
		case 4:
		case 6:
		case 9:
		case 11:return 30;break;
		case 2:
		if(RunNian(year))
		{
			return 29;
		}
		else{
			return 28;
		}
		break;
		default:return 0;break;
	}
}

const int YearDays(int year)
{
	if (RunNian(year)) return 366;
	else
		return 365;
}

const int DayisWeek(int year,int mouth,int day){
	int week;
	if(mouth==1||mouth==2)
	{
		mouth+=12; year--;
	}
	week=(day+2*mouth+3*(mouth+1)/5+year+year/4-year/100+year/400)%7;
	return week;
}

void printCalendar(int year,int mouth,int day){
	int i;
	GUI_SetColor(960616);
	LCD_L0_FillRect(30, 60, 320, 205);
	GUI_SetColor(GUI_WHITE);
	GUI_SetBkColor(960616);//设置字体背景色
	 GUI_SetFont(&GUI_FontHZ16);//设置字体大小
	 GUI_DispStringHCenterAt("日", 40, 70);
	 GUI_DispStringHCenterAt("一", 80, 70);
	 GUI_DispStringHCenterAt("二", 120, 70);
	 GUI_DispStringHCenterAt("三", 160, 70);
	 GUI_DispStringHCenterAt("四", 200, 70);
	 GUI_DispStringHCenterAt("五", 240, 70);
	 GUI_DispStringHCenterAt("六", 280, 70);
	 //GUI_DispDecAt(DayisWeek(year,mouth,1), 10,200,2);

	 switch(DayisWeek(year,mouth,1))
	{
	case 1:
		GUI_DispStringHCenterAt("日", 108, 17);
		break;
	case 2:
		GUI_DispStringHCenterAt("一", 108, 17);
		break;
	case 3:
		GUI_DispStringHCenterAt("二", 108, 17);
		break;
	case 4:
		GUI_DispStringHCenterAt("三", 108, 17);
		break;
	case 5:
		GUI_DispStringHCenterAt("四", 108, 17);
		break;
	case 6:
		GUI_DispStringHCenterAt("五", 108, 17);
		break;
	case 0:
		GUI_DispStringHCenterAt("六", 108, 17);
		break;
	}
	 

	 GUI_SetFont(&GUI_Font16B_ASCII);
	 if (DayisWeek(year,mouth,1)<6)
		 GUI_GotoXY(35+(DayisWeek(year,mouth,1)+1)*40,90);
	 else GUI_GotoXY(35,90);
	for (i = 1; i <=MouthDays(year,mouth) ; i++)
	{

		
		if(i==day)
		{
			//GUI_SetColor(GUI_YELLOW);

			//GUI_FillCircle(200,120,20);

			GUI_SetColor(GUI_BLACK);
			GUI_SetBkColor(960616);
		}
		
		if(i<10)
		{
			GUI_DispDecSpace(i,2);
			GUI_GotoXY(GUI_GetDispPosX()+30,GUI_GetDispPosY());
		}
		else
		{
			GUI_DispDecSpace(i,2);
			GUI_GotoXY(GUI_GetDispPosX()+26,GUI_GetDispPosY());
		}
		
		GUI_SetColor(GUI_WHITE);

		if((DayisWeek(year,mouth,i+1))==5) 
			GUI_SetColor(GUI_YELLOW);
		if(DayisWeek(year,mouth,i+1)==6) 
		{
			GUI_SetColor(GUI_YELLOW);
			//GUI_DispString("\n");
			//GUI_GotoX(35);
			GUI_GotoXY(35,GUI_GetDispPosY()+20);
		}
	}
}


