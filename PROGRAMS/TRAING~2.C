#include<conio.h>
#include<stdio.h>
#include<Graphics.h>

void main()
{
int i;
int tx1[3], ty1[3], tx2[3], ty2[3];
int vx,vy;
int x1[3]={300,300,200};
int y1[3]={100,100,200};
int x2[3]={200,400,400};
int y2[3]={200,200,200};
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

for (i=0; i<3; i++)
line(x1[i],y1[i],x2[i],y2[i]);


printf("Enter Translation Vector: ");
scanf("%d%d",&vx,&vy);

for(i=0;i<3;i++){
   tx1[i] = x1[i] + vx;
   ty1[i] = y1[i] + vy;
   tx2[i] = x2[i] + vx;
   ty2[i] = y2[i] + vy;
}
setcolor(14);
for(i=0;i<3;i++)
line(tx1[i], ty1[i], tx2[i], ty2[i]);

getch();
closegraph();
}
