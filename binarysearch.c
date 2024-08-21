#include<stdio.h>
int BinarySearch(int a[],int low,int high, int X)
{
    int i;
    if(low>high)
    {
         return-1;
    }
    int mid=(low+high)/2;
    if(X==a[mid])
    {   
      return mid;
    }
    if(X<a[mid])
    {
       return BinarySearch(a,low,mid-1,X);
    }
    else
    {
       return BinarySearch(a,mid+1,high,X);
    }

}
int main()
{
 int a[100],n,i,X,mid,low,ans;
 printf("enter number of elements: ");
 scanf("%d",&n);
 printf("Enter a sorted array: ");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Enter the element to be searched: ");
 scanf("%d",&X);
 ans=BinarySearch(a,low,n,X);
 printf("The element %d is found at index no. %d",X,ans);
 return 0;
}
