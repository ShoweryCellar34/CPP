#include <iostream>
#include <conio.h>
#include <windows.h>

int main() {
	int running = 1;

	FreeConsole();
	

	std::cout << "ShoweryCellar34 Code";
	while (running) {
        SetCursorPos((GetSystemMetrics(0)) / 2, (GetSystemMetrics(1)) / 2);
		if(GetKeyState(VK_RSHIFT) & 0xA1) {
			if(GetKeyState(VK_LSHIFT) & 0xA0) {
				running = 0;
			}

		}
	}

	return 0;
}
