#include<stdio.h>

struct Hello
{
    int no;
    int x;
    struct Demo
    {
        int i;
        float f;
    }dobj1,dobj2;
}hobj;

int main()
{
    
    hobj.no = 10;
    hobj.x = 20;

    hobj.dobj1.i = 30;
    hobj.dobj1.f = 40.0;

    hobj.dobj2.i = 50;
    hobj.dobj2.f = 60.0;
    

    printf("%d\n",hobj.no);
    printf("%d\n",hobj.x);

    printf("%d\n",hobj.dobj1.i);
    printf("%f\n",hobj.dobj1.f);

    printf("%d\n",hobj.dobj2.i);
    printf("%f\n",hobj.dobj2.f);





    return 0;
}
    

