/* Program to draw ellip
se using ellipse alogorithm */



#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	clrscr();
	int gd=DETECT, gm;
	int xc, yc,x,y;
	long rx, ry;
	float p;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	cout<<"Enter the co-ordinates of the center:";
	cin>>xc>>yc;
	cout<<"Enter the x,y radius of the ellipse:";
	cin>>rx>>ry;

	//region 1
	p=ry*ry-rx*rx*ry+rx*rx/4;
	x=0;
	y=ry;
	while(2.0*ry*ry*x<=2.0*rx*rx*y)
	{
		if(p<0)
		{
			x++;
			p=p+2*ry*ry*x+ry+ry;
		}
		else
		{
			x++;
			y--;
			p=p+2*ry*ry*x-2*rx*rx*y-ry*ry;
		}
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
	}

	//region 2
	p=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
	while(y>0)
	{
		if(p<=0)
		{
			x++;
			y--;
			p=p+2*ry*ry*x-2*rx*rx*y+rx*rx;
		}
		else
		{
			y--;
			p=p-2*rx*rx*y+rx*rx;
		}
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);


	}
	getch();
	closegraph();
}