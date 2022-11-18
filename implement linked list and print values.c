#include<stdio.h>
#include<stdlib.h>

int data;
int choice;

struct Node{
    int data;
    struct node* next;
};

void InsertAtStart(struct Node** h_ref, int new_data ){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *h_ref;
    *h_ref = new_node;
}

void display(struct Node *node){
      while (node != NULL)
  {
    printf("%d\n", node->data);
    node = node->next;
  }
}

int main(){
    struct Node*head=NULL;
    while(1){
        printf("1.Insert the values\n");
        printf("2.Display\n");
        printf("3.Exit\n");
        printf("Enter a choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:{
                printf("Enter the values: ");
                scanf("%d",&data);
                InsertAtStart(&head,data);
                break;
            case 2:{
                display(head);
                break;
            }
            case 3:{
                printf("Exited");
                exit(1);
            }
            default:{
                printf("Enter a valid choice!");
            }
            }
        }
    }
}




