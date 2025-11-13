#include <stdio.h>
int main()
{
    int nums;
    printf("Enter the size of array: ");
    scanf("%d", &nums);
    int arr[nums];
    printf("Enter any numbers: ");
    for (int i = 0; i < nums; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < nums; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j+1])
            {
                printf("number found: %d", arr[i]);
                break;
            }
        }
    }
}