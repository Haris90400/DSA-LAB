#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
int data;
struct Node* next;
};

int choice;
int data;

void insertAtBegening(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void insertInBetween(struct Node *prev_node, int new_data)
{
  if (prev_node == NULL)
  {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertAtEnd(struct Node **head_ref, int new_data)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  struct Node *last = *head_ref; /* used in step 5 */

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL)
  {
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void display(struct Node *node){
      while (node != NULL)
  {
    printf(" %d\n", node->data);
    node = node->next;
  }
}


void main(){
    struct node*head=NULL;
    while(1){
    printf("1.Insert at the begening.\n");
    printf("2.Insert in between.\n");
    printf("3.Insert at end.\n");
    printf("4.Dislay.\n");
    printf("5.Exit\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    switch (choice){
        case 1:{
            printf("Enter values: ");
            scanf("%d",&data);
            insertAtBegening(&head,data);
            break;
        }
        case 2:{
            printf("Enter values: ");
            scanf("%d",&data);
            insertInBetween(&head,data);
            break;
        }
        case 3:{
            printf("Enter values: ");
            scanf("%d",&data);
            insertAtEnd(&head,data);
            break;
        }
        case 4:{
            display(head);
            break;
        }
        case 5:{
            exit(1);
            break;
        }
    }
}
}



