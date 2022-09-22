#include <iostream>

using namespace std;

int main()
{
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
        }
    }
    if(b_prime){
        printf("%d b_prime is true",num);
    }
    #if 0
    for(){
        if(){
            
        }
    }
    #endif
    return 0;
}
