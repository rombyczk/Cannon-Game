#pragma once


public ref class Block
{
public:
	Block(){}
	Block(int w, int h, System::ComponentModel::ComponentResourceManager^ resources)
	{
		mPic = gcnew PictureBox();
		mPic->Width = 50;
		mPic->Height = 50;
		//mPic->Location = Point(w / 2 - mPic->Width / 2, h - mPic->Height - 50);
		mPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lama")));
	}

	void setY(int val)
	{
		mPic->Top = val;
	}
	void y(int val)
	{
		mPic->Top += val;
	}

	float y(void)
	{
		return mPic->Top;
	}
	float x(void)
	{
		return mPic->Left;
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