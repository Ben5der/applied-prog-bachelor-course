#pragma once
#include "Model.h"
ref class Controller
{	
	System::String^ TextBox;
	System::String^ Path;
public:
	void writer(System::String^, System::String^);
public:
	System::String^ reader(System::String^);
};
