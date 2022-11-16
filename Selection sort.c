#include<stdio.h>

int main(){
    int i,j,count,temp,numbers[25];
    printf("Enter the no. of elements: ");
    scanf("%d",&count);
    printf("Enter %d elements: ",count);
    
    for(i=0;i<count;i++){
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            if(numbers[i]>numbers[j]){
                temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
    printf("Sorted Elements by selection sort:\n");
    for(i=0;i<count;i++){
        printf("%d\t",numbers[i]);
    }
}