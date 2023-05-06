#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=NULL;
    
    //step1 :allocate the memory
    ptr = (int *)malloc(sizeof(int)* 5);  //20 bytes
    
    //sep2 :use the memory 

    ptr= (int*)realloc(ptr,sizeof(int*7); //28 bytes

    //step3 :Dellocate the memory
    free(ptr);

    return 0;
}