#include<stdio.h>

int add(int a, int b, int c){
    int sum;
    if (c<0)
    {
        return c;
    }
    
    
    sum = a+b;
    printf("partial sum is %d\n",sum);
    sum = add(2,sum,c-1);
    printf("Returned value is %d\n",c);
  
}
int main(){
    int a,b,c;
    printf("Enter ist number ");
    scanf("%d",&a);
    printf("Enter 2nd number ");
    scanf("%d",&b);
    printf(" numbers to call ");
    scanf("%d",&c);

    int sum = add(a,b,c);

    // Output the result
    printf("Sum = %d\n", sum);

    return 0;

}