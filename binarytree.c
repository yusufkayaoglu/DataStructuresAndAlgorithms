#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node*left;
	struct node*right;
	
};


struct node *newNode(int data){
	struct node*new = malloc(sizeof(struct node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	return new;
}


int main(int argc, char *argv[]) {
	struct node*root = newNode(1);
	root->left =newNode(2);
	root->right=newNode(3);
	root->left->left =newNode(4);
	root->left->right =newNode(5);
	root->right->left =newNode(6);
	root->right->right =newNode(7);
	printf("Root : %d \n",root->data);
	printf("Root : %d \n",root->left->data);
	


	return 0;
}