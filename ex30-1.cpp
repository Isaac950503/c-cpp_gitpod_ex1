#include <iostream>
using namespace std;

int b_prime_f(int x){
    int i;
    int b_prime = true;
    printf("in f num = %d \n",x);
    for(i=2;i <= x/2 ;i++){
        if( x % i ==0){
          //printf("%d not prime ",x);
          b_prime = false;
          break;
        }
    }
    return b_prime;
}

int main()
{
    int i, num;
    int b_prime = true;
    printf("please input :");
    scanf("%d",&num);
    
    printf(" is prime : %d\n",b_prime_f(num));
    
    
    
    
    
    return 0;
}
