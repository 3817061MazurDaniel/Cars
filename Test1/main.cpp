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
		cout << "Выберите модель Авто:\n1-Audi\n2-Ford\n3-Выход из программы\n";
		cin >> q1;
		if (q1 == 1)
		{
			cout << "Выберите :\n1-Показатели суперкара\n2-Редактировать данные авто\n3-Система Quattro\n4-Система турбонагнетателя\n";
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
				cout << "1-Ред. Максимальную скорость\n2-Ред. Мощность двигателя\n3-Ред. Вес\n4-Ред. Год выпуска\n";
				cin >> q3;
				if (q3 == 1)
				{
					cout << "Введите желаемую максимальную скорость\n";
					cin >> a;
					Audi.setspeed(a);
				}
				if (q3 == 2)
				{
					cout << "Введите желаемую мощность\n";
					cin >> a;
					Audi.setpower(a);
				}
				if (q3 == 3)
				{
					cout << "Введите желаемый вес\n";
					cin >> a;
					Audi.setweight(a);
				}
				if (q3 == 4)
				{
					cout << "Введите желаемый год выпуска\n";
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
			cout << "Укажите действие1:\n-Показатели суперкара\n2-Редактировать данные авто\n3-Средняя производительность двигателей\n";
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
				cout << "1-Ред. Макс. скорость\n2-Ред. Мощность\n3-Ред. Вес\n4-Ред. Объем двигателя\n5-Ред. количество ведущих колес\n";
				cin >> q3;
				if (q3 == 1)
				{
					cout << "Введите желаемую скорость\n";
					cin >> a;
					Ford.setspeed (a);
				}
				if (q3 == 2)
				{
					cout << "Введите желаемую мощность\n";
					cin >> a;
					Ford.setpower(a);
				}
				if (q3 == 3)
				{
					cout << "Введите желаемый вес\n";
					cin >> a;
					Ford.setweight(a);
				}
				if (q3 == 4)
				{
					cout << "Введите желаемый объем двигателя\n";
					cin >> a;
					Ford.setblocksize(a);
				}
				if (q3 == 5)
				{
					cout << "Введите желаемое количество ведущих колес\n";
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