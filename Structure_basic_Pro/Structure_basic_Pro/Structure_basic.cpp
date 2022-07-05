#define _CRT_SECURE_NO_WARNINGS 1

// 调用头文件
#include <stdio.h>


// 建立函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{

	// 选择结构
	
	// if...else
	int input = 0;
	printf("\n这是一段描述\n");
	printf("这是一个选择疑问句(1/0)\n");
	scanf("%d", &input);
	if (input == 1)
		printf("这是其中一个选择的结果");
	else
		printf("这是另一个选择的结果");

	// 循环结构

	// while
	int line = 0; // 设置循环条件变量
	printf("这是起始语句\n");
	while (line<5) //(条件)
	{
		printf("想要循环操作的句子:%d\n",line);
		line++; // 以让结果超越条件后结束循环
	}
	if (line == 10)
		printf("Test");


	// 函数
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = Add(num1, num2);
	printf("%d\n", sum);

	return 0;
}