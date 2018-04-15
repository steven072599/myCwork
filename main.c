#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void func1(int , int );
void func1(void);
int main(int argc, char *argv[]) {
	printf("%.1f",func1(1.1,1.1));
	return 0;
}
int func1(float x,float y){
	float value;
	value = x + y;
	return value;
}
