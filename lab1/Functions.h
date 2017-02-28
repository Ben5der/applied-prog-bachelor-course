#pragma once
class Functions
{
public:
	static bool parallel_check(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4);
	
	static bool intersection_check(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4);
	
	static double search_x(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4);
	
	static double search_y(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4);
	
};

