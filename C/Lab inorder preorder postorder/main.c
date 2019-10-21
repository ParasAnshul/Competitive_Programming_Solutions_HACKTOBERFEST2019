#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node* left;
    struct node* right;
};
struct node* root;
struct node* insert(struct node*r,int data);
void inorder(struct node* r);
void preorder(struct node* r);
void postorder(struct node* r);
int main()
{
    root=NULL;
    int n,v;
    printf("How many data's you want to insert?\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Data %d:" ,i);
        scanf("%d",&v);
        root=insert(root,v);
    }


    printf(" Inorder Traversal ");
    inorder( root );
    printf("\n");
   printf(" Preorder Traversal ");
   preorder( root );
   printf("\n");
   printf(" Postorder Traversal ");
   postorder( root );
   printf("\n");
   return 0;
}
struct node* insert(struct node*r,int data)
{
    if(r==NULL)
    {
        r=(struct node*)malloc(sizeof(struct node));
        r->value=data;
        r->left=NULL;
        r->right=NULL;
    }
    else if(data<r->value){
        r->left=insert(r->left,data);
    }
    else{
        r->right=insert(r->right,data);
    }
    return r;
}
void inorder(struct node* r){
if(r!=NULL)
{
    inorder(r->left);
    printf("%d",r->value);
    inorder(r->right);

    }
}
void preorder(struct node* r)
{
    if(r!=NULL)
    {
        printf("%d",r->value);
        preorder(r->left);
        preorder(r->right);

    }
}
void postorder(struct node* r)
{
    if(r!=NULL)
    {
        postorder(r->left);
        postorder(r->right);
        printf("%d",r->value);
    }
}




