#include<conio.h>
#include<graphics.h>

int main()
{
    int x = DETECT,g;
    initgraph(&x,&g,"C:\\TURBOC3\\BGI");

    settextstyle(7, HORIZ_DIR, 5);
    outtextxy(0,0,"Abhishek");

    getch();
    closegraph()

    return 0;
}