//Programmer : Dharm vashisth.
//Description: Bresenham's Circle Drawing Algorithm.
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#define cx 250 //new x Origin point
#define cy 250 //new y Origin point
void drawCircle(int r){
      int x,y,d1,d2;
      d1=3-(2*r);//initial d1.
      d2=d1;

      x=0;
      y=r;
      while(x<=y){
	   putpixel(cx+x,cy-y,1);//x,y
	   putpixel(cx+y,cy-x,2);  //y,x
	   putpixel(cx-x,cy-y,3); //-x,y
	   putpixel(cx-y,cy-x,4); //-y,x
	   putpixel(cx+x,cy+y,5);// x,-y
	   putpixel(cx+y,cy+x,6);//y,-x
	   putpixel(cx-x,cy+y,7);//-x,-y
	   putpixel(cx-y,cy+x,8); //-y,-x
			     /*
			    _ |
			      |\ . N
			  _ _ |_\ _
			    . |. \
			      |S  |

			      */
	   if(d2<=0)//North point
		d2=d1+(4*x)+6;

	   else{  //SouthPoint
	      d2=d1+(4*(x-y))+10;
	      y--;
	   }

	   x++;
      }
}
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	//origin line.
	line(cx,0,cx,2*cy);
	line(0,cy,2*cx,cy);
	//Circle Drawing Algorithm.
	drawCircle(10);//bresenhams circle drawing algorithm.
	for(int i=0;i<40;i++)
	drawCircle(2*i+10);

	getch();
	closegraph();
}