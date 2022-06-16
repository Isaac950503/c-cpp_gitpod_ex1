#include <iostream>

using namespace std;

int main()
{
    int a,b;
    printf(" please input a , b two numbers\n");
    printf(" input a \n");
    scanf("%d",&a);
    printf(" input b \n");
    scanf("%d",&b);
    if( a > b){
        printf(" a is max \n");
    }else{
        printf(" b is max or a == b \n");
    }