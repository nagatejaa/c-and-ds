#include <stdio.h>
#include <string.h>
int function(){
	char ch;
	char check[100];
	printf("ENTER ANY CHARACTER : ");
        scanf(" %c",&ch);
	if(ch>=65&&ch<=90){
		printf("YOU ENTERED UPPERE CASE ALPHABET\n");
		printf("ASCII VALUE OF THE CHARCTER IS \n: %d",ch);
	}
	else if(ch>=97&&ch<=112){
		printf("YOU ENTERED LOWER CASE ALPHABET\n");
		printf("ASCII VALUE OF THE CHARCTER IS : %d\n",ch);
	}
	else if(ch>= 48 && ch <= 57){
		printf("YOU ENTERED A NUMBER\n");
		printf("ASCII VALUE OF THE CHARCTER IS : %d\n",ch);
	}
	else{
		printf("YOU ENTERED SPECIAL CHARACTER\n");
		printf("ASCII VALUE OF THE CHARCTER IS : %d\n",ch);
	}
	printf("TO RUN AGAIN PRESS Y ELSE N : ");
	scanf("%s",&check);
	if (strcmp(check, "Y") == 0 || strcmp(check, "y") == 0) {
        function();
    }
	else if(strcmp("n",check)==0 || strcmp("N",check)==0){
		printf("THANK YOU!");
    }
    return 0;
}



int main(){
    function();
    return 0 ;
}
