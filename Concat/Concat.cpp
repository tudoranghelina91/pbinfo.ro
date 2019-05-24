#include <iostream>

using namespace std;

int concat(int a, int b)
{
	int n = b;
	int p = 1;

	while (n > 0)
	{
		p *= 10;
		n /= 10;
	}

	return a * p + b;
}

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	cout << concat(a, b);
}