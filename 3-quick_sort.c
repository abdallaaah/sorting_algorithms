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
* partition - Orders a subset of an array of integers using partion
* @array: The array of integers.
* @left: The starting index of the subset to order.
* @right: The ending index of the subset to order.
* @size: size of the array
* Return: The final partition index.
*/
int partition(int *array, int left, int right, int size)
{
int pivot = array[right];
int i = left - 1;
int j;
for (j = left; j < right; j++)
{
if (array[j] < pivot)
{
i++;
swap_ints(&array[i], &array[j]);
}
}

swap_ints(&array[i + 1], &array[right]);
print_array(array, size);
return (i + 1);
}

/**
* quick_sort_recursive - Implements the quicksort algorithm through recursion.
* @array: An array of integers to sort.
* @left: The starting index of the array partition to order.
* @right: The ending index of the array partition to order.
* @size: size of the array
* Return: void
*/
void quick_sort_recursive(int *array, int left, int right, int size)
{
int partition_index;
if (left < right)
{
partition_index = partition(array, left, right, size);
quick_sort_recursive(array, left, partition_index - 1, size);
quick_sort_recursive(array, partition_index + 1, right, size);
}
}

/**
* quick_sort - Sorts an array of integers in ascending order using quick
* @array: An array of integers.
* @size: The size of the array.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);
}
