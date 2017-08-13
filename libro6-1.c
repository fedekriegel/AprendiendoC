#include <stdio.h>
#include <math.h>

int main()
{
	double x1, y1, x2, y2, dis;

	x1 = 8.0;
	y1 = 4.4;
	x2 = 3.0;
	y2 = 4.0;

	dis = sqrt( pow ((x2 - x1),2.0) + pow((y2 - y1), 2.0));

	printf("%f\n", dis );


	return 0;
}





