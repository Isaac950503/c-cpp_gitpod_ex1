#include <iostream>
using namespace std;

int b_prime_f(int x){
#if 0
    int i, num;
    int b_prime = true;
    printf("please input :");
    scanf("%d",&num);
    
    printf(" number + 10 = %d \n", num + 10);
    for(i=2;i < num/2 ;i++){
        if( num % i ==0){
          printf("%d not prime ",num);
          b_prime = false;
          break;
#endif 
    return 1;
}

int main()
{
    int i, num;
    int b_prime = true;
    printf("please input :");
    scanf("%d",&num);
    
    printf(" is prime : %d\n",b_prime_f(num));
    
    
    
    #if 0
    printf(" number + 10 = %d \n", num + 10);
    for(i=2;i < num/2 ;i++){
        if( num % i ==0){
          printf("%d not prime ",num);
          b_prime = false;
          break;
        }
    }
    if(b_prime){
        printf("%d ",num);
    }
    #endif 
    
    return 0;
}
