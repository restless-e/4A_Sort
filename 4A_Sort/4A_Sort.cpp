// 4A_Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void sort(int&, int&, int&);
int main()
{
	int v, w, x = 0;
	cout << "Input 3 integer values: ";
	cin >> v >> w >> x;

	sort(v, w, x);
	system("pause");
	return 0;
}

void sort(int& val1, int& val2, int& val3)
{
	int temp0, temp1, temp2 = 0;
	int sorted[3] = { val1, val2, val3 };
	//int tempSort[3];


	while (!(sorted[0] <= sorted[1] && sorted[1] <= sorted[2]))
	{
		cout << "Not all sorted" << endl;
	
		while (!(sorted[0] <= sorted[1]))
		{
			cout << "1 and 2 not sorted" << endl;
			temp0 = sorted[0];
			temp1 = sorted[1];
			sorted[0] = temp1;
			sorted[1] = temp0;
		}
		while (!(sorted[1] <= sorted[2]))
		{
			cout << "2 and 3 not sorted" << endl;
			temp1 = sorted[1];
			temp2 = sorted[2];
			sorted[1] = temp2;
			sorted[2] = temp1;
		}
		cout << "Hopefully all sorted" << endl;
	}

	cout << "The ordered sequence is now: ";
	for (int i = 0; i < 3; i++)
	{
		cout << sorted[i] << " ";
	}
	cout << endl;
}

