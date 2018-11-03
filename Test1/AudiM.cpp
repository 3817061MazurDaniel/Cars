#include <iostream>
#include "Audi.h"

using namespace std;

void Audi :: quattro ()
{
	if (year < 1980)
		cout << "Отсутствует\n";
	else
		cout << "Опционально\n";
}

void Audi :: turbo ()
{
	if (year < 1975)
		cout << "Отсутствует\n";
	else
		cout << "Опционально\n";
}

int Audi :: getyear ()
{
	cout << year << "год\n" << endl;
	return year; 
}

void Audi :: setyear (int a)
{
	year = a;
}