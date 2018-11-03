#ifndef __FORD_H__
#define __FORD_H__

#include <iostream>
#include "Cars.h"

using namespace std;

class Ford : public Cars
{
protected:
	int wheeldrives;
	int blocksize;
public:
	int getwheeldrives();
	void setwheeldrives(int a);
	int getblocksize();
	void setblocksize(int a);
	int perf ();
};

#endif