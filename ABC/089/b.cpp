#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	n;
	char	s;
	bool	flag = false;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == 'Y')
			flag = true;
	}
	if (flag)
		cout << "Four" << endl;
	else
		cout << "Three" << endl;
}
