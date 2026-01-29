#include <stdio.h>
void changep(int *x){
	*x=20;
}


int main(void){
	int a=5;
	changep(&a);
	printf("%d",a);
	return 0;
}
