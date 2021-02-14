#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Array elements are:\n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", a[i]);  
  
    return 0;  
}  