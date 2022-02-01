#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double w,h;
	if (R1.x + R1.w > R2.x)
	{
		if (R1.x > R2.x)
		{
			w = R1.w - (R1.x - R2.x);
		}else w = R1.w - (R2.x - R1.x);
			if (w > R1.w) w = R1.w;
			else if (w > R2.w) w = R2.w;
			else w = w;
		
		if (R1.y > R2.y)
		{
			h = R1.h - (R1.y - R2.y);
		}else h = R1.h - (R2.y - R1.y);
			if (h > R1.h) h = R1.h;
			else if(h > R2.h) h = R2.h;
			else h = h;
		
	}else return 0;

	return w*h;
	
}

int main(){
Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};	
cout << overlap(R1,R2);			
	return 0;
}


/*Rect lap;
	if (R1.x + R1.w < R2.x + R2.w && R2.x > R1.x && )
	{
		lap.w = R1.w - (R2.x-R1.x);
		lap.h = R1.h - (R2.y-R1.y);
		return lap.w*lap.h;
	}else if (R1.x + R1.w > R2.x + R2.w && R2.x > R1.x && R1.w - R1.x > R2.x - R2.w)
	{
		return R2.w*R2.h;
	}else if ((R2.x+R2.w) > (R1.x+R1.w))
	{
		return 0;
	}
	

	
	return 0; */