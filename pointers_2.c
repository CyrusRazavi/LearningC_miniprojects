#include <stdio.h>

int main(int argc, char* argv[]){
	int data=1;
	int *p1=&data;
	int *p2=&data;
	*p1=20;
	printf("%d",*p2);
	return 0;
}
