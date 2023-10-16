#include <stdio.h>
float avg(int[],int);
int main(){
	int length,i;
	float r;
	printf("How many subjects do you have : ");
	scanf("%d",&length);
	int arr[length];
	for(i = 0 ; i < length ; i ++){
		printf("Enter marks : ");
		scanf("%d",&arr[i]);
	}
	r = avg(arr,length);
	printf("\nThe avg of %d subjects is %f.",length,r);
	return 0;
}

float avg(int marks[],int x){
	int i,sum = 0;
	for(i = 0; i < x ; i ++){
		sum += marks[i];
	}
	printf("\n%d",sum);
	return (float)sum/x;
}
