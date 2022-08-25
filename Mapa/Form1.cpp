#include "Form1.h"

using namespace System::Windows::Forms;
using namespace MapasKarnaugh;
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1());
	return 0;
}