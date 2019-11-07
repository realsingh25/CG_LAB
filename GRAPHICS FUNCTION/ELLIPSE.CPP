#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    ellipse(100, 200, 0, 360, 40, 60);

    getch();
    closegraph();

    return 0;
}