#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];   //static memory alllocation
    
    int size = 0;
    int *ptr =NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);
    
    //step1 :allocate the memory
    ptr = (int *)malloc(sizeof(int) *size);
    
    //sep2 :use the memory 

    //step3 :Dellocate the memory
    free(ptr);

    return 0;
}