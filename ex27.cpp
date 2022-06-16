#include <iostream>

using namespace std;

int main()
{
    int a,b,sum;
    //鍵盤輸入，輸入 2 個數，再輸入 兩數之和，如果正確，顯示“right”，否則顯示“error”
    printf(" please input a  , b  sum\n");
    printf(" input a \n");
    scanf("%d",&a);
    printf(" input b \n");
    scanf("%d",&b);
    printf(" input sum \n");
    scanf("%d",&sum);
    if( (a + b) ==sum){
        printf(" right \n");
    }else{
        printf(" error \n");
    }
    
    cout<<"Hello World";

    return 0;
}