#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int a, b, ans = 0;

	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		vector<int>	digit(5);
		int	num = i;
		for (int j = 0; num > 0; j++)
		{
			digit.at(j) = num % 10;
			num /= 10;
		}
		if (digit.at(0) == digit.at(4) && digit.at(1) == digit.at(3))
			ans++;
	}
	cout << ans << endl;
}
