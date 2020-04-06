//lib
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	cout << "Gift-of-SinaRashidi";
	system("Color F2");
	char a;
	char sina[19] = { 'Y','o','u','r','n','a','m','e','-','-','-','-','-',' ',' ',' ',' ',' ',' ' };
	int g=18;

	for (int p = 1; p <= 19; p++)
	{
		srand(time(NULL));
		Sleep(50);
		cout << '\b';
		for(int i = 0; i <= 9; i++)
		{
			a = rand() % 80;
			if (a<=33)
			{
				a = a + 33;
			}
			if (i==9)
			{
				
				cout << sina[g] << '\b';
				g--;
			}
			else {
				cout << a << '\b';
			}
			
			Sleep(70);

		}

	}
	cout <<'\t'<<'\t'<<'\t';
	_getch();
}
