#include<iostream.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x, y, radius;

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    cout<<"ENTER X-COORDINATE: ";
    cin>>x;
    cout<<"ENTER Y-COORDINATE: ";
    cin>>y;
    cout<<"ENTER RADIUS: ";
    cin>>radius;

    circle(x, y, radius);  //DRAW THE CIRCLE ON STANDARD CONSOLE

    getch();
    closegraph();

    return 0;
}