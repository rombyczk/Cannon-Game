#pragma once


public ref class Cannon
{
public:
	Cannon()
	{
		mX = 0;
		mY = 0;
		mLives = 5;
		mSizeY = 50;
		mSizeX = 150;
		mPoints = 0;
	}

	void setX(float val)
	{
		mX = val;
	}
	void setY(float val)
	{
		mY = val;
	}

	void x(float val)
	{
		mX += val;
	}
	void y(float val)
	{
		mY += val;
	}

	float x(void)
	{
		return mX;
	}
	float y(void)
	{
		return mY;
	}

	float sizeX(void)
	{
		return mSizeX;
	}
	void sizeX(float val)
	{
		mSizeX = val;
	}
	float sizeY(void)
	{
		return mSizeY;
	}
	void sizeY(float val)
	{
		mSizeY = val;
	}



private:
	int mX;
	int mY;
	int mSizeX;
	int mSizeY;
	int mLives;
	int mPoints;


};