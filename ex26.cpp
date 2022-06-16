#include <iostream>

using namespace std;

int main()
{
    int a,b;
    //從鍵盤輸入你和你朋友的年齡，編成判斷誰的年齡最大，並列印最大者的年齡。
    printf(" please input a people , b people two friend\n");
    printf(" input a \n");
    scanf("%d",&a);
    printf(" input b \n");
    scanf("%d",&b);
    if( a > b){
        printf(" a is max \n");
    }else{
        printf(" b is max or a == b \n");
    }