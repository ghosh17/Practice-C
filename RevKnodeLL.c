//Reverse K Nodes in a linked List

/*

1->2->3->4->5
k=2
2->1->3->4->5

*/

#include<stdio.h>
#include<stdlib.h>


struct node{

	int data;
	struct node *next;

};


void print(struct node *node)
{
	
	if(node==NULL)
		printf("Node is empty");

	while(node->next!=NULL)
	{
		printf("%d",node->data);
		printf("->");
	}
	

}


struct node * reverseKNodes(struct node *head, int k)
{
	
	int count=0;
	struct node * prev=NULL;
	struct node * next;
	
		struct node *node=head;
		
		while(count!=k && node!=NULL)
		{	
			

			next=node->next;

			node->next=prev;
			
			//update
			prev=node;
			node=next;
			count++;

			
		}
		/*if(next!=NULL)
		{

			node->next=reverse(next,k);
			return prev;
		}
		*/

	
	return prev;

}

struct node * newNode(int data)
{
	struct node *node= (struct node*) malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}


int main()

{


	struct node *node= (struct node*) malloc(sizeof(struct node));
	node->next=newNode(1);
	node->next->next=newNode(2);
	node->next->next->next=newNode(3);
	node->next->next->next->next=newNode(4);
	node->next->next->next->next->next=newNode(5);

	print(node);
	printf("\n **** \n");
	int k=2;

	struct node *RevKNodes= reverseKNodes(node, k);
	print(RevKNodes);

	printf("\n **** \n");




	return 0; 

}
