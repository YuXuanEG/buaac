// PAT.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a,b,sum;
	printf("input 2 integers a and b where −10^6< a,b <10^6 \n");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);

	if (sum<0)
	{
		printf("-");
		sum = -sum;
	}
	int c[7], len = 0;
	if (sum==0)
	{
		printf("0");
	}
	else {
		while (sum>0)
		{
			c[len++] = sum % 10;
			sum /= 10;
		}
		for (int i = len-1; i >= 0; i--)
		{
			printf("%d", c[i]);
			if (i % 3 == 0 && i != 0)printf(",");
		}
	}

    return 0;
}

