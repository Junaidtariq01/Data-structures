#include<stdio.h>
int main(){
    char str[]= "Junaid";
    char str1[]= "junadd";
int i,result;
    while(str[i]!='\0'&&str1[i]!='\0'){
        if(str[i]!=str1[i]){
            result=str[i]-str1[i];
            break;
        }
        i++;
    }
    printf("\n%d at pos %d",result,i+1);
}