#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd=DETECT,gm,x1,x2,y1,y2,x4,y4;
    initgraph(&gd,&gm,"C:\\Tc\\BGI");
    float angle=0,ang;
    cout<<"\nROTATION OF A LINE\n";
    cout<<"Enter the first coordinate of a line:";
    cin>>x1>>y1;
    cout<<"Enter the second coordinate of a line:";
    cin>>x2>>y2;
    line(x1,y1,x2,y2);
    cout<<"Enter the angle:";
    cin>>ang;
    angle=(ang*3.14)⁄180;
    setcolor(RED);
    x4=x2-(((x2-x1)*cos(angle))-((y2-y1)+sin(angle)));
    y4=y2-(((x2-x1)*sin(angle))+((y2-y1)*cos(angle)));
    line(x2,y2,x4,y4);
    getch();
    closegraph();
}
