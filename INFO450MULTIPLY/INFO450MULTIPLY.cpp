// INFO450Multiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "Multiplcation table: " << endl;
	cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t" << endl;
	for (int x = 1; x < 10; x++)
	{
		cout << x << '\t';
		for (int y = 1; y < 10; y++)
		{
			cout << y * x << '\t';
		}
		cout << endl;
	}

	printf("Press anykey to continue...");
	_getch();
	return 0;
}


