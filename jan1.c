#include <stdio.h>
float test=20;
void flopper(float x) {
	float math=5.6,result;
	result=x-math;
	printf("result is %f",result);
}	
int main(void){
	flopper(test);
	return 0;
}
