#include "Merge.h"
#include <iostream>


//Merge two sorted sub arrays 
void Merge(int arr[], int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	//Temporary array 
	//dynamically allocate memory using new pointer
	int* L = new int[n1];
	int* R = new int[n2];

	//copy data to temporary arrays L and R
	for ( i = 0; i < n1; i++)
	{
		L[i] = arr[left + i];
	}
	for ( j = 0; j < n2; j++)
	{
		R[j] = arr[mid + 1 + j];
	}

	//Merge the temporary arrays 
	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
}

void MergeSort(int arr[], int left, int right)
{
	if (left < right) {
		//Same as (left+right)/2,
		int mid = left + (right - left) / 2;

		//sort first and second halves
		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);

		//Merge the sorted halves
		Merge(arr, left, mid, right);
	}

}