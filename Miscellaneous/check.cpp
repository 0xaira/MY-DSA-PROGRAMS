
#include<stdio.h>
  
int main(void)
{
    int size = 6;
    int val = 1;
  
    // array declaration
    int arr[6];
    int i;
  
    // initializing array elements
    for (i = 0; i < size ; i++){
        arr[i] = val;
    }
  
     // print array
     printf("The array is:");
     for (i = 0; i < size ; i++){
         printf("%d ", arr[i]);
    }
  
    return 0;
}