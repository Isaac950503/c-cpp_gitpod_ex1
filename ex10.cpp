#include <stdio.h>
#include <iostream>
using namespace std;
/*
從鍵盤輸入兩個數，求出其最大值s
*/

int main()
{
    int a,b;
    
    printf(" please input a number \n");
    scanf("%d",&a);
    printf(" please input a number \n");
    scanf("%d",&b);
    if(a> b ){
        printf("  A max , great \n");
    }else {
        printf(" B max  \n");
    }
        
       
        
    return 0;
}