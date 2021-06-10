#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	n, m, sum = 0;

	cin >> n;
	m = n;
	for (int i = 0; m > 0; i++)
	{
		sum += m % 10;
		m /= 10;
	}
	if (n % sum)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
