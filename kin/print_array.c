#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the array to print  
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size)
{
  size_t i;

  if (!array || size <= 0)
    {
      printf("Error: Invalid inputs\n");
      return;
    }

  for (i = 0; i < size; i++) 
    {
      if (i > 0)
        {
          printf(", ");
        }
      printf("%d", array[i]); 
    }

  printf("\n");
}
