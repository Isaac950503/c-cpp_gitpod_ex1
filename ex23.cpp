#include <iostream>
#include <stdio.h>
//輸入一個圓半徑（r）當r>＝0時，計算並輸出圓的面積和周長，否則，輸出提示資訊。
using namespace std;

int main()
{
  float r,b;
  scanf("%f",&r);
  if(r>=0){    
     
     printf("r*r*3.14 = %f",r*r*3.14);
      
  }else{
      printf("r>=0");    
  }
}