#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};


double overlap(Rect *R1,Rect *R2){
	double left=max(R1->x, R2->x);
	double right=min(R1->x+R1->w, R2->x+R2->w);
	double bottom=max(R1->y-R1->h, R2->y-R2->h);
	double top=min(R2->y, R1->y);
	double area;
	if ( right > left && top > bottom ) return area = (right-left)*(top-bottom);
	else return 0;

	return 0;

}
