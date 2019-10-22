#include <stdio.h>
int main() {
    int n,a,i;
    printf("enter the numbers");
    scanf(" %d %d",&n,&a);
    for( i=1;i<=n;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}
