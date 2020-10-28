#include "GailUI.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    GailOS::GailUI form;
    Application::Run(% form);

};