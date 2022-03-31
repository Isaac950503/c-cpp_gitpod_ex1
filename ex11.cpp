#include <stdio.h>
#include <iostream>
using namespace std;
/*
從鍵盤輸入你和你朋友的年齡，編成判斷誰的年齡最大，並列印最大者的年齡。
*/

int main()
{
    int a,b;
    
    printf(" please input your age \n");
    scanf("%d",&a);
    printf(" please input your friend age \n");
    scanf("%d",&b);
    if(a> b ){
        printf("  yours age is %d \n",a);
    }else {
        printf(" your friends age is %d \n",b);
    }
        
       
        
    return 0;
}
