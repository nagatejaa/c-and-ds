#include <stdio.h>
int main(int argc,char *argv[]){
	int i;
	if(argc<2){
		printf("Enter enough arguments");
	}
	else{
		printf("\nargc : %d",argc);
		for(i = 0 ; i < argc;i++){
			printf("\nargv[%d]:%s",i,argv[i]);
		}
	}
	return 0;
}
