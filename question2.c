#include<stdio.h>
int main(){
    int a , b ;
    printf("Enter 1st number: ");
    scanf("%d",&a);
     printf("Enter 2nd number: ");
    scanf("%d",&b);

    while(a != b){
        if(a>b){
        a = a - b ;
        }else if (b>a)
        b = b - a ;
    }

        printf("The HCF of the given numbers is: %d",a);
        return 0;
    }
