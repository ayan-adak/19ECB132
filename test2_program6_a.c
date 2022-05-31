#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int item;
    struct node *left;
    struct node *right;
};
struct node* insert(struct node* root, int item) 
{
	if(root == NULL) 
	{
        struct node* node=(struct node*)malloc(sizeof(struct node));
        node->item = item;
        node->left = NULL;
        node->right = NULL;
        return node;
	} 
	else 
	{
		struct node* c;
		if(item<=root->item) 
		{
            c=insert(root->left,item);
            root->left=c;
		} else 
		{
            c=insert(root->right,item);
            root->right=c;
		}
		return root;
	}
}
int getHeight(struct node* root) 
{
    if (root==NULL) 
    {
        return -1;
    }
    else 
    {
        int left=getHeight(root->left);
        int right=getHeight(root->right);
        if (left>right) 
            return left+1;
        else  
            return right+1;
        
    }
}
int main() 
{
    struct node* root = NULL;
    int t;
    int d;
    scanf("%d", &t);
    while(t-- > 0) 
    {
        scanf("%d",&d);
        root=insert(root,d);
    }
	printf("%d",getHeight(root));
    return 0;
}


/*

Input
7
3 2 5 1 4 6 7

Output
3

*/