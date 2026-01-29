#include <stdio.h>
#include <stdbool.h>
int main(void){
	int age;
	int allowAge=18;
	bool agebool=false;
	scanf("%d",&age);
	if(age >= allowAge){
		agebool=true;	
	}else if(age <allowAge){
		agebool=false;
	}
	printf("the state of bool is %d",agebool);
	return 0;
}
