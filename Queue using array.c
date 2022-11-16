#include<stdio.h>

int queue[100];
int data;
int rear=-1;
int front=-1;
int n;
int choice;

void enqueue();
void dequeue();
void display();

int main(){
    printf("Enter the size of array[MAX SIZE=100]:");
    scanf("%d",&n);
    while (1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("Enter a choice to be executed: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:{
                enqueue();
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            default : {
                printf("Enter a valid choice!");
            }
        }
    }
}

void enqueue(){
    if(rear==n-1){
        printf("Queue is Full");
    }
    else{
        if (front==-1){
            front=0;
            printf("Enter the element to be added in the queue: ");
            scanf("%d",&data);
            rear=rear+1;
            queue[rear]=data;
        }
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue is empty");
        return;
    }
    else{
        printf("Element deleted from the queue: %d",queue[front]);
        front=front+1;
    }
    if(front>rear){
        front=rear=1;
    }
}

void display(){
    if(front==-1){
        printf("Queue is empty");
    }
    else{
        printf("Queue elements are:");
        for(int i=front;i<=rear;i++){
            printf(queue[i]);
            printf("\n");
        }
    }
}