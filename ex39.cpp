#include <stdio.h>

int main()
{
    int a[10];
    int n,i;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        sum += a[i];
        // sum = sum + a[i]
    }
    printf("\n");
    

    return 0;
}
