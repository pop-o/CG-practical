
#include<graphics.h>
#include<math.h>
#include<iostream>
#include<conio.h>
using namespace std;

void midPointCircleDraw(int xh, int yk, int r)
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int x = 0, y = r;
	
	
	putpixel(x + xh,y + yk,WHITE);
	delay(10);

	if (r > 0)
	{
		putpixel(x + xh,-y + yk,WHITE);
		putpixel(y + xh,x + yk,WHITE);
		putpixel(-y + xh,x + yk,WHITE);
		delay(10);
		
	}
	

	int P = 1 - r;
	while (x <= y)
	{
		x++;
		
	
		if (P <= 0)
			P = P + 2*x + 1;
	
		else
		{
			y--;
			P = P + 2*x - 2*y + 1;
		}
	
		
	
		if (x > y)
			break;
		
	
		putpixel(x + xh,y + yk,WHITE);
		putpixel(-x + xh,y + yk,WHITE);
		putpixel(x + xh,-y + yk,WHITE);
		putpixel(-x + xh,-y + yk,WHITE);
		delay(10);
		
				
		
		
		if (x != y)
		{
			putpixel(y+xh,x+yk,WHITE);
			putpixel(-y+xh,x+yk,WHITE);
			putpixel(y+xh,-x+yk,WHITE);
			putpixel(-y+xh,-x+yk,WHITE);
			delay(10);
			
		}
	}
	getch();
	closegraph();
}


int main()
{
	int x,y,r;
	cout<<"enter centre coordinates:(x,y)";
	cin>>x>>y;
	cout<<"enter radius:";
	cin>>r;
	midPointCircleDraw(x, y, r);//(h,k,radius)
	delay(10);
	return 0;
}

