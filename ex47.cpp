#include <stdio.h>
int is_prime( int );
int main(){
	int i,n, number;
	scanf("%d" ,&n);
	for(i = 0; i < n;i++){
	scanf("%d",&number);
	if(is_prime ( number )){
		printf("Y \n");
	}else{
		printf("N \n");
	}
	}
    return 0;
}

int is_prime( int n ){
    int i;
	if(n == 1){
	    printf("N");
	}else{
		for(i = 2; i < n ; i++)
		{
			if(n % i == 0){
			 return 0;	
			}
		}
	}
	return 1;
}

