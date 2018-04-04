#include "MyForm.h"
#include "windows.h"

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow){
	System::Windows::Forms::Application::Run(%UIexample::MyForm());
}