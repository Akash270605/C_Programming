#include<stdio.h>
#include<stdlib.h>

struct bst
{
    int data;
    struct bst *left,*right;
};

struct bst *root;

//Inorder Function
void inorder(struct bst *root)
{
    if(root!=NULL){
    inorder(root->left);
    printf("\n%d ",root->data);
    inorder(root->right);
    }
}

//Pre Order Function
void pre(struct bst *root)
{
    if(root!=NULL){
    printf("\n%d ",root->data);
    pre(root->left);
    pre(root->right);
    }
}

//Post Order Function
void post(struct bst *root)
{
    if(root!=NULL){
    post(root->left);
    post(root->right);
    printf("\n%d",root->data);
    }
}

//Insert Function
struct bst *insert(struct bst *root, int val)
{
    struct bst *k;
    k=(struct bst *)malloc(sizeof(struct bst));
    k->data=val;
    k->left=NULL;
    k->right=NULL;

    if(root==NULL)
    {
        root=k;
    }
    else if(val<=root->data)

    {
        root->left=insert(root->left,val);
    }

    else
    {
        root->right=insert(root->right,val);
    }
    return root;
}

//Search Function
struct bst *search(struct bst *root,int key)
{

 if(root==NULL)
 {
     printf("\n%d is Not Found",key);

 }
 else
    {
        if(root->data==key)
        {
            printf("\n%d is Found",key);

        }
        else if(key<root->data)
        {
            return search(root->left,key);

        }
        else
        {
            return search(root->right,key);

        }
    }

 }


//Main Function
void main()
{
    int ch;
    root=NULL;
    int val,key;

    while(1)
    {
        printf("\n\n1.Insert \n2.In Order \n3.Pre Order \n4.Post Order \n5.Exit \n6.Search \nSelect the Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("\nEnter the Value to Insert: ");
                   scanf("%d",&val);
                    root=insert(root,val);
                break;

            case 2:inorder(root);
                break;

            case 3:pre(root);
                break;

            case 4:post(root);
                break;

            case 5:exit(0);
                break;

            case 6:printf("\nEnter the Value to Search: ");
                   scanf("%d",&key);
                    search(root,key);

                break;

            default:printf("\nInvalid Choice!!!");
        }
    }


}
