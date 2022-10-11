#include <string>
#include <cstdio>
#include <Windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;
std::string escalate(string file)
{
    ShellExecuteA(NULL, "runas", file.c_str(), 0, 0, SW_SHOWNORMAL);
    HWND Stealth;
	AllocConsole();
	Stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(Stealth, 0);
}
