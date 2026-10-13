#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;

class Line
{
    int x,y,dx,dy,xi,yi,steps;
public:
    void put(){putpixel(x,y,9);}
    void lin(int x1,int y1,int x2,int y2)
    {
        dx=x2-x1; dy=y2-y1;
        if(abs(dx)>abs(dy)) steps=abs(dx); else steps=abs(dy);
        xi=dx/steps; yi=dy/steps;
        x=x1+0.5; y=y1+0.5; put();
        for(int i=1;i<=steps;i++){x=x+xi;y=y+yi;put();delay(5);}
    }
};
class Circle1
{
public:
    void circle(int x,int y,int rad)
    {
        int x1=0,y1=rad,pk=3-2*rad;
        while(x1<y1)
        {
            if(pk<=0) pk=pk+(4*x1)+6;
            else {pk=pk+4*(x1-y1)+10;y1--;}
            x1++;
            putpixel(x+x1,y+y1,3); putpixel(x-x1,y+y1,3);
            putpixel(x+x1,y-y1,3); putpixel(x-x1,y-y1,3);
            putpixel(x+y1,y+x1,3); putpixel(x-y1,y+x1,3);
            putpixel(x+y1,y-x1,3); putpixel(x-y1,y-x1,3);
            delay(10);
        }
    }
};

int main()
{
    int gd=DETECT,gm; initgraph(&gd,&gm,"");
    Line l; Circle1 c;
    l.lin(100,100,400,100); l.lin(100,400,400,400);
    l.lin(100,100,100,400); l.lin(400,100,400,400);
    l.lin(250,100,100,250); l.lin(100,250,250,400);
    l.lin(250,100,400,250); l.lin(400,250,250,400);
    c.circle(250,250,100);
    delay(5000); closegraph(); return 0;
}
