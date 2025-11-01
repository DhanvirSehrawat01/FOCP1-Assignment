#include<stdio.h>
int main(){
    int sum=0, n,r,armstrong;
    printf("Enter Number: ");
    scanf("%d", &n);
    armstrong=n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(armstrong==sum){
        printf("Armstrong Number");
    } else{
        printf("Not an Armstrong Number");
    }
    return 0;
}
