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
    int a,b,i,max,min;
    printf("A=> ");
    scanf("%d", &a);
    printf("B=> ");
    scanf("%d", &b);
    if(a > b){
    max = a;
    min = b;
        
    }else{
    min = a;
    max = b;
    }
    
     
    for(i=min;i<=max;i++){
        if(b_prime_f(i))
        printf("i=%d ",i);
        
        
        
        
    }
     #if 0
        for(a=3;a<=7;a++){
        for(b=3;b<=7-a;b++){
        //cout << j <<"* " << i << "= " <<  j*i  << "  ";
        printf(" %d ",a);
        }
    
        cout << endl;
    }
    #endif
    
    cout<<"Hello World";

    return 0;
}
