 #include<stdio.h>
int main(){

    int freq=0 ,ans=0 ;
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers having similar in:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Numbers are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    for(int i =0 ; i<n; i++){
        if(freq == 0){
            ans=arr[i];
        }
        if(ans==arr[i])
        freq++;
        else
        freq--;
    }
    printf("\nmajority element: %d",ans);
}
