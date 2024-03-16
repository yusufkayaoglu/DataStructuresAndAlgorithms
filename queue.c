#include <stdio.h>
#include <stdlib.h>

//Queue Node
struct node{
	int data;
	struct node*next;
};

//Front & Rear
struct node*front = NULL;
struct node*rear = NULL;

int enqueue(int data){
	//Queue is empty 
	if(front==NULL){
		struct node*new = (struct node*)malloc(sizeof(struct node));
		new->data = data;
		new->next = NULL;

		front = rear = new;
	}
	//Queue is not empty
	else{
		struct node*new = (struct node*)malloc(sizeof(struct node));
		new->data = data;
		new->next = NULL;
		rear->next = new;
		rear = new;
	}
	
}
int display(){
	
	//Queue is empty 
	if(front==NULL){
		printf("Queue is empty");
		return 1;	
	}
	struct node*index = front;
	while(index!=NULL){
		printf("%d- ",index->data);
		index = index->next;	
	}
	printf("\n");
	return 1;
}
int dequeue(){
	//	Queue is empty
	if(front==NULL){
		printf("Queue is empty \n");
		return 1;
	}
	struct node*temp = front;
	front = front->next;
	free(temp);
	return 1;


}

int main() {
	enqueue(5);
	enqueue(6);
	enqueue(8);
	enqueue(10);
	display();
	dequeue();
	display();
	return 0;
}
