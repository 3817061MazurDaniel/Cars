#ifndef __CARS_H__
#define __CARS_H__

class Cars
{
	protected:
		int power;
		int speed;
		int weight;
	public:
		int getpower ();
		void setpower(int a);
		int getspeed();
		void setspeed(int a);
		int getweight();
		void setweight(int a);
};

#endif