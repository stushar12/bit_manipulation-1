#include <stdio.h>
int main()
{
  int arr[]={4,3,6,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  int res=arr[0];
  for(int i=0;i<n;i++)
  {
    if((arr[i]&(arr[i]-1))==0)
    printf("%d is in power of 2 \n ",arr[i]);

  }

}