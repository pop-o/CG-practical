#include <iostream>
#include <graphics.h>
#include<math.h>
#include<conio.h>

using namespace std;

void plotPixel(int x1, int y1, int x2, int y2, int dx, int dy, int decide)
{
	
	int pk = 2 * dy - dx;
	for (int i = 0; i <= dx; i++)
	{
	
		x1 < x2 ? x1++ : x1--;
		if (pk < 0)
		{
		
			if (decide == 0)
			{
			 putpixel(x1, y1, WHITE);
				pk = pk + 2 * dy;
			}
			else
			{
		
			 putpixel(y1, x1, WHITE);
				pk = pk + 2 * dy;
			}
		}
		else
		{
			y1 < y2 ? y1++ : y1--;
			if (decide == 0)
			{

				putpixel(x1, y1, WHITE);
			}
			else
			{
			 putpixel(y1, x1, WHITE);
			}
			pk = pk + 2 * dy - 2 * dx;
		}
	}
}

int main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\TC\\BGI");
	int x1, y1, x2, y2, dx, dy, pk;
	cout<<"enter beginning coordinates: ";
	cin>>x1>>y1;
	cout<<"enter end coordinates: ";
	cin>>x2>>y2;

	dx = abs(x2 - x1);
	dy = abs(y2 - y1);
	
	if (dx > dy)
	{
	
		plotPixel(x1, y1, x2, y2, dx, dy, 0);
	}

	else
	{

		plotPixel(y1, x1, y2, x2, dy, dx, 1);
	}
 getch();
 closegraph();
 return 0;
}

