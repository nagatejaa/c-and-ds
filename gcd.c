#include <stdio.h>
int main(){
	int a, b, result;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	result = gcd(a,b);
	printf("Result = %d ", result);
	return 0 ;
}
int gcd(int x, int y){
	int temp , rem = 0;
	if(y>x){
		temp = x;
		   x = y;
		   y = temp; 
	}
	while(y != 0){
		rem = x % y;
		x = y;
		y = rem;
	}
	return x;
}
