#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,*ptr,x=0;
    printf("enter n value");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d",(ptr+i));
        x+=*(ptr+i);
    }
    printf("total is %d",x);
    

    return 0;
}
