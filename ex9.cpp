#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a,i;
    
    printf(" please input a number \n");
    scanf("%d",&a);
    if(a> 86 ){
        printf("  A grade , great \n");
    }else if(a <=86 && a >70){
        printf(" B grade  \n");
    }else if(a <=86 && a >70){
        printf(" c grade , great \n");
    }
        
        printf(" fail , is D or E  \n");
        
    return 0;
}