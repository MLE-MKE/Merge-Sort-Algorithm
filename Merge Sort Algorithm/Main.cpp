// Merge Sort Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Merge.h"
using namespace std;

int main()
{
	int size; 
	cout << "Enter the size of the array";
	cin >> size;

	int* arr = new int[size];
	cout << "Enter the numbers of the array followed by the enter key after each element:";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	//call merge sort
	MergeSort(arr, 0, size - 1);

	cout << "Sorted array";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//Free up dynamically allocated memory 
	delete[] arr;
	return 0;

}
