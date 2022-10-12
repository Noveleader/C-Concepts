//Insert the element to the beginning of the linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void insert(int x);
void print();

struct Node* head;
int main(){
    head = NULL;
    printf("How many numbers you want to insert in list? ");
    int n,i, x;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter the number : ");
        scanf("%d", &x);
        insert(x);
        print();
    }
    
}

void insert(int n){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = head;
    head = temp;
}

void print(){
    struct Node* temp = head;
    printf("List is : ");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
