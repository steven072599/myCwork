#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int english;
	int math;
	int chinese;
	int sum;
	float age;
	printf("��J�^�妨�Z=>");
	scanf("%d",&english);
	printf("��J�ƾǦ��Z=>");
	scanf("%d",&math);
	printf("��J��妨�Z=>");
	scanf("%d",&chinese);
	sum=english+math+chinese;
	printf("���Z�`��=%d\n",sum);
	age=sum/3;
	printf("���Z����=%.1f\n",age);
	return 0;
}
