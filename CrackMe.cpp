#include <iostream>
#include <windows.h>

int main()
{
	int password;
	std::cout << "Enter Password: ";
	std::cin >> password;

	if (password == 1234)
	{
		std::cout << "Success!\n";
		Sleep(2000);
		return 0;
	}
	else
	{
		std::cout << "Wrong Password!\n";
		Sleep(2000);
		return 0;
	}
}