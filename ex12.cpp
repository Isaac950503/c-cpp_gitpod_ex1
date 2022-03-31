#include <stdio.h>
#include <iostream>
using namespace std;
/*
鍵盤輸入，輸入 2 個數，再輸入 兩數之和，如果正確，顯示“right”，否則顯示“error”
*/

int main()
{
    int a,b,c;
    
    printf(" please input a \n");
    scanf("%d",&a);
    printf(" please input b \n");
    scanf("%d",&b);
    printf(" please input a+b \n");
    scanf("%d",&c);
    if((a+b)==c ){
        
        printf("  right  \n");
    }else {
        printf(" error  \n");
    }
       
        
    return 0;
}