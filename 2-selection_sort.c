#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0;
size_t x = 0;
int temp = 0;
int min = -999;
int pos = 0;
int flag;
for (i = 0; i < size - 1; i++)
{
min = array[i];
flag = 1;
for (x = i + 1; x < size; x++)
{
if (array[x] < min)
{
min = array[x];
pos = x;
flag = 0;
}
}
if (flag == 0)
{
temp = array[i];
array[i] = array[pos];
array[pos] = temp;
print_array(array, size);
}
}
}
