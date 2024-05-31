//
//	Add function - returns sum of 2 integers
//

#include <stdio.h>
#include "arith.h"

int main()
{
	int x = 10;
	int y = 5;
	
	printf("%d + %d = %d \n", x, y, add(x, y));
	printf("%d - %d = %d \n", x, y, sub(x, y));
	printf("%d * %d = %d \n", x, y, mul(x, y));
	printf("%d / %d = %d \n", x, y, div(x, y));
	
	return 0;
}

