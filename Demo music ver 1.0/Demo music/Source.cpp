#include <iostream>
#include <windows.h>
#include <MMsystem.h>
#include <conio.h>
using namespace std;
int main()
{
	//PlaySound("Crazy Fun.wav", NULL, SND_ASYNC);
	cout << "Press 'O' for turn on/off music" << endl;
	int key;
	int flag = 1;
	//while (true)
	{
		while (true)
		{
			PlaySound("Crazy Fun.wav", NULL, SND_ASYNC);
			key = _getch();
			if (key == 111 || key == 79)
			{
				flag *= -1;
				if (flag == -1)
				{
					EXIT_SUCCESS;
					break;
				}
				else
				{
					PlaySound("Crazy Fun.wav", NULL, SND_ASYNC);
					break;
				}
			}
		}
	}
	cout << "cc" << endl;
	system("pause");
	return 0;
}