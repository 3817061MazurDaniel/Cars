#include <iostream>
#include "Ford.h"

using namespace std;

int Ford :: getwheeldrives ()
{
	cout << wheeldrives << " ���. �����\n " << endl;
	return wheeldrives; 
}

void Ford :: setwheeldrives (int a)
{
	wheeldrives = a;
}

int Ford :: getblocksize ()
{
	cout << blocksize << " �\n" << endl;
	return blocksize; 
}

void Ford :: setblocksize (int a)
{
	blocksize = a;
}

int Ford :: perf ()
{
	int a;
	a = (power - (power % blocksize))/blocksize;
	cout << a << " ��/�\n" << endl;
	return a;
}