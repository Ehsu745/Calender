#include "ehsulib.h"

int		rot1(int x)
{
	if (x == 7)
		x = x - 6;
	else
		x++;
	return(x);
}
