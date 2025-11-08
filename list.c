#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};

struct Node* head;
void Insert(int x){
    struct Node* temp1 = (struct Node*) malloc(sizeof (struct Node));
    temp1->data=x;
    temp1->next=head;
    head=temp1;

    struct Node* temp2 = head;
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    

}
void Print(){
    struct Node* tepp=head;
    while (tepp!=NULL)
    {
        printf("%d",tepp->data);
        tepp=tepp->next;
    }
    

}
int main(){
head = NULL;
int n,x;
printf("Numbers");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{printf("Enter Numbers");
 scanf("%d",&x);
    Insert(x);
    Print();
}


 


 

}


















// int main(){
// int n,i;
// int A[10];
// int end = -1;

// printf("Enter the size of arr :");
// scanf("%d",&n);
// printf("Enter the Elements of arr :");

// for(i=0;i<n;i++){
// scanf("%d",&A[i]);
// }
// printf("Elements of arr :");
// for(i=0;i<n;i++){
// printf("%d",A[i]);
// }
 


// }
