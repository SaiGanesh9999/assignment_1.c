#include<stdio.h>
int main(){
    int f0=0,f1=1,f2,n;
    printf("enter a number");
    
    scanf("%d",&n);
    for(int i=0;f2<=n;i++){
        f2=f1+f0;
        if(n==f2){
            printf("YES");
            return 0;
        }
        f0=f1;
        f1=f2;
    }
    printf("NO");
    return 0;
}
