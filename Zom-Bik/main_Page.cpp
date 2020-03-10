#include "main_Page.h"
#include "game_Page.h"
using namespace System;
using namespace System::Windows::Forms;
//using namespace std;

[STAThread]

int main() {
	setlocale(LC_ALL, "Turkish");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ZomBik::main_Page form;
	Application::Run(%form);

	return 0;

}