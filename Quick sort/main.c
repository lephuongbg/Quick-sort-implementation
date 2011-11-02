/*
 * QUICK SORT ALGORITHM IMPLEMENTATION
 *
 *  Created on: Nov 2, 2011
 *      Author: herop-kde
 */

#include <stdio.h>
#include <stdlib.h>
#include "fncs.h"
int main()
{
	int n, i;
	int *array_ptr;

	scanf("%d", &n);
	array_ptr = malloc(n*sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &array_ptr[i]);

	quicksort(&array_ptr, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d ", array_ptr[i]);
	printf("\n");

	return 0;
}
