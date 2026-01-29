#include <stdio.h>

void gradeCheck(char x){
	printf("%c",x);
}

int main(void){
	char input;
	printf("what is your grade dude?:");
	scanf("%c",&input);
	gradeCheck(input);
	return 0;
}
