#include "sort.h"

/**
* swap_ints - Swaps two integers in an array.
* @a: The first integer to swap.
* @b: The second integer to swap.
*/
void swap_ints(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

/**
* partition - Orders a subset of an array of integers using the Lomuto partition scheme.
* @array: The array of integers.
* @left: The starting index of the subset to order.
* @right: The ending index of the subset to order.
*
* Return: The final partition index.
*/
int partition(int *array, int left, int right)
{
int pivot = array[right];
int i = left - 1;

for (int j = left; j < right; j++)
{
if (array[j] < pivot)
{
i++;
swap_ints(&array[i], &array[j]);
}
}

swap_ints(&array[i + 1], &array[right]);

return (i + 1);
}

/**
* quick_sort_recursive - Implements the quicksort algorithm through recursion.
* @array: An array of integers to sort.
* @left: The starting index of the array partition to order.
* @right: The ending index of the array partition to order.
*/
void quick_sort_recursive(int *array, int left, int right)
{
if (left < right)
{
int partition_index = partition(array, left, right);
quick_sort_recursive(array, left, partition_index - 1);
quick_sort_recursive(array, partition_index + 1, right);
}
}

/**
* quick_sort - Sorts an array of integers in ascending order using the quicksort algorithm.
* @array: An array of integers.
* @size: The size of the array.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_recursive(array, 0, size - 1);
}
