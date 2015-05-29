#pragma once


class Cannon
{
public:
	Cannon()
	{
		angle = 0;
		fireRate = 1;
		x = 100;
		y = 100;
	}

private:
	float angle;
	float fireRate;
	int x, y;

};