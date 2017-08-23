#include<stdio.h>
#include<stdlib.h>

struct Node
{

int data;
struct Node *left;
struct Node *right;

};


int minDepth(struct Node *root);



int minDepth(struct Node *root)
{

if(root==NULL)
{
return 0;
}

if(root->left==NULL&&root->right==NULL)
{
return 1;
}

int lDepth=minDepth(root->left);
int rDepth=minDepth(root->right);
if(lDepth<rDepth)
return(lDepth+1);
else return(rDepth+1);
}

struct Node *newNode(int data)

{

struct Node *Node = (struct Node*) malloc(sizeof(struct Node)); 
Node->data=data;
Node->left = NULL;Node->right = NULL;
return(Node);


}


int main()

{
struct Node *root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->right->left=newNode(6);
root->left->left->left=newNode(7);
int depth=minDepth(root);

printf("%d",depth);
getchar();
return 0;

}



