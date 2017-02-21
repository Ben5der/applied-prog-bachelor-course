// ConsoleApplication11.cpp: îïğåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïğèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct point
{
	int x, y;
};
bool parallel_check(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4)
{
	if ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4) == 0)
		return 0;
	else
		return 1;
}
double search_x(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4)
{
	return double ((x1*y2 - y1*x2)*(x3 - x4) - (x1 - x2)*(x3*y4 - y3*x4)) / ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));
}
double search_y(int x1, int x2, int y1, int y2, int x3, int x4, int y3, int y4)
{
	return double ((x1*y2 - y1*x2)*(y3 - y4) - (y1 - y2)*(x3*y4 - y3*x4)) / ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));
}

int main()
{
	setlocale(LC_ALL, "Russian");
	point p1, p2, p3, p4;
	cout << "ÂÂÅÄÈÒÅ ÊÎÎĞÄÈÍÀÒÛ Õ è Ó ÄËß ÏÅĞÂÎÉ ÒÎ×ÊÈ ÏÅĞÂÎÉ ÏĞßÌÎÉ ";
	cin >> p1.x >> p1.y;
	cout << "ÂÂÅÄÈÒÅ ÊÎÎĞÄÈÍÀÒÛ Õ è Ó ÄËß ÂÒÎĞÎÉ ÒÎ×ÊÈ ÏÅĞÂÎÉ ÏĞßÌÎÉ ";
	cin >> p2.x >> p2.y;
	cout << "ÂÂÅÄÈÒÅ ÊÎÎĞÄÈÍÀÒÛ Õ è Ó ÄËß ÏÅĞÂÎÉ ÒÎ×ÊÈ ÂÒÎĞÎÉ ÏĞßÌÎÉ ";
	cin >> p3.x >> p3.y;
	cout << "ÂÂÅÄÈÒÅ ÊÎÎĞÄÈÍÀÒÛ Õ è Ó ÄËß ÂÒÎĞÎÉ ÒÎ×ÊÈ ÂÒÎĞÎÉ ÏĞßÌÎÉ ";
	cin >> p4.x >> p4.y;
	if (parallel_check(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y) == 0)
		cout << "ÏĞßÌÛÅ ÍÅ ÏÅĞÅÑÅÊÀŞÒÑß";
	else {
		cout << "Õ=" << search_x(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y)<<endl;
		cout << "Y=" << search_y(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y);
	}
	cin>>p1.x;
}

