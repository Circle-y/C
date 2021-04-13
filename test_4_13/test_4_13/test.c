#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	float a = 5 / 2.0;//商2余1 //% 取模必须整数
//	printf("%f", a);
//	return 0;
//
//}
//
//int main()
//
//{
//	int a = 33;
//	int b = a >> 1;
//	printf("%d", b);
//}
//
//int main()
//{
//	//& - 按二进制位与
//	//int a = 12;
//	//int b = 20;
//	//int c = a & b;
//	//printf("%d", c);
//	//| - 按位或
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//printf("%d", c);
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}
//
//int main()
//
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//
//}
//
//int main()
//
//{
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//while (num)       //补码中二进制数有几个1
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//
//    //32bit
//	int i = 0;
//	for (i = 0; i < 32; i++) //利用按位与和移位操作符
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//第三种最优方法
//int main()
//
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//
//	}
//	printf("%d\n", count);
//	return 0;
//
//}

