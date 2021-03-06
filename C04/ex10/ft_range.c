#include <stdlib.h>
#include <stdbool.h>

void ft_swap_int(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int *ft_range(int start, int end)
{
    int index;
    int bound;
    bool inversed;
    int *array;

    if ((inversed = start > end))
        ft_swap_int(&start, &end);
    bound = end - start + 1;
    if (!(array = malloc(bound * sizeof(int))))
        return (NULL);
    index = 0;
    while (index < bound)
    {
        array[inversed ? bound - 1 - index : index] = start + index;
        index++;
    }
    return (array);
}