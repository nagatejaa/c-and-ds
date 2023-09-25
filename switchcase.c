#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1,num2;
	int ch;
	float r;
	printf("********MENU********\n1)ADDITION\n2)SUBRACTION\n3)MULTIPLICATION\n4)DIVISION\n5)EXIT\nSELECT AN NUMBER TO PERFORM THE RESPECTIVE OPPERATION\n");
	scanf("%d",&ch);
	if(ch>=1&&ch<=4){
	printf("ENTER TWO NUMBERS : ");
	scanf("%d %d",&num1,&num2);
	switch(ch){
		case 1 :
			r = num1+num2;
			break;
		case 2 :
			r = num1-num2;
			break;
		case 3 :
			r = num1 *num2;
			break;
		case 4 :
			r = (float)num1/num2;
			break;
		case 5 :
			exit(0);
		default:
			printf("ENTER A VALID OPERATOR!!");	    
	}
	printf("THE RESULT IS : %f",r);
}
	return 0;
}
