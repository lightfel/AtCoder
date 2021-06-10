#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	h, w;

	cin >> h >> w;

	vector<string> board(h);
	for (int i = 0; i < h; i++)
		cin >> board.at(i);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (board.at(i).at(j) != '#')
				board.at(i).at(j) = '0';
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (board.at(i).at(j) == '#')
			{
				if (i > 0 && j > 0 && board.at(i - 1).at(j - 1) != '#')
					board.at(i - 1).at(j - 1)++;
				if (i > 0 && board.at(i - 1).at(j) != '#')
					board.at(i - 1).at(j)++;
				if (i > 0 && j < w - 1 && board.at(i - 1).at(j + 1) != '#')
					board.at(i - 1).at(j + 1)++;
				if (j > 0 && board.at(i).at(j - 1) != '#')
					board.at(i).at(j - 1)++;
				if (j < w - 1 && board.at(i).at(j + 1) != '#')
					board.at(i).at(j + 1)++;
				if (i < h - 1 && j > 0 && board.at(i + 1).at(j - 1) != '#')
					board.at(i + 1).at(j - 1)++;
				if (i < h - 1 && board.at(i + 1).at(j) != '#')
					board.at(i + 1).at(j)++;
				if (i < h - 1 && j < w - 1 && board.at(i + 1).at(j + 1) != '#')
					board.at(i + 1).at(j + 1)++;
			}
		}
	}
	for (int i = 0; i < h; i++)
		cout << board.at(i) << endl;
}
