//CURSORPOS
//Filip Rokita
//www.filiprokita.com

#include <iostream>
#include <Windows.h>

using namespace std;

char key;

void menu()
{
	cout << "KEY: "; cin >> key;
	cout << endl;
}

void cursorpos()
{
	while (true)
	{
		if (GetAsyncKeyState(key))
		{
			POINT p;
			GetCursorPos(&p);
			cout << "X: " << p.x << " ; " << "Y: " << p.y << endl;
			Sleep(1000);
		}
	}
}

int main()
{
	system("title CURSORPOS - www.filiprokita.com");
	menu();
	cursorpos();
	return 0;
}