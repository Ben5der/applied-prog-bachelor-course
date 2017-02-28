#include "stdafx.h"
#include "Functions.h"

	bool Functions::parallel_check(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4)
	{
		if ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4) == 0)
			return 1;
		else
			return 0;
	}
	bool Functions::intersection_check(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4)
	{
		if ((x3 == x2) && (y3 == y2) && (x4 == x3) && (y4 == y3))
			return 1;
		if (((x3 == x2) && (y3 == y2)) || ((x4 == x3) && (y4 == y3)))
			return 0;
		if (((x1 - x2) / (x3 - x2) == (y1 - y2) / (y3 - y2)) && ((x2 - x3) / (x4 - x3) == (y2 - y3) / (y4 - y3)))
			return 1;
		else
			return 0;
	}
	double Functions::search_x(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4)
	{
		return double((x1*y2 - y1*x2)*(x3 - x4) - (x1 - x2)*(x3*y4 - y3*x4)) / ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));
	}
	double Functions::search_y(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4)
	{
		return double((x1*y2 - y1*x2)*(y3 - y4) - (y1 - y2)*(x3*y4 - y3*x4)) / ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));
	}