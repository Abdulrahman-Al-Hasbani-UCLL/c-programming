#include <stdio.h>

void swap(int* left, int* right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

int main(void)
{
    int i = 2;

    int j = 5;
    printf("i = %d, j = %d\n", i, j);
    
    swap(&i, &j);

    printf("i = %d, j = %d\n", i, j);
}
