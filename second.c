#include <stdio.h>

void cyclic(int arr1[],int m)
{
  int k=arr1[m-1];
  int temp=0;
  for(int i=m-2;i>=0;i--)
  {
    temp=arr1[i+1]; 
    arr1[i+1]=arr1[i];

  }
  arr1[0]=k;
  printf("Final Array after rotation is : ");
  for(int i=0;i<m;i++)
  {
    printf("%d ",arr1[i]);
  }
}


int main()
{
  int arr1[] = {7, 1, 5, 2, 3, 6};
int m = sizeof(arr1) / sizeof(arr1[0]);
 cyclic(arr1,m);
}