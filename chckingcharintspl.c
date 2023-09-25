#include <stdio.h>
int function(){
	char ch;
	int a;
	int check;
	printf("ENTER ANY CHARACTER :");
	if(ch>=65&&ch<=90){
		printf("YOU ENTERED UPPERE CASE ALPHABET ");
		printf("ASCII VALUE OF THE CHARCTER IS : %d",ch);
	}
	else if(ch>=97&&ch<=112){
		printf("YOU ENTERED LOWER CASE ALPHABET");
		printf("ASCII VALUE OF THE CHARCTER IS : %d",ch);
	}
	else if(ch>= 48 && ch <= 57){
		printf("YOU ENTERED A NUMBER");
		printf("ASCII VALUE OF THE CHARCTER IS : %d",ch);
	}
	else{
		printf("YOU ENTERED SPECIAL CHARACTER");
		printf("ASCII VALUE OF THE CHARCTER IS : %d",ch);
	}
	printf("TO RUN AGAIN PRESS 1 else 0 ");
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
	
	

