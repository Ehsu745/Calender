#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
	int m[6][7]={};
	int a,b,count;

	printf("請輸入天數\n");
	scanf("%d",&a);
	printf("請輸入1號是星期幾\n");
	scanf("%d", &b);
	printf(" 一 二 三 四 五 六 日\n");

	for(int j = 0; j < 7; j++)
	{
		for(int k = 0; k < 7; k++)
		{
			count++;
			if(count >= 0 + b && count < a + b)
			{
				m[j][k] = m[j][k - 1] + 1;
				printf(" %2d", m[j][k]);
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
//	system("pause");
	return 0;
}
