#pragma once


public ref class Player
{
public:
	Player(){}
	Player(int w, int h, System::ComponentModel::ComponentResourceManager^ resources)
	{
		mPic = gcnew PictureBox();
		mPic->Width = 150;
		mPic->Height = 50;
		points = 0;
		lifes = 5;
		mPic->Location = Point(w / 2 - mPic->Width / 2, h - mPic->Height-50);
		mPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Gracz")));
	}

	void setX(int val)
	{
		mPic->Left = val;
	}
	void x(int val)
	{
		mPic->Left += val;
	}

	int x(void)
	{
		return mPic->Left;
	}
	int y(void)
	{
		return mPic->Top;
	}

	int sizeX(void)
	{
		return mPic->Width;
	}
	int sizeY(void)
	{
		return mPic->Height;
	}

	PictureBox^ getPic(void)
	{
		return mPic;
	}
	void pts(int val)
	{
		points += val;
	}
	int pts()
	{
		return points;
	}
	void lfs(int val)
	{
		lifes += val;
	}
	int lfs()
	{
		return lifes;
	}

private:
	PictureBox^ mPic;
	int points;
	int lifes;

};