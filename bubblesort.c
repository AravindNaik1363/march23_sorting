//c program to sort an array using bubble sort 
#include<stdio.h>

void print_array(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}

void bubblesort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}


int main() 
{
  int a[]={10,35,9,45,1};
  int n=sizeof(a)/sizeof(a[0]);
  printf("\nbefore sorting array elements are:\n");
  print_array(a,n);
  bubblesort(a,n);
  printf("\nafter sorting array elements are:\n");
  print_array(a,n);
  return 0;
}
