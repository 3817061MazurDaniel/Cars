#include <iostream>
#include "Cars.h"

using namespace std;

int Cars::getpower ()
{
	cout << power << " Hp\n" <<endl;
	return power; 
}

int Cars::getspeed ()
{
	cout << speed << " km/h\n" <<endl;
	return speed; 
}

int Cars::getweight ()
{
	cout << weight << " Kg\n" << endl;
	return weight; 
}

void Cars::setpower (int a)
{
	if (a > 0)
		power = a;
}


void Cars::setspeed (int a)
{
	if (a > 0)
		speed = a;
}


void Cars::setweight (int a)
{
	if (a > 0)
		weight = a;
}

