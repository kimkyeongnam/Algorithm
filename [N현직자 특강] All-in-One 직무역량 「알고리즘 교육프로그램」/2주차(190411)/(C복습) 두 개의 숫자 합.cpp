#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
argc: �ü���� �� ���α׷��� �������� �� ���޵Ǵ� �μ��� ����
argv: ���α׷����� ���޵� ���� �μ��� ��. ������ ���ڿ��� �Ѱ�����
*/

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int sum = num1 + num2;
	printf("Sum of %d and %d is %d", num1, num2, sum);
	return 0;
}