#include <iostream>
#include "Audi.h"

using namespace std;

void Audi :: quattro ()
{
	if (year < 1980)
		cout << "�����������\n";
	else
		cout << "�����������\n";
}

void Audi :: turbo ()
{
	if (year < 1975)
		cout << "�����������\n";
	else
		cout << "�����������\n";
}

int Audi :: getyear ()
{
	cout << year << "���\n" << endl;
	return year; 
}

void Audi :: setyear (int a)
{
	year = a;
}