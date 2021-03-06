#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 0.0001

float fun(float x0) {
	return (x0*x0 - 3 * x0 + 2);
}

float defun(float x0) {
	return (x0 - 3);
}

void main()
{
	int max, i = 0;
	float x1, x0, d;
	printf("Evaluating root using Newton Raphson\n\nEnter maximum iterations:\t");
	scanf_s("%d", &max);
	printf("Enter the first approximation:\t");
	scanf_s("%f", &x0);
	do 
	{
		x1 = x0 - fun(x0) / defun(x0);
		i++;
		//printf("%d",i);
		if (fabs(x1 - x0) <= EPS)
		{
			break;
		}
		else
			x0 = x1;
	} while (i < max);
	printf("The value of root after %d iteration is %f", i, x1);
}
