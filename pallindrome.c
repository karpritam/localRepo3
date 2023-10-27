#include<stdio.h>
int main(){
    int n,c,s=0,r;
    printf("enter the number:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        s=r+(s*10);
        n=n/10;

    }
    if(c==s){
        printf("%d is allindrome number",n);
    }
    else{
        printf("%d is not pallindrome number",n);
    }
}