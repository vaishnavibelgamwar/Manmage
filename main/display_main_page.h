#ifndef DISPLAY_MAIN_PAGE_H_INCLUDED
#define DISPLAY_MAIN_PAGE_H_INCLUDED

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<dos.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void display_main_page()
{	system("cls");
	system("color a");
	gotoxy(20,20);
	printf("----------------------------------------------------------------------------------------------------------------");
	printf("WELCOME TO...");
	gotoxy(40,60);
	printf("A T T E N D E N C E  M A N A G E R");
	gotoxy(300,300);
	printf("PROJECT BY:ONKAR GAVALI.");
	gotoxy(380,310);
	printf("DEVANG KAMBLE.");
	gotoxy(380,320);
	printf("VAISHNAVI BELGAMWAR.                                                 ");
	gotoxy(300,340);
	printf("MENTORS:NISHI BHATE.                                                                     ");
	gotoxy(360,350);
	printf("ABHISHEK MORE.                         ");
	printf("----------------------------------------------------------------------------------------------------------------");
	getch();
	return;//header file end
}




#endif // DISPLAY_MAIN_PAGE_H_INCLUDED
