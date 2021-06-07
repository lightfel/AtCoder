#include <stdio.h>
#include <stdbool.h>

#define MAX 2000

bool	load[MAX][MAX];
bool	visited[MAX];
int	n;

void	dfs(int vertex)
{
	if (visited[vertex])
		return ;
	visited[vertex] = true;
	for (int i = 0; i < n; i++)
	{
		if (load[vertex][i])
			dfs(i);
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
		load[a - 1][b - 1] = true;
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
