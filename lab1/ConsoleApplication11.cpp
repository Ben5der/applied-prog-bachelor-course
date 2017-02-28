// ConsoleApplication11.cpp: îïğåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïğèëîæåíèÿ.
//

#include "stdafx.h"
#include "Functions.h"
#include <iostream>
using namespace std;
struct point
{
	int x, y;
};

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
	if (Functions::intersection_check(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y) == 1)
		cout << "ÒÎ×ÊÈ ËÅÆÀÒ ÍÀ ÎÄÍÎÉ ÏĞßÌÎÉ";
	else
		if (Functions::parallel_check(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y) == 1)
			cout << "ÏĞßÌÛÅ ÍÅ ÏÅĞÅÑÅÊÀŞÒÑß";
	else {
		cout << "Õ=" << Functions::search_x(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y)<<endl;
		cout << "Y=" << Functions::search_y(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y)<<endl;
	}
	system("pause");
}

