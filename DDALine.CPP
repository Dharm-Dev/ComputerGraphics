#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{       int xin,yin,x1,x2,y1,y2,x,y,steps,dy,dx;
	cout<<" Enter Starting coordinates(x1,y1): ";
	cin>>x1>>y1;
	cout<<"Enter Ending Coordinate of line(x2,y2): ";
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	steps=(dx>=dy)?dx:dy;
	x=x1;
	y=y1;
	xin=dx/steps;
	yin=dy/steps;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(int i=0;i<steps;i++){
		putpixel(x,y,1);
		x+=xin;
		y+=yin;
	}
	getch();
	closegraph();
}