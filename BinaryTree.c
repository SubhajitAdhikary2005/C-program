#include<stdio.h>
#include<stdlib.h>

struct node
{
   struct node *left;
   int data;
   struct node *right;
};

struct node *newnode(int item)
{
   struct node *temp=(struct node *)malloc(sizeof(struct node));
   temp->data=item;
   temp->left=temp->right;
   return temp;
}

struct node *insert(struct node *node,int data)
{
    if(node==NULL)
       return newnode(data);
    else if(data<node->data)
       node->left=insert(node->left,data);
    else if(data>node->data)
       node->right=insert(node->right,data);
    return node;
}

struct node *SmallestRightNode(struct node *root)
{
    root=root->right;
    while(root!=NULL && root->left!=NULL)
          root=root->left;
    return root;
}

struct node *delete(struct node *root,int val)
{
   struct node *temp;

   if(root==NULL)
   {
      printf("Null Tree");
   }
   else if (val<root->data)
   {
     delete(root->left,val);
   }
   else if(val>root->data)
   {
     delete(root->right,val);
   }
   else if(root->left!=NULL && root->right!=NULL)
   {
      temp=SmallestRightNode(root->right);
      root->data=temp->data;
      delete(root->right,temp->data);
   }
   else
       temp=root;
       if(root->right==NULL && root->left==NULL)
       {
          root=NULL;
       }
       else if(root->left!=NULL)
       {
          root=root->left;
       }
       else
       {
          root=root->right;
       }
       free(temp);
}



void preorder(struct node *root)
{
   if(root!=NULL)
   {
     printf("%d ",root->data);
     preorder(root->left);
     preorder(root->right);
   }
}
 
void inorder(struct node *root)
{
   if(root!=NULL)
   {
      inorder(root->left);
      printf("%d ",root->data);
      inorder(root->right);
   }
}

void postorder(struct node *root)
{
   if(root!=NULL)
   {
      postorder(root->left);
      postorder(root->right);
      printf("%d ",root->data);
   }
}




int main()
{
   struct node *root=NULL;
   int item,c,val;
   printf("Press 1 for Insertion\nPress 2 for Deletion\nPress 3 for Preorder Traversal\nPress 4 for Inorder Traversal\nPress 5 for Postorder Traversal\nPress 6 for Exit\n");
   while(1)
   {

        printf("\nEnter your choice: ");
        scanf("%d",&c);
        
        switch(c)
        {
           case 1:
                    printf("Enter the element to insert: ");
                    scanf("%d",&item);
                    root=insert(root,item);
                    break;
           case 2:   
                    printf("Enter the element to delete: ");
                    scanf("%d",&val);
                    root=delete(root,val);
                    break;
                    
           case 3:
                    printf("Preorder Traversal is: ");
                    preorder(root);
                    break;
           case 4:
                    printf("Inorder Traversal is: ");
                    inorder(root);
                    break;
           case 5:
                    printf("Postorder Traversal is: ");
                    postorder(root);
                    break;
           case 6:
                    printf("Exit");
                    return -1;
                    break;
           default:
                    printf("Invalid Choice");
 
       }
   }            
                 
   return 0;
}
