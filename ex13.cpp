#include <iostream>

using namespace std;

int main()
{
    int j,i;
    for(j=1;j<10;j++){
        for(i=1;i<10;i++){
        
        //cout << j <<"* " << i << "= " <<  j*i  << "  ";
        printf(" %2d * %2d = %2d",j,i,j*i);
        }
        cout << endl;
    }
    
    
    cout<<"Hello World";

    return 0;
}