#include <iostream>
using namespace std;

void create(int* & a, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = -20 + rand() % (41);
		cout << a[i] << " ";
	}
}

template <typename T>
void create(T*& a, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = -20 + rand() % (41);
		cout << a[i] << " ";
	}
}

template <typename T>
T find(T*& a, int n, T& b)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i] % 2 == 1) || (-a[i] % 2 == 1))
		{
			b = a[i];
			return b;
		}
	}
}

int find(int*& a, int n, int& b)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i] % 2 == 1) || (-a[i] % 2 == 1))
		{
			b = a[i];
			return b;
		}
	}
}

template <typename T>
void result(T* &a, T& b, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((b>a[i]) && (a[i] % 2 == 1 || -a[i] % 2 == 1))
		{
			b = a[i];
		}
	}
}

void result(int*& a, int& b, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((b > a[i]) && (a[i] % 2 == 1 || -a[i] % 2 == 1))
		{
			b = a[i];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int n, b = 0;

	cout << "n="; cin >> n;
	int* q = new int[n];

	create(q, n);
	find(q, n, b);
	result(q, b, n);

	cout << endl << "b=" << b;
}