#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	h, w;

	cin >> h >> w;

	vector<string>	board(h);
	vector<int>	dx = {-1, -1, -1, 0, 0, 1, 1, 1};
	vector<int>	dy = {-1, 0, 1, -1, 1, -1, 0, 1};
	for (int i = 0; i < h; i++)
		cin >> board.at(i);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (board.at(i).at(j) == '#')
				continue;
			int nx, ny;
			int num = 0;
			for (int k = 0; k < 8; k++)
			{
				nx = i + dx.at(k);
				ny = j + dy.at(k);
				if (nx < 0 || nx >= h)
					continue;
				if (ny < 0 || ny >= w)
					continue;
				if (board.at(nx).at(ny) == '#')
					num++;
			}
			board.at(i).at(j) = char('0' + num);
		}
	}
	for (int i = 0; i < h; i++)
		cout << board.at(i) << endl;
}
