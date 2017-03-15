#include "Controller.h"


void Controller::writer(System::String^ FileDirectory, System::String^ Text)
{
	TextBox = Text;
	Path = FileDirectory;
	auto w = gcnew Model;
	w->write(Path,Text);
	delete w;
}
System::String^ Controller::reader(System::String^ FileDirectory)
	{
	Path = FileDirectory;
	auto r = gcnew Model;
	TextBox = r->read(Path);
	delete r;
	return TextBox;
	}
