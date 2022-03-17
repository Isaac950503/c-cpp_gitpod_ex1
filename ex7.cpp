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

  0      1       2      3     4    5    6     7     8    9      10      11    12     13    14   15        16
  0      1       10     11   100  101  110    111  1000  1001    1010    1011  1100   1101  1110 1111  0001 0000

x = 16 
x >> 1
x >> 2
x << 1
 */
    // Calculating product
    printf("a = %d \n", a);
    a++;

 
    printf("a++ = %d \n", a);

    a =  a++;

 
    printf("a++ = %d \n", a);

    a = a--;
   
    printf("a-- = %d \n", -a);

    a--;

  a=16;
   printf("a  >> 1 = %d \n", a >> 1);

   a= a >> 1;
   printf("a  = %d \n", a);

   printf("a  >> 2 = %d \n", a >> 2);
  



 /*
    printf("a = %d \n", -a);
     
     product = a - b;
    
    printf("a - b = %d \n", product);
    a++    ==>  a = a+ 1;
    a--    ==>  a = a - 1
*/
     
    return 0;
}