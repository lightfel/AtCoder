#include <stdio.h>
#include <stdbool.h>

bool	load[2000][2000] = {};
bool	vertex_flag[2000] = {};

bool	is_walk(int start, int goal, int n)
{
	if (start == goal)
		return (true);
	vertex_flag[start] = true;
	for (int i = 0; i < n; i++)
	{
		if (load[start][i] && !vertex_flag[i] && is_walk(i, goal, n))
			return (true);
	}
	return (false);
}

int	main(void)
{
	int	n, m, a, b;
	int	ans = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		load[a - 1][b - 1] = true;
	}
	//for (int i = 0; i < n; i++)
	//	load[i][i] = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (is_walk(i, j, n))
			{
				//printf("(%d, %d)\n", i, j);
				ans++;
			}
			for (int k = 0; k < n; k++)
				vertex_flag[k] = false;
		}
	}
	printf("%d\n", ans);
}
