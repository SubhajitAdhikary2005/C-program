#include<stdio.h>
int IdenticalMatrix(int r1,int c1,int r2,int c2, int mat1[100][100],int mat2[100][100])
{
   int i,j,k,flag;
   flag=0;
   if(r1==r2 && c1==c2)
   {
       for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
           {
               if(mat1[i][j]!=mat2[i][j])
               {
                   flag=1;
                   break;
               }
           }
       }    
       
   }
   else
   {
       printf("Two Matrix are not Identical as the row or column no. of Two Matrix is not same");
   }
   if(flag==1)
   {
       printf("Two matrix are Identical as the elements of two matrix are not same");
   }
   else
   {
       printf("Two matrix are Identical ");
   }
       

}
int main()
{
    int i,j,r1,c1,r2,c2,mat1[100][100],mat2[100][100];
    printf("For First Matrix:");
    
    printf("Enter number of rows: ");
    scanf("%d",&r1);
    printf("Enter number of columns: ");
    scanf("%d",&c1);
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
       {
          printf("Enter (%d,%d) element:",i,j);
          scanf("%d",&mat1[i][j]);
       }
    }
    printf("Matrix is:\n");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
       {
          printf("%d ",mat1[i][j]);
       }
       printf("\n");
    }
    printf("For Second Matrix:");
    printf("Enter number of rows: ");
    scanf("%d",&r2);
    printf("Enter number of columns: ");
    scanf("%d",&c2);
    for(i=0;i<r2;i++)
    {
       for(j=0;j<c2;j++)
       {
          printf("Enter (%d,%d) element:",i,j);
          scanf("%d",&mat2[i][j]);
       }
    }
    printf("Matrix is:\n");
    for(i=0;i<r2;i++)
    {
       for(j=0;j<c2;j++)
       {
          printf("%d ",mat2[i][j]);
       }
       printf("\n");
    }   
    IdenticalMatrix(r1,c1,r2,c2,mat1,mat2);
    return 0;
}