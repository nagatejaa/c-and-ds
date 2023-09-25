#include <stdio.h>
int function(){
	char ch;
	int check;
	printf("ENTER ANY CHARACTER :");
        scanf("%c",&ch);
	if(ch>=65&&ch<=90){
		printf("YOU ENTERED UPPERE CASE ALPHABET \n");
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
	printf("\nTO RUN AGAIN PRESS 1 else 0 ");
	scanf("%d",&check);
	if(check==1){
		function();
	}
	else if(check == 0){
		printf("THANK YOU!");
    }
    return 0;
}
    int main(){
        function();
    	return 0 ;
	}
	
	
