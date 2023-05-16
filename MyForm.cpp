#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Calc;
using namespace std;

[STAThread]

int main(array<System::String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}