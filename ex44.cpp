#include <iostream>
void display_1(int* age,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",age[i]);
        age[i] = age[i] + 17;
    }  
    printf("\n%p\n",age);
}
void display(int age1, int age2){
    printf("%d %p\n", age1,&age1);
    printf("%d %p\n", age2,&age2);
}

int main()
{
    int i,n=4,ageArray[] = {2, 8, 4, 12};
    
    // Passing second and third elements to
    // display()
    
    display(30, ageArray[2]);
    
    printf("%p\n",&ageArray[1]);
    printf("%p\n",&ageArray[2]);
    #if 1
    display_1(ageArray, 4);
    printf("%p\n",ageArray);
    #endif 
    
    for(i=0;i<n;i++){
        printf("%d ",ageArray[i]);
    }  
    
    return 0;
}
