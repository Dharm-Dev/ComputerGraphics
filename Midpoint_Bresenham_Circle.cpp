/*
Author : Dharm Vashisth.
Description : Diffrenece between midpoint and bresenhams circle drawing algorithm.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int x,y,a,b,c,d,r,d1,d2,d3,d4,diff1,diff2;
	r=50;
	d1=3-r;
	d2=1-r;
	d3=d1;
	d4=d2;
	x=0;y=r;
	diff2=diff1=0;
	while(x<=y){
		cout<<x<<","<<y<<endl;
		if(d3<=0){
			d3=d1+4*x;
		}
		else{

		    d3=d1+4*(x-y)+10;
		    y--;
		}
		x++;
		diff1++;
	}
	
	cout<<"Mid point"<<endl;
	x=0;y=r;
	while(x<=y){
		cout<<x<<" , "<<y<<endl;
		if(d4<=0){
		       d4=d2+2*x+3;
		}
		else{
		      d4=d2+2*(x-y)+5;
		      y--;
		}
		x++;
		diff2++;
	}
	cout<<diff1<<" "<<diff2;
	return 0;
}
