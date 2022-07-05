#include <iostream>
#include <ctime>
using namespace std;

int task1()
{
	srand(time(0));
	const int size = 10;
	int ar[size];
	int tmp[size];
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		ar[i] = -10 + (rand() % (10 - (-10 + 1)));
	}

	for (int i : ar)
	{

		if (i > 0)
		{
			tmp[j] = i;
			j++;
		}

	}

	for (int i : ar)
	{

		if (i < 0)
		{
			tmp[j] = i;
			j++;
		}

	}

	for (int i : ar)
	{
		
		if (i == 0)
		{
			tmp[j] = i;
			j++;
		}

	}

	for (int i : tmp)
	{
	    cout << i << "\t";
	}

	return 0;
}


int task2()
{
	srand(time(0));
	const int size = 10;
	int first[size];
	int second[size];
	int tmp[size];

	int k = 0;
	int repeat = 0;

	for (int i = 0; i < size; i++)
	{
		first[i] = rand() % 10;
		cout << first[i] << "\t";
	}
	
	cout << "\n\n";

	for (int i = 0; i < size; i++)
	{
		second[i] = rand() % 10;
		cout << second[i] << "\t";
	}
	
	cout << "\n\n";

	for (int i : first)
	{
		for (int j : second)
		{
			if (i == j)
			{
				repeat++;
			}
		}

		if (repeat == 1)
		{
			tmp[k] = i;
			k++;
		}


		repeat = 0;
	}

	for (int i = 0; i < size; i++)
	{
		cout << tmp[i] << "\t";
	}


	return 0;
}


int task3()
{
	srand(time(0));
	const int size = 5;
	int num[size];
	int user[size];

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		num[i] = rand() % 42;
	}

	for (int i = 0; i < size; i++)
	{
		int a;
		cin >> a;
		user[i] = a;
	}

	for (int i : num)
	{
		for (int j : user)
		{
			if (i == j)
			{
				count++;
			}
		}
	}

	switch (count)
	{
	case 0:
		cout << "you have 0 points \n";
		break;

	case 1:
		cout << "you have 1 points \n";
		break;

	case 2:
		cout << "you have 2 points \n";
		break;

	case 3:
		cout << "you have 3 points \n";
		break;

	case 4:
		cout << "you have 4 points \n";
		break;

	case 5:
		cout << "you have 5 points \n";
		break;

	default:
		break;
	}


	return 0;
}


int main()
{
	task1();
	task2();
	task3();
}