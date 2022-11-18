#include<stdio.h>

int main(void){
    int count,i,j,temp;
    int numbers[64];
    printf("Enter the number of elements: ");
    scanf("%d",&count);
    printf("Enter %d elements: ",count);
    for(i=0;i<count;i++){
        scanf("%d",&numbers[i]);
    }

    for(i=1;i<count;i++){
        j=i;
        while(j >0 && numbers[j-1] > numbers[j]){
            temp=numbers[j];
            numbers[j]=numbers[j-1];
            numbers[j-1] = temp;
            j--;
        }
        printf("Sorted list bt insertion sorting:\n ");
        for(i=0;i<count;i++){
            printf("%d\t",numbers[i]);
        }
        return 0;
    }
}
