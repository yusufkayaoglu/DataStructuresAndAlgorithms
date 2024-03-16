#include <stdio.h>
#include <stdlib.h>

/*struct n {
    int x;
    struct n *next; 
};

typedef struct n node;

int main() {
    node *root;
    root = (node *)malloc(sizeof(node));
    root->x = 10;
    root->next = (node *)malloc(sizeof(node));
    root->next->x = 20;
    root->next->next = (node *)malloc(sizeof(node));
    root->next->next->x = 30;
    root->next->next->next = NULL;
    node *iter;
    iter = root;
    printf("%d\n", iter->x);
    iter = iter->next;
    printf("%d\n", iter->x);
    iter = root;
    int i = 0;
    while(iter != NULL){
        i++;
        printf("%d.inci eleman=  %d\n",i,iter->x); 
        iter = iter->next;
    }
    return 0; 
}*/
/*****************************************************/

/*struct n {
    int x;
    struct n *next; 
};

typedef struct n node;
void bastir(node *r){
	while(r!=NULL){
		printf("%d",r->x);
		r = r->next;
	}
}

int main() {
    node *root;
    root = (node *)malloc(sizeof(node));
    root->x = 10;
    root->next = (node *)malloc(sizeof(node));
    root->next->x = 20;
    root->next->next = (node *)malloc(sizeof(node));
    root->next->next->x = 30;
    root->next->next->next = NULL;
    node *iter;
    iter = root;
    printf("%d\n", iter->x);
    iter = iter->next;
    printf("%d\n", iter->x);
    iter = root;
    int i = 0;
    while(iter->next != NULL){
        i++;
        printf("%d.inci eleman=  %d\n",i,iter->x); 
        iter = iter->next;
    }
    for(i=0;i<5;i++){
    	iter->next = (node *)malloc(sizeof(node));
    	iter = iter ->next;
    	iter ->x = i*10;
    	iter ->next = NULL;
	}
	bastir(root);
    return 0; 
}*/
/********************************************/
struct n {
    int x;
    struct n *next; 
};

typedef struct n node;
void bastir(node *r){
	while(r!=NULL){
		printf("%d ",r->x);
		r = r->next;
	}
}
void ekle(node * r,int x){
	while(r->next!=NULL){
		r = r->next;
	}
	r->next = (node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next=NULL;
	
}

int main() {
    node *root;
	root = (node *)malloc(sizeof(node));
	root ->next = NULL;
	root ->x = 500;
    int i = 0;

    for(i=0;i<5;i++){
    	ekle(root,i*10);
	}
	bastir(root);
    return 0; 
}

