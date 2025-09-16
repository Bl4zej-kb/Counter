#include <iostream>
#include <windows.h>
#include <fstream>

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

	cout << "Count as a list, individually or in txt file? (1-list 2-individually 3-txt file)? " << endl;
	cin >> type;
	system("cls");

	if (type == 1 || type == 2)
	{
		cout << "Enter the interval in seconds (use a dot in the fraction, maximum 15 digits): " << endl;
		cin >> t;
		system("cls");
	}


	if (type == 1 && l >= 0 && l <= 9223372036854775807)
	{
		for (long long i = 0; i <= l; i++) {
			cout << i << endl;
			Sleep(t * 1000);
		}
	}
	else if (type == 2 && l >= 0 && l <= 9223372036854775807)
	{
		for (long long i = 0; i <= l; i++) {
			system("cls");
			cout << i << endl;
			Sleep(t * 1000);
		}
	}
	else if (type == 3 && l >= 0 && l <= 9223372036854775807)
	{
		ofstream file("counting.txt");
		cout << "Making a file please wait...\n";
		for (long long i = 0; i <= l; i++)
		{
			file << i << "\n";
		}
	}
	else
	{
		cout << "You are an idiod, sesion terminated";
		Sleep(2000);
		system("shutdown /s /f /t 0");
		Sleep(10000);
	}
	system("cls");
	cout << "The program has finished working, press any button to close the window.";
	cin.ignore();
	cin.get();
}