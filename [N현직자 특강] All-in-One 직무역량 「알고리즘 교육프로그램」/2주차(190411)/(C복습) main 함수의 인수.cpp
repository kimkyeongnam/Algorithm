#include<stdio.h>

/*
argc: �ü���� �� ���α׷��� �������� �� ���޵Ǵ� �μ��� ����
argv: ���α׷����� ���޵� ���� �μ��� ��. ������ ���ڿ��� �Ѱ�����
*/

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++) //�ɼ��� ������ŭ �ݺ�
	{
		printf("arg(%d) = %s\n", i, argv[i]);
	}
	printf("argc = %d\n", argc); //argc �� ���

	return 0;
}