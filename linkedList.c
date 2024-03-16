#include <stdio.h>
#include <stdlib.h>

//Linked List
struct node{
	int data;
	struct node *next;
};

//Head & Tail
struct node *head = NULL;
struct node *tail = NULL;

int addNode(int data){
	//Linked List is empty 
	if(head==NULL){
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new->data = data;
		head = tail = new;
	}
	//Linked list's not empty
	else{
		struct node*new =(struct node*)malloc(sizeof(struct node));
		new->data = data;
		new->next = NULL;
		
		tail->next = new; //Sona ekle
		tail = new; //Tail'i güncelle	
   }
}
int addNodeHead(int data){
	//Linked list is empty
	if(head == NULL){
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new -> data = data;
		new -> next = NULL;
		
		head = tail = new;
	}
	//Linked List's not empty
	else{
		struct node *new = (struct node*)malloc(sizeof(struct node));
		new -> data = data;
		new -> next = NULL;
		new ->next = head;
		head = new;
	}
}
int print(){
	struct node*index = head;
	printf("Linked List: ");
	while(index!=NULL){
		printf("%d - ",index->data);
		index = index->next;
		
	}
	 printf("\n");
	return 1;
}
//Delete Node
int delete(int data){
	struct node *prev =NULL;
	struct node*index =head; //Silinecek elemaný listenin en baþýndan itibaren aramaya baþlayacaðýmýz için head'e eþitledik
	
	
	//Linked List is empty
	if(head == NULL){
		printf("Linked List is empty \n");
	}
	//Silinecek eleman head ise:
	if(head->data ==data){
		struct node*t = head;
		head = head ->next;
		free(t);
		return 1;
	}
	while(index!=NULL && index->data!=data){
		prev = index;
		index = index ->next;
		
	}
	if(index == NULL){
		printf("Data not found\n");
	}
	prev->next = index->next; //Eleman silindikten sonra silinen elemandan önceki elemaný silinen elemandan sonraki elemana baðlama iþlemi
	
	if(tail->data == data){
		tail = prev;	
	}
	free(index);
	return 1;
}



int main(int argc, char *argv[]) {
	addNode(10);
	addNode(14);
	addNode(16);
	addNode(19);
	
	addNodeHead(15);
	addNodeHead(7);
	addNode(30);
	print();
	delete(7);
	print();
	
	
	return 1;
}
