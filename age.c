#include <stdio.h>
#include <stdbool.h>

int main(void){
	int age=17,minAge=18,isAllowed;
	if(age < minAge){
		isAllowed=0;
		printf("he is not allowed");
		return 0;
}
	if(age > minAge){
		isAllowed=1;
		printf("he is allowed");
		return 0;
}
}
	
