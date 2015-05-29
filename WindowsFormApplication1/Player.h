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
		mPic->Location = Point(w / 2 - mPic->Width / 2, h - mPic->Height-50);
		mPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lama")));
	}

	void setX(int val)
	{
		mPic->Left = val;
	}
	void x(int val)
	{
		mPic->Left += val;
	}

	float x(void)
	{
		return mPic->Left;
	}
	float y(void)
	{
		return mPic->Top;
	}

	float sizeX(void)
	{
		return mPic->Width;
	}
	float sizeY(void)
	{
		return mPic->Height;
	}

	PictureBox^ getPic(void)
	{
		return mPic;
	}


private:
	PictureBox^ mPic;

};