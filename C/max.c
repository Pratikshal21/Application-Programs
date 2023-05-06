#include<stdio.h>

int main()
{
    int No1,No2;

    printf("Enter two numbers\n");
    scanf("%d %d",&No1, &No2); 


    if(No1>No2)
    {
        printf("%d is Maximum number \n",No1);
    }
    else 
    {
        printf("%d is Maximum number \n",No2);
    }

    return 0;
}