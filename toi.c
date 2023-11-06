#include <stdio.h>
void toh(int,char,char,char);
int main(){
	int n;
	printf("ENTER NUMBER OF DISC ON SOURCE TOWER : ");
	scanf("%d",&n);
	toh(n,'A','B','C');
}
void toh(int n, char sour , char aux, char dest){
	static int step;
	if(n == 1){
		printf("\nStep %d:Move disc from %c to %c",++step,sour,dest);
	}
	else{
	toh(n-1,sour,dest,aux);
	toh(1,sour,aux,dest);
	toh(n-1,aux,sour,dest);	
	}
}
