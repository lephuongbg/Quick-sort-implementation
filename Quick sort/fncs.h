/*
 * fncs.h
 *
 *  Created on: Nov 2, 2011
 *      Author: herop-kde
 */

#ifndef FNCS_H_
#define FNCS_H_

void swap (int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int partition(int **array, int left, int right, int pivotIndex)
{
	int pivotValue, storeIndex, i;
	pivotValue = (*array)[pivotIndex];
	swap(&(*array)[pivotIndex], &(*array)[right]);
	storeIndex = left;
	for (i = left; i < right; i++)
	{
		if ((*array)[i] < pivotValue)
		{
			swap(&(*array)[i], &(*array)[storeIndex]);
			storeIndex++;
		}
	}
	swap(&(*array)[storeIndex], &(*array)[right]);
	return storeIndex;
}

void quicksort(int **array, int left, int right)
{
	int pivotIndex, pivotNewIndex;
	if (left < right)
	{
		pivotIndex = (right + left)/2;
		pivotNewIndex = partition(&(*array), left, right, pivotIndex);
		quicksort(&(*array), left, pivotNewIndex - 1);
		quicksort(&(*array), pivotNewIndex + 1, right);
	} else
		return;
}

#endif /* FNCS_H_ */
