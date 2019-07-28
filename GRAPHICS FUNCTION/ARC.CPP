#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    arc(100, 200, 0, 135, 40);

    getch();
    closegraph();

    return 0;
}