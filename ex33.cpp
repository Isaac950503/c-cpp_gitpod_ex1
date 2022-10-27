#include <iostream>

using namespace std;
//20. 主函式輸入 高與寬，編寫程式，其中自定義一函式，算矩形面積
int hr_min(int a,int b){
    return a*b;
}
int main()
{
    int a,b;
    printf(" please input a width:");
    scanf("%d",&a);
    printf(" please input b high");
    scanf("%d",&b);
    printf("hr min to min = %d\n" ,hr_min(a,b));
   
    
return 0;
}
