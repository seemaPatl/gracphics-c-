/* Midpoint circle drawing program */

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>


void main()
{
	clrscr();
	int maxx,maxy,x,y,r;
	float p;
	int i,gd,gm;


	detectgraph(&gd, &gm);
	initgraph(&gd,&gm,"c://turboc3//bgi");

	cout<<"Enter the value of the radius:";
	cin>>r;
	x=0;
	y=r;
	p=1.25-r;

	maxx=getmaxx();
	maxy=getmaxy();

	do
	{
		putpixel((maxx/2)+x,(maxy/2)+y,5);
		putpixel((maxx/2)+x,(maxy/2)-y,6);
		putpixel((maxx/2)-x,(maxy/2)+y,7);
		putpixel((maxx/2)-x,(maxy/2)-y,8);
		putpixel((maxx/2)+y,(maxy/2)+x,9);
		putpixel((maxx/2)-y,(maxy/2)+x,10);
		putpixel((maxx/2)+y,(maxy/2)-x,11);
		putpixel((maxx/2)-y,(maxy/2)-x,12);

		if(p<0)
		{
			x=x+1;
			p=p+2*x+2;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*(x-y)+1;
		}
		delay(10);
	}while(x<y);

	getch();
	closegraph();
}