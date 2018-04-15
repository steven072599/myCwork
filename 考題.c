#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int english;
	int math;
	int chinese;
	int sum;
	float age;
	printf("輸入英文成績=>");
	scanf("%d",&english);
	printf("輸入數學成績=>");
	scanf("%d",&math);
	printf("輸入國文成績=>");
	scanf("%d",&chinese);
	sum=english+math+chinese;
	printf("成績總分=%d\n",sum);
	age=sum/3;
	printf("成績平均=%.1f\n",age);
	return 0;
}
