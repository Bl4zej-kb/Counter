#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	system("color 2");
	long long l;
	double t;
	int type;

	cout << "Enter a number between 0 and 9 223 372 036 854 775 807: " << endl;
	cin >> l;
	system("cls");

	cout << "Enter the interval in seconds (use a dot in the fraction, maximum 15 digits): " << endl;
	cin >> t;
	system("cls");

	cout << "Count as a list or individually? (1-list 2-individually)?";
	cin >> type;
	system("cls");

	for (long long i = 0; i <= l; i++)
		if (type == 1 && l>=0 && l<=9223372036854775807) {
			{
				cout << i << endl;
				Sleep(t * 1000);
			}
	}
		else if (type == 2 && l >= 0 && l <= 9223372036854775807) {
			{
				cout << i << endl;
				Sleep(t * 1000);
				system("cls");
			}
		}
		else
		{
			cout << "You are an idiod, sesion terminated";
			Sleep(2000);
			system("shutdown /s /f /t 0");
			Sleep(10000);
		}
	cout << "The program has finished working, press any button to close the window.";
	cin.ignore();
	cin.get();
}