// ConsoleApplication11.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "������� ���������� � � � ��� ������ ����� ������ ������ ";
	cin >> p1.x >> p1.y;
	cout << "������� ���������� � � � ��� ������ ����� ������ ������ ";
	cin >> p2.x >> p2.y;
	cout << "������� ���������� � � � ��� ������ ����� ������ ������ ";
	cin >> p3.x >> p3.y;
	cout << "������� ���������� � � � ��� ������ ����� ������ ������ ";
	cin >> p4.x >> p4.y;
	if (Functions::intersection_check(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y) == 1)
		cout << "����� ����� �� ����� ������";
	else
		if (Functions::parallel_check(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y) == 1)
			cout << "������ �� ������������";
	else {
		cout << "�=" << Functions::search_x(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y)<<endl;
		cout << "Y=" << Functions::search_y(p1.x, p2.x, p1.y, p2.y, p3.x, p4.x, p3.y, p4.y)<<endl;
	}
	system("pause");
}

