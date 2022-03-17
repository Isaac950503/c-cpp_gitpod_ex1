#include <stdio.h>

int main() {
    int a, b, product;
    a = 20;
    b = 7;

 /*
x + y
x - y
x * y
x / y
x % y
++x
x++
--x
x--

x = 16 
x >> 1
x >> 2
x << 1
 */
    // Calculating product
    product = a % b;

 
    printf("a mod b = %d \n", product);

    product = a + b;
   
    printf("a + b = %d \n", product);

    product = a - b;

 
    printf("a - b= %d \n", product);
     
     product = a * b;
    
    printf("a * b = %d \n", product);

     product = a / b;

 
    printf("a / b= %d \n", product);
    return 0;
}