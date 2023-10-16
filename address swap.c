#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	printf("\nBefore Swaping : %d %d ",&a,&b);
	swap(&a,&b);
	return 0;
}
int swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("\nAfter Swaping  : %d %d",x,y);
}
