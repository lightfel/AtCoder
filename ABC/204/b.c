#include <stdio.h>

int	main(void)
{
	int	n, a;
	int	total = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a > 10)
			total += a - 10;
	}
	printf("%d\n", total);
	return (0);
}
