#include "sort.h"
/**
 * bubble_sort - bubble sort algotithm in list
 * @array: array to be soreted
 * @sizeo: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t sizeo)
{
size_t i = 0;
size_t x = 0;
int temp = 0;
for (i = 0; i < sizeo - 1; i++)
{
for (x = 0; x < sizeo - 1; x++)
{
if (array[x] > array[x + 1])
{
temp = array[x];
array[x] = array[x + 1];
array[x + 1] = temp;
print_array(array, sizeo);
}
}
}
}
