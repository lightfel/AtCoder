#include <stdio.h>
#include <stdbool.h>

#define MAX 2000

int	load[MAX][MAX];
bool	visited[MAX];
int	num[MAX];
int	n;

void	dfs(int vertex)
{
	if (visited[vertex])
		return ;
	visited[vertex] = true;
	for (int i = 0; i < num[vertex]; i++)
	{
		dfs(load[vertex][i]);
	}
	return ;
}

int	main(void)
{
	int	m, a, b;
	int	ans = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		load[a - 1][num[a - 1]] = b - 1;
		num[a - 1]++;
	}
	for (int i = 0; i < n; i++)
	{
		dfs(i);
		for (int j = 0; j < n; j++)
		{
			if (visited[j])
				ans++;
			visited[j] = false;
		}
	}
	printf("%d\n", ans);
}
