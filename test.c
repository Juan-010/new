#include <stdio.h>

int * vector(int n1, int n2,int n3,int n4){
	static int testi[4];
	testi[0] = n1;
	testi[1] = n2; 
	testi[2] = n3;
	testi[3] = n4; 
	return testi;
}

int main(void){
	int *test;
	test = vector(1,2,3,4);
	
	for(int i = 0; i < 4; i++)
		printf("%d\n", *(test + i));
	return 0;
}
