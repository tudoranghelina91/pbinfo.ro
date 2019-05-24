#include <iostream>

using namespace std;

int nrmaxim(int n)
{
	int m = n;
	int ncmax = m % 10;

	while (m > 0)
	{
		if (m % 10 > ncmax)
			ncmax = m % 10;
		
		m /= 10;
	}

	m = n;

	int afterRev = 0;

	while (m % 10 != ncmax)
	{
		afterRev = afterRev * 10 + m % 10;
		m /= 10;
	}

	afterRev = afterRev * 10 + m % 10;
	m /= 10;

	int after = 0;

	while (afterRev > 0)
	{
		after = after * 10 + afterRev % 10;
		afterRev /= 10;
	}

	while (n % 10 == 0)
	{
		after *= 10;
		n /= 10;
	}

	int before = m;
	int nrBefore = 1;

	while (m > 0)
	{
		nrBefore *= 10;
		m /= 10;
	}


	return (after * nrBefore) + before;
}

int main()
{
	int n = 0;
	cin >> n;
	cout << nrmaxim(n);
	cin.get();
	cin.get();
}