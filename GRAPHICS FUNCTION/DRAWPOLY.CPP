#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    int points = {320, 150, 420, 300, 250, 300, 320, 150};

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    drawpoly(4, points);

    getch();
    closegraph();

    return 0;
}