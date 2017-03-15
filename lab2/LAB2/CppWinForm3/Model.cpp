#include "Model.h"

System::String^ Model::read(System::String^ Path)
{
	System::String^ bufer;
	auto Reader = gcnew System::IO::StreamReader(Path, System::Text::Encoding::GetEncoding(1251));
	bufer = Reader->ReadToEnd();
	Reader->Close();
	return bufer;
}
void Model::write(System::String^ Path, System::String^ Text)
{
	auto Writer = gcnew System::IO::StreamWriter(Path, false, System::Text::Encoding::GetEncoding(1251));
	Writer->Write(Text);
	Writer->Close();
}