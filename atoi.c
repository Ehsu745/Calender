#include "ehsulib.h"

int		atoi(char *str)
{
	int n;
	int i;
	int x;

	n = 0;
	i = 0;
	x = 1;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] < 58)
        {
            n = (10 * n) + (str[i] - 48);
            i++;
        }
		else if (str[i] == 32)
			i++;
    	else if (str[i] == '-')
		{
        	i++;
			x--;
		}
    	else
        	return(0);
	}
	if (x == 0)
		write(1, "-", 1);
	return(n);
}
