#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI") //INTIALIZE THE GRAPHICS SYSTEM.

    circle(100, 200, 50); //THIS FUNCTION DRAW THE CIRCLE.

    getch();
    closegraph();  //THIS CLOSES THE GRAPHICS MODE AND DEALLOCATES ALL MEMORY ALLOCATED BY GRAPHICS SYSTEM.

    return 0;
}