#include <stdio.h>  
  
void insertionsort(int a[], int n) /* function to sort an array with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void display(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);  
    }
}  
  
int main()  
{  
    int a[] = { 10,35,9,45,1};  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are \n");  
    display(a, n);  
    insertionsort(a, n);  
    printf("\nAfter sorting array elements are \n");    
    display(a, n);  
  
    return 0;  
}    
