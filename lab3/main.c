#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void gotoxy1(int x, int y);
void printMenu(void);
void ADD(void);
void SUB(void);
void MUL(void);
void DIV(void);

int main()
{
    int x=0,y=0;
    int in,in2;

    printMenu();

    while(y!=15)
    {
        system("cls");
        printMenu();
        gotoxy1(x,y);
        in=getch();
        if(in==-32)
            in=getch();
        if(in==80)
            {
                if(y==4)
                    y=0;
                else
                    y++;
            }
        else if(in==72)
        {
            if(y==0)
                y=4;
            else
                y--;
        }
        else if(in==13)
            {
                system("cls");
                switch(y)
                {
                case 0:
                    ADD();
                    printf("press any key to continue");
                    in2 = getch();
                    break;
                case 1:
                    SUB();
                    printf("press any key to continue");
                    in2 = getch();
                    break;
                case 2:
                    MUL();
                    printf("press any key to continue");
                    in2 = getch();
                    break;
                case 3:
                    DIV();
                    printf("press any key to continue");
                    in2 = getch();
                    break;
                case 4:
                    y=15;
                    break;
                }
            }

    }

    return 0;
}

void gotoxy1(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printMenu(void)
{
    gotoxy1(2,0);
    printf("1-ADD");
    gotoxy1(2,1);
    printf("2-Subtract");
    gotoxy1(2,2);
    printf("3-Multiply");
    gotoxy1(2,3);
    printf("4-Divide");
    gotoxy1(2,4);
    printf("5-Exit");
}

void ADD(void)
{
    int x,y;
    printf("Please, enter the first number: ");
    scanf("%d", &x);
    printf("Please, enter the second number: ");
    scanf("%d", &y);
    printf("The result is %d\n", x+y);
}

void SUB(void)
{
    int x,y;
    printf("Please, enter the first number: ");
    scanf("%d", &x);
    printf("Please, enter the second number: ");
    scanf("%d", &y);
    printf("The result is %d\n", x-y);
}

void MUL(void)
{
    int x,y;
    printf("Please, enter the first number: ");
    scanf("%d", &x);
    printf("Please, enter the second number: ");
    scanf("%d", &y);
    printf("The result is %d\n", x*y);
}

void DIV(void)
{
    int x,y;
    printf("Please, enter the first number: ");
    scanf("%d", &x);
    printf("Please, enter the second number: ");
    scanf("%d", &y);
    printf("The result is %d\n", x/y);
}
