#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void push();
void pop();
void display();

int choice;


struct node *head;

int main()
{
    while(1){
        printf("\nIMPLEMENTATION OF STACK USING LINKED LIST\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("$.Exit\n");
        printf("Enter a choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
            }
            case 4:{
                printf("Exited");
                exit(1);
            }
        }
    }

}

void push(){
    int data;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    if(ptr==NULL){
        printf("Cannot insert data!");
    }
    else{
        printf("Enter the value to be pushed: ");
        scanf("%d",&data);
        if(head==NULL){
            ptr->data=data;
            ptr->next=NULL;
            head=ptr;
        }
        else{
            ptr->data=data;
            ptr->next=head;
            head=ptr;
        }
        printf("Pushed %d into the stack ",data);
    }
}

void pop(){
    int item;
    struct node*ptr;
    if(head==NULL){
        printf("Stack is empty!");
    }
    else{
        item=head->data;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("%d popped from the stack",item);

    }
}

void display(){
    struct node*ptr;
    if(ptr==NULL){
        printf("Stack is empty");
    }
        printf("Stack elements are:\n");
        while(ptr!=NULL){
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }



