#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, int len);
void display_array(int *array, int len);

int main()
{
    int array[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    int len = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, len);
    display_array(array, len);

    return 0;
}

void bubble_sort(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void display_array(int *array, int len)
{
    printf("[");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\b\b]\n");
}