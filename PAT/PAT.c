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

    return 0;
}

