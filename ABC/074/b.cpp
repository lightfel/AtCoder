#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	n, k, x, dis = 0;

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (abs(x - k) < x)
			dis += abs(x - k) * 2;
		else
			dis += x * 2;
	}
	cout << dis << endl;
}
