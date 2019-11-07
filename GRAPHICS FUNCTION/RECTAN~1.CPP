#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    rectangle(100, 200, 40, 60);

    getch();
    closegraph();

    return 0;
}