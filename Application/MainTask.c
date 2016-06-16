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
const int MouthDays(int year, int mouth);
const int yearDays(int year);
const int DayisWeek(int year, int mouth, int day);
void printCalendar(int year, int mouth, int day);

/*
  *******************************************************************
  *
  *              main()
  *
  *******************************************************************
*/
void MainTask(void) {
	int select = 0, up = 0, down = 0, secondm = 0, second = 0, minute = 0, hour = 10, day = 13, mouth = 6, year = 2016, i = 0;
	const GUI_BITMAP *pBitmap;
	GUI_PID_STATE TouchState;
	GUI_Init();
	GUI_SetBkColor(960616);//设置背景色
	GUI_SetColor(GUI_WHITE);//设置前景色
	GUI_Clear();//清屏
	GUI_SetColor(000000);//按钮背景色
	pBitmap = &bmpicture;
	GUI_DrawBitmap(pBitmap, 10, 10);//这两句为显示图片
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
	GUI_DispStringHCenterAt(">", 305, 25);//设置各个字符显示的内容和位置
	GUI_SetFont(&GUI_FontHZ24);//设置字体大小
	GUI_DispStringHCenterAt("月", 50, 20);//24号的月字
	GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
	GUI_DispStringHCenterAt(":", 160, 20);
	GUI_DispStringHCenterAt(":", 200, 20);
	
	printCalendar(year, mouth, day);//显示日历
	GUI_SetColor(GUI_WHITE);//设置时间数字颜色
	GUI_SetBkColor(960616);//设置时间数字背景色
	//点击选择时使选中高亮显示



	while (1)
	{
		if (select == 1)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		GUI_DispDecAt(second, 210, 20, 2);//显示秒
		GUI_SetColor(GUI_WHITE);
		if (select == 2)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		GUI_DispDecAt(minute, 170, 20, 2);//分
		GUI_SetColor(GUI_WHITE);
		if (select == 3)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		GUI_DispDecAt(hour, 130, 20, 2);//时
		GUI_SetColor(GUI_WHITE);
		//if (select==4)
		// GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		//GUI_DispDecAt( day, 250,27,2);//日
		GUI_SetColor(GUI_WHITE);
		if (select == 5)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font24B_ASCII);  //设置字体大小
		GUI_DispDecAt(mouth, 15, 20, 2);//月
		GUI_SetColor(GUI_WHITE);
		if (select == 6)
			GUI_SetColor(GUI_BLACK);
		GUI_SetFont(&GUI_Font16B_ASCII);  //设置字体大小
		GUI_DispDecAt(year, 70, 35, 4);//年
		GUI_SetColor(GUI_WHITE);

		secondm = GUI_GetTime() / 100;//获取时钟信号
		secondm %= 10;
		if (secondm == 9)
		{
			second++; GUI_Delay(100);
		}
		if (second >= 60)
		{
			minute++; second = 0;//当够60秒是进位分
		}
		if (second < 0)
		{
			minute--; second = 59;
		}
		if (minute >= 60)
		{
			hour++; minute = 0;
		}
		if (minute < 0)
		{
			hour--; minute = 59;
		}
		if (hour >= 24)
		{
			day++; hour = 0; printCalendar(year, mouth, day);//时间过24点后天数+1并清零小时，同时更新日历
		}
		if (hour < 0)
		{
			day--; hour = 23; printCalendar(year, mouth, day);//时间过0点后天数-1并设置为23点，同时更新日历
		}
		if (mouth == 2)
		{
			if (RunNian(year))
			{
				if (day > 29)
				{
					mouth++; day = 1;//如果为闰年则2月为29天
				}
			}
			else if (day > 28)
			{
				mouth++; day = 1;//如果不为闰年则2月为28天
			}
		}
		if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11)
		{
			if (day > 30)
			{
				mouth++; day = 1;//如果是4、6、9、11月则为30天
			}
		}
		else if (day > 31)
		{
			mouth++; day = 1;
		}
		if (mouth == 3)
		{
			if (RunNian(year))
			{
				if (day <= 0)
				{
					mouth--; day = 29;
				}
			}
			else if (day <= 0)
			{
				mouth--; day = 28;
			}
		}
		if (mouth == 5 || mouth == 7 || mouth == 10 || mouth == 12)
		{
			if (day <= 0)
			{
				mouth--; day = 30;
			}
		}
		else if (day <= 0)
		{
			mouth--; day = 31;
		}
		if (mouth > 12)
		{
			year++; mouth = 1; printCalendar(year, mouth, day);//如果月份大于12，则年份+1并清零月份，同时更新日历
		}
		if (mouth <= 0)
		{
			year--; mouth = 12; printCalendar(year, mouth, day);
		}



		//*****************************第二步检测触摸屏*******************************
		if (GUI_TOUCH_GetState(&TouchState)) {
			if ((TouchState.x > 27) && (TouchState.x < 71) && (TouchState.y>209) && (TouchState.y < 232))//“设置按键”
			{
				select++;
				if (select >= 7)
					select = 0;//每按一次select+1，超过7次清零
				while (GUI_TOUCH_GetState(&TouchState));//猜测用于消抖，下同
			}
			//快速切换日历
			if ((TouchState.x > 245) && (TouchState.x < 257) && (TouchState.y>20) && (TouchState.y < 45))//上年
			{
				year--;
				printCalendar(year, mouth, day);//点击上年按钮时年份-1，同时更新日历
				while (GUI_TOUCH_GetState(&TouchState));
			}
			if ((TouchState.x > 258) && (TouchState.x < 273) && (TouchState.y>20) && (TouchState.y < 45))//上个月
			{
				mouth--;
				printCalendar(year, mouth, day);//点击上月按钮时月份-1，同时更新日历
				while (GUI_TOUCH_GetState(&TouchState));
			}
			if ((TouchState.x > 278) && (TouchState.x < 290) && (TouchState.y>20) && (TouchState.y < 45))//下个月
			{
				mouth++;
				printCalendar(year, mouth, day);//点击下月按钮时月份+1，同时更新日历
				while (GUI_TOUCH_GetState(&TouchState));
			}
			if ((TouchState.x > 293) && (TouchState.x < 306) && (TouchState.y>20) && (TouchState.y < 45))//下一年
			{
				year++;
				printCalendar(year, mouth, day);//点击下年按钮时年份+1，同时更新日历
				while (GUI_TOUCH_GetState(&TouchState));
			}
			//手动设置增加
			if ((TouchState.x > 117) && (TouchState.x < 161) && (TouchState.y>209) && (TouchState.y < 232))
			{
				switch (select)
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
					printCalendar(year, mouth, day);//点击增加时天数+1，同时更新日历
					break;
				case 5:
					mouth++;
					printCalendar(year, mouth, day); //点击增加时月份+1，同时更新日历
					break;
				case 6:
					year++;
					printCalendar(year, mouth, day);//点击增加时年份+1，同时更新日历
					break;
				}
				while (GUI_TOUCH_GetState(&TouchState));
			}
			//手动设置减少
			if ((TouchState.x > 207) && (TouchState.x < 251) && (TouchState.y>209) && (TouchState.y < 232)) //点击减少键
			{
				switch (select)
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
					printCalendar(year, mouth, day);//点击减少时天数-1，同时更新日历
					break;
				case 5:
					mouth--;
					printCalendar(year, mouth, day);//点击减少时月份-1，同时更新日历
					break;
				case 6:
					year--;
					printCalendar(year, mouth, day);//点击减少时年份-1，同时更新日历
					break;
				}
				while (GUI_TOUCH_GetState(&TouchState));
			}
		}
	}
}
//判断是否为闰年
const int RunNian(int year)//输入年份
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
		return 1;
	else return 0;
}
//判断某年某月有多少天
const int MouthDays(int year, int mouth)//输入年份和月份
{
	switch (mouth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:return 31; break;
	case 4:
	case 6:
	case 9:
	case 11:return 30; break;
	case 2:
		if (RunNian(year))
		{
			return 29;
		}
		else {
			return 28;
		}
		break;
	default:return 0; break;
	}
}
//判断这年有多少天
const int YearDays(int year)
{
	if (RunNian(year)) return 366;
	else
		return 365;
}
//判断这一天为周几
const int DayisWeek(int year, int mouth, int day) {
	int week;
	if (mouth == 1 || mouth == 2)
	{
		mouth += 12; year--;
	}
	week = (day + 2 * mouth + 3 * (mouth + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;//蔡勒（Zeller）公式
	return week;
}
//显示日历函数（重点！！！）
void printCalendar(int year, int mouth, int day) {
	int i;
	GUI_SetColor(960616);
	LCD_L0_FillRect(30, 60, 320, 205);//覆盖显示上次的日历，避免重叠
	GUI_SetColor(GUI_WHITE);
	GUI_SetBkColor(960616);//设置字体背景色
	GUI_SetFont(&GUI_FontHZ16);//设置字体大小
	GUI_DispStringHCenterAt("日", 40, 70);
	GUI_DispStringHCenterAt("一", 80, 70);
	GUI_DispStringHCenterAt("二", 120, 70);
	GUI_DispStringHCenterAt("三", 160, 70);
	GUI_DispStringHCenterAt("四", 200, 70);
	GUI_DispStringHCenterAt("五", 240, 70);
	GUI_DispStringHCenterAt("六", 280, 70);//格式化显示星期数
	//GUI_DispDecAt(DayisWeek(year,mouth,1), 10,200,2);
	//判断这个月1号为周几
	switch (DayisWeek(year, mouth, 1))
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
	//显示日历
	GUI_SetFont(&GUI_Font16B_ASCII);
	if (DayisWeek(year, mouth, 1) < 6)//如果这月1号不是周一
		GUI_GotoXY(35 + (DayisWeek(year, mouth, 1) + 1) * 40, 90);//1号所显示的位置
	else GUI_GotoXY(35, 90);//如果1号为周一则在这个坐标显示
	for (i = 1; i <= MouthDays(year, mouth); i++)//从1号到这个月月末循环
	{
		if (i == day)
		{
			//GUI_SetColor(GUI_YELLOW);
			//GUI_FillCircle(200,120,20);//圆形显示效果不佳，故没有添加
			GUI_SetColor(GUI_BLACK);
			GUI_SetBkColor(960616);//如果是当天，则显示为黑色
		}

		if (i < 10)
		{
			GUI_DispDecSpace(i, 2);
			GUI_GotoXY(GUI_GetDispPosX() + 30, GUI_GetDispPosY());//如果天数小于10，则每隔30像素显示一次
		}
		else
		{
			GUI_DispDecSpace(i, 2);
			GUI_GotoXY(GUI_GetDispPosX() + 26, GUI_GetDispPosY());
		}

		GUI_SetColor(GUI_WHITE);
		//周六周日显示为黄色
		if ((DayisWeek(year, mouth, i + 1)) == 5)
			GUI_SetColor(GUI_YELLOW);
		if (DayisWeek(year, mouth, i + 1) == 6)
		{
			GUI_SetColor(GUI_YELLOW);
			//GUI_DispString("\n");
			//GUI_GotoX(35);//换行显示错误
			GUI_GotoXY(35, GUI_GetDispPosY() + 20);//如果为周六，换到下一行显示
		}
	}
}

