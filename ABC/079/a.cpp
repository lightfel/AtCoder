#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	n;
	vector<int>	digit(4);

	cin >> n;
	for (int i = 0; n > 0; i++)
	{
		digit.at(i) = n % 10;
		n /= 10;
	}
	if ((digit.at(0) == digit.at(1) && digit.at(1) == digit.at(2))
		|| (digit.at(1) == digit.at(2) && digit.at(2) == digit.at(3)))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
