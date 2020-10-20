
#include<iostream>

#include<conio.h>

#include<graphics.h>

#include<math.h>

#include<dos.h>

#define round(a) ((int)a+0.5)
using namespace std;

void putcircle(int xc,int yc,int x,int y)

{

putpixel(xc+x,yc+y,1);

putpixel(xc-x,yc+y,2);

putpixel(xc+x,yc-y,3);

putpixel(xc-x,yc-y,4);

putpixel(xc+y,yc+x,5);

putpixel(xc-y,yc+x,6);

putpixel(xc+y,yc-x,7);

putpixel(xc-y,yc-x,8);

}

void circlemid(int xc,int yc,float r)

{

float x=0,y=r;

int p=1-r;

while(x<y)

{

x++;

if(p<0)

p=p+(2*x)+1;

else

{

y--;

p=p+(2*(x-y)+1);

}

putcircle(xc,yc,round(x),round(y));

delay(10);

}

}

int main()

{


int gd=DETECT,gm;

initgraph(&gd,&gm," ");

int xc,yc,r;

cout<<"Enter centre co-ordinates:";

cin>>xc>>yc;

cout<<"Enter radius:";

cin>>r;

circlemid(xc,yc,r);

setcolor(10);

circle(xc,yc,r);

getch();

closegraph();

}
