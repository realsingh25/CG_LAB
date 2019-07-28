#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

void main(){
    float x, y, x1, y1, x2, y2, dx, dy, length;
    int i, gd, gm;

    cout<<"Enter the value of x1: ";
    cin>>x1;
    cout<<"Enter the value of y1: ";
    cin>>y1;
    cout<<"Enter the value of x2: ";
    cin>>x2;
    cout<<"Enter the value of y2: ";
    cin>>y2;

    detectgraph(&gd, &gm);      // INITIALISE GRAPHICS MODE
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if (dx >= dy){
        length = dx;
    }
    else{
        length = dy;
    }

    dx = (x2 - x1)/length;
    dy = (y2 - y1)/length;

    x = x1 + 0.5;
    y = y1 + 0.5;

    i = 1;
    while(i <= length){
        putpixel(x, y, 15);
        x = x + dx;
        y = y + dy;
        i++;
    delay(100);     // TO OBSERVE THE LINE DRAWING
    }
    
    getch();
    closegraph();
}