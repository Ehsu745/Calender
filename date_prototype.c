#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int a[6][7] = {};
	int count;

	count = 1;
	printf("日 一 二 三 四 五 六\n");

	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 7; i++)
		{
			count++;
			if (count > 7 && count <= 38)
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
