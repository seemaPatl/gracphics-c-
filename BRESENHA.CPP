#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()

{       float x,y,x1,y1,x2,y2,dx,dy,p;
	int i,gd=DETECT,gm;
	clrscr();
	/*Read the two end points of the line */

	cout<<"Enter co-ordinates of the first point:";
	cin>>x1>>y1;

	cout<<"Enter the co-ordinates of the second point:";
	cin>>x2>>y2;


	/* initialize the graphic mode */
	initgraph(&gd,&gm,"c:/turboc3/bgi");

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	/*initial starting point*/
	x=x1;
	y=y1;


	/*initial decision variables */
	p=2*dy-dx;
	i=1;
	do
	{
		putpixel(x,y,WHITE);
		delay(10);
		while(p>=0)
		{
			y=y+1;
			p=p-2*dx;
		}
		x=x+1;
		p=p+2*dy;
		i=i+1;
	}
	while(i<=dx);

	getch();
	closegraph();
}



