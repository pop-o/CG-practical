#include<iostream>
#include<math.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

float abss(float x){
	if(x<0){
		return floor((-1*x)*100.0)/100.0;
	}else{
		return floor(x*100.0)/100.0;
	}
}

void DDA(float x1,float y1,float x2,float y2){
	float x,y,dx,dy,m;
	int line=0;
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	m=abss(dy/dx);
	
	if(x2-x1>0 && y2-y1>0){
		line=1;
	}else if(x2-x1<0 && y2-y1<0){
		line=2;
	}else if(x2-x1<0 && y2-y1>0){
		line=3;
	}else if(x2-x1>0 && y2-y1<0){
		line=4;
	}else if(x2==x1 && y2-y1>0){
		line=5;
	}
	else if(x2==x1 && y2-y1<0){
		line=6;
	}else if(y2==y1 && x2-x1>0){
		line=7;
	}else if(y2==y1 && x2-x1>0){
		line=8;
	}else{
		line=9;
	}
	while(x!=x2+1 && y!=y2+1){
		switch(line){
		case 1:
		
		putpixel(round(x),round(y),WHITE);
		delay(50);
		if(m<=1){
			x=x+1;
			y=y+m;
			
		}else{
			x=x+(1/m);
			y=y+1;
		}
		continue;
		case 2:
			
			putpixel(round(x),round(y),WHITE);
			delay(50);
		if(m<=1){
			x=x-1;
			y=y-m;
			
		}else{
			x=x-(1/m);
			y=y-1;
		}
		continue;
		case 3:
			
		putpixel(round(x),round(y),WHITE);
		delay(50);
		if(m<=1){
			x=x-1;
			y=y+m;
			
		}else{
			x=x-(1/m);
			y=y+1;
		}
		continue;
		case 4:
			
			putpixel(round(x),round(y),WHITE);
			delay(50);
		if(m<=1){
			x=x+1;
			y=y-m;
			
		}else{
			x=x+(1/m);
			y=y-1;
		}
		continue;
		case 5:
			putpixel(round(x),round(y),WHITE);
			delay(50);
			x=x;
			y=y+1;
		
			continue;
		case 6:
			putpixel(round(x),round(y),WHITE);
			delay(50);
			x=x;
			y=y-1;
			
			continue;
		case 7:
			putpixel(round(x),round(y),WHITE);
			delay(50);
			y=y;
			x=x+1;
			
			continue;
		case 8:
			putpixel(round(x),round(y),WHITE);
			delay(50);
			x=x-1;
			y=y;
			
			continue;
			
				
		default:
			cout<<"??????\n";
			break;
	}
}
	
}
int main(){
	int gd = DETECT, gm;
	initgraph (&gd,&gm,"C:\\TC\\BGI");
	float x1,x2,y1,y2;
	
	cout<<"Enter starting point(x1,y1): ";
	cin>>x1>>y1;
	cout<<"Enter end point(x2,y2): ";
	cin>>x2>>y2; 
	DDA(x1,y1,x2,y2);
	getch();
	closegraph();
	return 0;
}
