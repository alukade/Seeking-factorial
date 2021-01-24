#include<stdio.h>
int main(void)
{
	int i, j;
	i = 1;
	j = 2;
	while (j <= 10)
	{
		i = i * j;
		j = j + 1;
	}
	printf("%d\n", i);
	return 0;
}