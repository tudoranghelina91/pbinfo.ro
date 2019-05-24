#include <iostream>

using namespace std;

int cmmnr(int n)
{
	int v[9];
	int vLen = 0;

	while (n > 0)
	{
		v[vLen++] = n % 10;
		n /= 10;
	}

	int m = 0;

	if (vLen == 0)
		return 0;

	else
	{
		for (int i = 0; i < vLen - 1; i++)
		{
			for (int j = i + 1; j < vLen; j++)
			{
				if (v[i] > v[j])
				{
					v[i] += v[j];
					v[j] = v[i] - v[j];
					v[i] -= v[j];
				}
			}
		}

		if (v[0] == 0)
		{
			v[0] += v[1];
			v[1] = v[0] - v[1];
			v[0] -= v[1];
		}

		for (int i = 0; i < vLen; i++)
		{
			m = m * 10 + v[i];
		}

		return m;
	}
}

int main()
{
	int n = 0;
	cin >> n;
	cout << cmmnr(n);
}