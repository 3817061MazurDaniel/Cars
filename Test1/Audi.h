#ifndef __AUDI_H__
#define __AUDI_H__

#include <iostream>
#include "Cars.h"

using namespace std;

class Audi : public Cars
{
protected:
	int year;
	int places;
public:
	int getyear();
	void setyear(int a);
	int getplaces();
	void setplaces(int a);
	void quattro ();
	void turbo ();
};

#endif