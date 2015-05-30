#pragma once

namespace WindowsFormApplication1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
    #include "Player.h"
	#include"Block.h"

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			Game_Inits();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Player^ player;
	private: Form^ GameWindow;
	private: Timer^ timer;
	private: Timer^ block_timer;
	private: List< Block^> block;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  score;

	private: System::Windows::Forms::Label^  label4;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->score = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(41, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Points :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(29, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"  Lifes   :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(47, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 77);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(188, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 77);
			this->button2->TabIndex = 1;
			this->button2->Text = L"->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// score
			// 
			this->score->AutoSize = true;
			this->score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->score->Location = System::Drawing::Point(268, 32);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(30, 31);
			this->score->TabIndex = 0;
			this->score->Text = L"0";
			this->score->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(268, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 31);
			this->label4->TabIndex = 0;
			this->label4->Text = L"5";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 237);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->score);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Controls";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void Game_Inits()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			GameWindow = gcnew Form;
			Rectangle screen = System::Windows::Forms::Screen::GetBounds(GameWindow);
			GameWindow->Top = screen.Height / 2 - 250;
			GameWindow->Left = screen.Width / 2 - 250;
			GameWindow->Width = 800;
			GameWindow->Height = 600;
			GameWindow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lama")));
			GameWindow->Show();

			player = gcnew Player(GameWindow->Width, GameWindow->Height, resources);
			GameWindow->Controls->Add(player->getPic());

			

			timer = gcnew Timer();
			timer->Interval = 10;
			timer->Tick += gcnew EventHandler(this, &Form1::timer_tick);
			timer->Start();



			block_timer = gcnew Timer();
			block_timer->Interval = 4000;
			block_timer->Tick += gcnew EventHandler(this, &Form1::block_creator);
			block_timer->Start();
			


	
		}


	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player->x()-50>=0)
	player->x(-50);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player->x() + 50+player->sizeX()<GameWindow->Width)
	player->x(50);
}
private: System::Void timer_tick(Object^ sender, EventArgs^ e)
{
	for (int i = 0; i < block.Count; i++)
	{
		block[i]->y(5);
	}
	colisions();
	checkwin();
}
private:System::Void block_creator(Object^ sender, EventArgs^ e)
{
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
	block.Add(gcnew Block(GameWindow->Width, GameWindow->Height, resources));
	GameWindow->Controls->Add(block[block.Count-1]->getPic());
}
private:System::Void colisions(void)
{
	int bY, bX, bSY, bSX;
	int pY = player->y(),
		pX = player->x(),
		pSY = player->sizeY(),
		pSX = player->sizeX();
	for (int i = 0; i < block.Count; i++)
	{
		bY = block[i]->y();
		bX = block[i]->x();
		bSY = block[i]->sizeY();
		bSX = block[i]->sizeX();
		if (block[i]->y() > GameWindow->Height)
		{
			GameWindow->Controls->Remove(block[i]->getPic());
			block.RemoveAt(i);
			i--;
			player->lfs(-1);
			this->label4->Text = player->lfs().ToString();
		}
		if (((bY + bSY < pY + pSY &&  bY + bSY>pY)  && (bX + bSX <pX + pSX && bX+bSX>pX)) ||
			((bY>pY && bY<pY + pSY) && (bX>pX && bX<pX + pSX))   )
		{
			GameWindow->Controls->Remove(block[i]->getPic());
			block.RemoveAt(i);
			i--;
			player->pts(5);
			this->score->Text = player->pts().ToString();
		}
		
	}
}
private:System::Void checkwin()
{
	if (player->pts() >= 50)
	{
		timer->Stop();
		MessageBox::Show("Wygrana", "Super");
		Close();

	}
	if (player->lfs() <= 0)
	{
		timer->Stop();
		MessageBox::Show("Przegrana", "Koniec");
		Close();

	}
}
#pragma endregion
};
}