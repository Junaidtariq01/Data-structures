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
    
    int best_buy = arr[0];
    for (int i = 1; i < nums; i++)
    {
        if (best_buy > arr[i])
        {
            best_buy = arr[i];
        }
    }
    printf("Best buy: %d\n", best_buy);

    int best_sell = arr[1];
    for (int i = 2; i < nums; i++)
    {
        if (best_sell < arr[i])
        {
            best_sell = arr[i];
        }
    }
    printf("Best Sell: %d", best_sell);

    printf("\nMax profit: %d", best_sell-best_buy);

}