#include <iostream>
#include <stdio.h>
//輸入年分，輸出閏年判斷
using namespace std;

int main()
{
  int r;
  scanf("%d",&r);
  if(r%4==0){    
     
     printf("r*r*3.14 = %d",r*r*3.14);
      
  }else{
      printf("r/4==0");    
  }
}