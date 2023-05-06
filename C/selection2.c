#include<stdio.h>

int main()
{
    int std=0;

    printf("Enter your standard:\n");
    scanf("%d",&std);

    switch(std)
    {
        case 1:
        printf("your exam is at 1 PM\n");
        break;

        case 2:
        printf("your exam is at 2 PM\n");
        break;

        case 3:
        printf("your exam is at 3 PM\n");
        break;

        case 4:
        printf("your exam is at 4 PM\n");
        break;

        default:
        printf("invalid standard \n");
        return 0;
    

    }
}