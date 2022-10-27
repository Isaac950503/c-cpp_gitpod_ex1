#include <iostream>

using namespace std;
//21. 主函式輸入 輸入 a 小時 b 分， 其中自定義一函式，時間換算，輸出  x 分

int hr_min(int a,int b){
    return a*60+b;
}
int main()
{
    int a,b;
    printf(" please input a 小時:");
    scanf("%d",&a);
    printf(" please input b 分");
    scanf("%d",&b);
    printf("hr min to min = %d\n" ,hr_min(a,b));
   
    
return 0;
}
