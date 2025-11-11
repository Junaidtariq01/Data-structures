#include <stdio.h>
int front, rear = -1;
int num;
int arr[10];

void enqueue(int num)
{
   
    arr[rear] = num;
    rear += 1;
}

void print()
{
    printf("%d", arr[rear]);
    
    for (int i = -1; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
}

void dequeue()
{
}
int main()
{
    int loop, size;
    printf("Enter the num to run loop:");
    scanf("%d", &loop);
    printf("Enter the size of queue:");
    scanf("%d", &size);
    for (int i = 0; i < loop; i++)
    {
        printf("Enter the number for enqueue:");
        scanf("%d", &num);
        enqueue(num);

        // for (int i = 0; i < size; i++)
        // {
        // }
    }
    print();
}