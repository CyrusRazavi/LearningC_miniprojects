#include <stdio.h>
#include <stdbool.h>

int main(void){
	int age=17;
	int minAge=18;
	int isAllowed = age > minAge;
	printf("%d",isAllowed);
}
