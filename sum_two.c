#include <stdio.h>
int main()
{
    int size, target;
    int num[10], sum[50];
    int i, j, k;
    int flag = 0;
    printf("Enter the size of array ");
    scanf("%d", &size);
    printf("Enter the Numbers :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Numbers are ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\nEnter the target number ");
    scanf("%d", &target);

    // printf("\nValue of i = %d\n", i);

    for (j = 0; j < i; j++)
    {

        for (k = 0; k < i; k++)
        {
            if (num[j] + num[k + 1] == target)
            {
                printf("target found");
                printf("\nFound at %d,%d \n", num[j], num[k + 1]);
                flag = 1;
            }
        }

        if (flag == 0)
        {
            printf("Target Not found");
            break;
        }

        for ( j = 0; j < i; j++){
            for ( k = 0; k < i; k++)
            {
                sum[k] = num[j]+num[k];
            }

        }

        // for ( j = 0; j < i; j++){
        //     for ( k = 0; k < i; k++)
        //     {
        //         printf("\n%d ",sum[k]);

        //         // if (sum[j][k] < sum[j][k+1]){
        //         //     printf("\n%d is biggest",sum[j][k]);
        //             flag = 1;
        //             return 1;

        //     }
        // }

     }

return 0;
}