#include <stdio.h>
int main(){
    int X[6]={23,45,99,46,787,99};
    for(int i=0;i<=5;i++){
        if(X[i]==99){
            printf("First occurance of 99 in array A is at position number: %d",i+1);
            break;
        }
    }
   return 0;
}
