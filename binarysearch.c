#include<stdio.h>
int BinarySearch(int a[],int low,int high, int X)
{
    int i,n;
     low=0;
     high=n-1;
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
       return BinarySearch(a,low,mid+1,X);
    }

}
int main()
{
 int a[100],n,i,X,mid,low,high;
 printf("enter number of elements: ");
 scanf("%d",&n);
 printf("Enter a sorted array: ");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Enter the element to be searched: ");
 scanf("%d",&X);
 BinarySearch(a,low,high,X);
 printf("The element %d is found at index no. %d",X,high);
 return 0;
}
