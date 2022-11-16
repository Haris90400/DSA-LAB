#include<stdio.h>

int array[100];
int top = -1;
int n;
int data;

void Push();
void Pop();
void show();

int main(){
    int choice;
    printf("Enter the size of stack[MAX=100]: ");
    scanf("%d",&n);
    while (1){
        printf("\n1.Push the elements\n2.Pop the elements\n3.Display the elements\n4.Exit");
        printf("\nEnter a choice to be executed: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:{
                Push();
                break;
            }
            case 2:{
                Pop();
                break;
            }
            case 3:{
                show();
                break;
            }
            case 4:{
                printf("Exited");
                break;
            }
            break;
            default : {
                printf("Enter a valid choice!");
            }
        }
}
while(choice!=4)
return 0;
}

void Push(){
    if(top>=n-1){
        printf("Connot insert elements as stack is full!");
    }
    else{
        printf("Enter a value to be puhed: ");
        scanf("%d",&data);
        top++;
        array[top]=data;
    }
}

void Pop(){
    if (top<=-1){
        printf("Cannot remove data as stack is empty!");
    }
    else{
        printf("The popped element is %d",array[top]);
        top--;
    }
    
}

void show(){
    if(top==-1){
        printf("Cannot display stack as it is empty!");
    }
    else{
        printf("Stack elements:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",array[i]);
        }
    }
}


