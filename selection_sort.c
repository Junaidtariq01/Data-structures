#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{
    int size, mid;
    int arr[20];
    int i, j, k;
    int flag = 0;
    printf("Enter the size of array ");
    scanf("%d", &size);
    printf("Enter the Numbers :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Numbers are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nValue of i = %d\n", i);
    
    for (j = 0; j < i; j++)
    {
        for (k = 0; k < i; k++)
        {
            
            /* code */
        }
    }
    
    swap(&arr[0],&arr[1]);
    printf("\nswaped %d,%d",arr[0],arr[1] );
}