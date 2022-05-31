#include <stdio.h>
#include <stdlib.h>
struct node
{
    int items;
    struct node *left;
    struct node *right;
};
struct node* insert(struct node* root,int items) 
{
    if(root==NULL) 
    {
        struct node* node=(struct node*)malloc(sizeof(struct node));
        node->items=items;
        node->left=NULL;
        node->right=NULL;
        return node;
    } 
    else 
    {
        struct node* cur;
        if(items<=root->items) 
        {
            cur=insert(root->left,items);
            root->left=cur;
        } 
        else 
        {
            cur=insert(root->right,items);
            root->right=cur;
        }
        return root;
    }
}
void pre(struct node *root) 
{
if(root!=NULL) 
{
    printf("%d ",root->items);
    pre(root->left);
    pre(root->right);
}
}
int main() 
{
    struct node* root=NULL;
    int t;
    int d;
    scanf("%d",&t);
    while(t-->0) 
    {
        scanf("%d",&d);
        root=insert(root,d);
    }
    pre(root);
    return 0;
}


/*

Input
6
1 2 5 3 6 4

Output
1 2 5 3 4 6

*/