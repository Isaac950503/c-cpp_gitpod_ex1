#include <stdio.h>

using namespace std;
int add(int x, int y){
    return x+y;
}
int add1(int x, int y){
    return x-y;
}
int add2(int x, int y){
    return x*y;
}
int add3(int x, int y){
    return x/y;
}
int main(){
    int a,b;
    
    printf("please input two numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a+b=%d\n",add(a,b));
    printf("a-b=%d\n",add1(a,b));
    printf("a*b=%d\n",add2(a,b));
    printf("a/b=%d\n",add3(a,b));
    return 0;
}
