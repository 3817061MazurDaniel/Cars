#include <iostream>
#include <locale.h>
#include "Cars.h"
#include "Audi.h"
#include "Ford.h"

using namespace std;

void main (void) 
{
	setlocale(LC_ALL, "rus");
	Audi Audi;
	Ford Ford;
	
	int a = 0,
		l = 0,
		q1 = 0,
		q2 = 0,
		q3 = 0;

	Audi.setspeed(315);
	Audi.setpower(610);
	Audi.setweight(1600);
	Audi.setyear(2008);
	Ford.setspeed(275);
	Ford.setpower(450);
	Ford.setweight(1800);
	Ford.setwheeldrives(2);
	Ford.setblocksize(5);

	while (l < 1)
	{
		cout << "�������� ������ ����:\n1-Audi\n2-Ford\n3-����� �� ���������\n";
		cin >> q1;
		if (q1 == 1)
		{
			cout << "�������� :\n1-���������� ���������\n2-������������� ������ ����\n3-������� Quattro\n4-������� ����������������\n";
			cin >> q2;
			if (q2 == 1)
			{
				Audi.getspeed();
				Audi.getweight();
				Audi.getpower();
				Audi.getyear();
			}
			if (q2 == 2)
			{
				cout << "1-���. ������������ ��������\n2-���. �������� ���������\n3-���. ���\n4-���. ��� �������\n";
				cin >> q3;
				if (q3 == 1)
				{
					cout << "������� �������� ������������ ��������\n";
					cin >> a;
					Audi.setspeed(a);
				}
				if (q3 == 2)
				{
					cout << "������� �������� ��������\n";
					cin >> a;
					Audi.setpower(a);
				}
				if (q3 == 3)
				{
					cout << "������� �������� ���\n";
					cin >> a;
					Audi.setweight(a);
				}
				if (q3 == 4)
				{
					cout << "������� �������� ��� �������\n";
					cin >> a;
					Audi.setyear(a);
				}
			}
			if (q2 == 3)
			{
				Audi.quattro ();
			}
			if (q2 == 4)
			{
				Audi.turbo ();
			}
		}
		if (q1 == 2)
		{
			cout << "������� ��������1:\n-���������� ���������\n2-������������� ������ ����\n3-������� ������������������ ����������\n";
			cin >> q2;
			if (q2 == 1)
			{
				Ford.getspeed();
				Ford.getweight();
				Ford.getpower();
				Ford.getwheeldrives();
				Ford.getblocksize();
			}
			if (q2 == 2)
			{
				cout << "1-���. ����. ��������\n2-���. ��������\n3-���. ���\n4-���. ����� ���������\n5-���. ���������� ������� �����\n";
				cin >> q3;
				if (q3 == 1)
				{
					cout << "������� �������� ��������\n";
					cin >> a;
					Ford.setspeed (a);
				}
				if (q3 == 2)
				{
					cout << "������� �������� ��������\n";
					cin >> a;
					Ford.setpower(a);
				}
				if (q3 == 3)
				{
					cout << "������� �������� ���\n";
					cin >> a;
					Ford.setweight(a);
				}
				if (q3 == 4)
				{
					cout << "������� �������� ����� ���������\n";
					cin >> a;
					Ford.setblocksize(a);
				}
				if (q3 == 5)
				{
					cout << "������� �������� ���������� ������� �����\n";
					cin >> a;
					Ford.setwheeldrives(a);
				}
			}
			if (q2 == 3)
			{
				Ford.perf ();
			}
		}
		if (q1 == 3)
		{
			break;
		}
	}



}