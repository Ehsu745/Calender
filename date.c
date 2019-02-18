#include "ehsulib.h"

int		atoi(char *str);

int		rot1(int x);

int		main(int ac, char **av)
{
	int a[6][7] = {};
	int count;
	int x;

	count = 1;
	printf("日 一 二 三 四 五 六\n");
	x = 1;
	if (ac == 2 && atoi(av[1]) <= 7)
		x = rot1(atoi(av[1]));
	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 7; i++)
		{
			count++;
			if (count > x && count <= (x + 31))
			{
				a[j][i] = a[j][i - 1] + 1;
				printf("%2d ", a[j][i]);
			}
			else if (count <= 7)
				printf("%s", "   ");
			else
				printf("%s", " ");
		}
		printf("\n");
	}
	return(0);
}
