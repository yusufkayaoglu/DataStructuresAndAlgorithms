#include <stdio.h>
#include <stdlib.h>

//Stack
struct node{
	int data;
	struct node*next;
};

//Top
struct node*top = NULL;

//Push
int push(int data){
	//Stack is empty
	if(top == NULL){
		struct node*new = (struct node*)malloc(sizeof(struct node));
		new->data = data;
		new->next = NULL;
		top = new;
	}
	//Stack's not empty
	else{
		struct node*new = (struct node*)malloc(sizeof(struct node));	
		new->data = data;
		new->next = NULL;
		new->next = top;
		top = new;
	}
	return 1;
}

int display(){
	//Stack is empty
	if(top==NULL){
		printf("Stack is empty \n");
		return 1;
	}
	struct node*index = top;
	while(index!=NULL){
		printf("%d - ",index->data);
		index = index->next;
	}
	printf("\n");
	return 1;	
}
int pop(){
	//Stack is empty
	if(top==NULL){
		printf("Stack is empty.\n");
		return 1;	
	}
	struct node * temp = top;
	top = top->next;
	free(temp);
	
}

int main() {
	
	push(1);
	push(2);
	push(4);
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	
	return 1;
}
