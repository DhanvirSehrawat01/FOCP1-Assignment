#include <stdio.h>
int main() {
    int i , n, count = 0 , a , b , c ;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        a = arr[i];
        c = 0; 
        if (a < 2) 
            continue;
        for (b = 2; b <= a / 2; b++) {
            if (a % b == 0)
                c++;
        }
        if (c == 0)
            count++;
    }
    printf("Number of prime numbers in the array are: %d\n", count);
   return 0;
}
