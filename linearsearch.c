#include <stdio.h>

int main() {
    int i,n,key,found=0;
    int a[50];
    printf("Enter no. of elements\n");
    scanf("%d",&n);
     
      printf("Enter %d element:\n",n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      printf("Enter element to search:\n");
      scanf("%d",&key);
      
      //Linear Search Logic
      for(i=0;i<n;i++)
      {
          if(a[i]=key)
          {
              printf("Element found at position %d\n",i+1);
              found=1;
              break;
          }
      }
      if(found=0)
      {
          printf("Eelment not found\n");
      }
    return 0;
}