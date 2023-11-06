#include <stdio.h>
void toh(int,int,char,char,char);
void


 main(int argc, char *argv[]){
	int n,d = 1;
	if(argc != 2){
	printf("ENTER ENOUGH ARGUMENTS!!");}
	else{
	n = atoi(argv[1]);
	toh(d,n,'A','B','C');
	}
}
void toh(int d,int n, char sour , char aux, char dest){
	static int step;
	if(n == 1){
		printf("\nStep %d:Move disc %d from %c to %c",++step,d,sour,dest);
	}
	else{
	toh(d+1,n-1,sour,dest,aux);
	toh(d,1,sour,aux,dest);
	toh(d+1,n-1,aux,sour,dest);	
	}
}
