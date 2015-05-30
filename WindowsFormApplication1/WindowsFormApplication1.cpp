// WindowsFormApplication1.cpp : main project file.

#include "stdafx.h"
#include "Main_Menu.h"

using namespace WindowsFormApplication1;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Main_Menu());
	return 0;
}
