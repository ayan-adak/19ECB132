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
int Height(struct node* root) 
{
    int a=0;
    struct node* b=root;
    while(b&&(b->left!=NULL||b->right!=NULL) )
    {
      if(b->right!=NULL)
      {
          b=b->right;
          a++;
          continue;
      }
      if (b->left!=NULL)
      {
          b=b->left;
          a++;
          continue;
      }
    }
    return a;
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
	printf("%d",Height(root));
    return 0;
}


/*

Input
7
3 2 5 1 4 6 7

Output
3

*/