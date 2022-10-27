//22. 主函式輸入 輸入 a ，其中自定義一函式，時間換算，輸出  b 小時 c 分 

int hr_min(int a,int b,int c){
    return b*c;
}
int main()
{
    int a,b;
    printf(" please input b 小時:");
    scanf("%d",&a);
    printf(" please input c 分");
    scanf("%d",&b);
    printf("hr min to min = %d\n" ,hr_min(a,b));
   
    
return 0;
}
