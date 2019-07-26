#include<iostream.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    // int a, b, c, d;

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // cout<<"ENTER VALUE OF A: ";
    // cin>>a;
    // cout<<"ENTER VALUE OF B: ";
    // cin>>b;
    // cout<<"ENTER VALUE OF C: ";
    // cin>>c;
    // cout<<"ENTER VALUE OF D: ";
    // cin>>d;

    rectangle(100, 100, 200, 200);  //DRAW THE RECTANGLE ON STANDARD CONSOLE

    getch();
    closegraph();

    return 0;
}