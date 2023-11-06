#include <stdio.h>
int main(){
	int a , b , result;
	printf("Enter two numbers : ");
	scanf("%d %d",&a, &b);
	result = gcd(a,b);
	printf("Result : %d", result);
	return 0;
}
int gcd(int x, int y){
	if(y == 0){
		return x;
	}
	else{
		return gcd(y , x%y);
	}
}
