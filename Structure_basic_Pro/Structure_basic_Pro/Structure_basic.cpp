#define _CRT_SECURE_NO_WARNINGS 1

// ����ͷ�ļ�
#include <stdio.h>


// ��������
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{

	// ѡ��ṹ
	
	// if...else
	int input = 0;
	printf("\n����һ������\n");
	printf("����һ��ѡ�����ʾ�(1/0)\n");
	scanf("%d", &input);
	if (input == 1)
		printf("��������һ��ѡ��Ľ��");
	else
		printf("������һ��ѡ��Ľ��");

	// ѭ���ṹ

	// while
	int line = 0; // ����ѭ����������
	printf("������ʼ���\n");
	while (line<5) //(����)
	{
		printf("��Ҫѭ�������ľ���:%d\n",line);
		line++; // ���ý����Խ���������ѭ��
	}
	if (line == 10)
		printf("Test");


	// ����
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = Add(num1, num2);
	printf("%d\n", sum);

	return 0;
}