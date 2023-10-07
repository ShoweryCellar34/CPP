#include <iostream>
#include <conio.h>
#include <windows.h>

int main()
{
	bool running = 1;
	bool freeze = 0;

	FreeConsole();

	std::cout << "ShoweryCellar34 Code";
	while (running)
	{
		if (GetKeyState(VK_RSHIFT) & 0xA1)
		{
			if (GetKeyState(VK_LSHIFT) & 0xA0)
			{
				freeze = !freeze;
			}
		}
		if (freeze)
		{
			SetCursorPos((GetSystemMetrics(0)) / 2, (GetSystemMetrics(1)) / 2);
		}
	}

	return 0;
}
