#include <iostream>
using namespace std;
/*
主函式輸入 輸入 a ，其中自定義一函式，時間換算，輸出  b 小時 c 分
*/
int hr_min(int a,int b, int c){
    b=a / 60;
    c=a % 60;
    printf("hr min to min = %d %d\n" ,b,c);
    return 1;
}
int main()
{
    int a,b,c;
    printf(" please input a min");
    scanf("%d",&a);
    //printf(" please input b min");
    //scanf("%d",&b);
    hr_min(a,b,c);
    //printf("hr min to min = %d %d\n" ,b,c);
   
    
return 0;
}