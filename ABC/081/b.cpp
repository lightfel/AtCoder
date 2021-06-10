#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	n, ans = 0;
	cin >> n;
	vector<int>	num(n);
	for (int i = 0; i < n; i++)
		cin >> num.at(i);
	while (true)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			if (num.at(i) % 2)
				break;
			num.at(i) /= 2;
		}
		if (i == n)
			ans++;
		else
			break;
	}
	cout << ans << endl;
}
