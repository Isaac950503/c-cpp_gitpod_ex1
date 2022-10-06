#include <iostream>

using namespace std;

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
