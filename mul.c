#include <stdio.h>
int main() {
    int n,f;
    printf("enter the numbers");
    scanf(" %d ",&n);
    for( int i=1;i<=n;i++)
    {
        f=n%i;
        if(f==0)
        printf("%d\n",i);
    }
    return 0;
}
