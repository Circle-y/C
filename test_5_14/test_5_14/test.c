#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//数组初始化0
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

//void exchange(int arr1[], int arr2[], int sz1, int sz2)
//{
//	int i = 0;
//	for (i = 0; i <= sz1; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//void Print(int arr1[], int arr2[], int sz1, int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//int main()
//
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	exchange(arr1, arr2, sz1, sz2);
//	Print(arr1, arr2, sz1, sz2);
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x", a);
//	return 0;
//}

//int i;//全局变量不初始化 默认为0
//int main()                        
//{
//	i--;
//	if (i > sizeof(i))
////sizeof() 计算变量或类型时所占空间的大小 无符号数      
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i=0;i<32;i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	//n = n&(n-1) 可以让N的最右侧1消失
//	//13
//	//1101 n
//	//1100 n-1
//	//1100 n
//	//1011 n-1
//	//1000 n
//	//0111 n-1
//	//0000 n
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//函数求a的二进制（补码）表示中的1的个数
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//}
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111

//int BitCount5(unsigned int n)
//{
//    unsigned int tmp = n - ((n >> 1) & 033333333333) - ((n >> 2) & 011111111111);
//    return ((tmp + (tmp >> 3)) & 030707070707) % 63;
//}
//int main()
//{
//    int n = -1;
//    int count = BitCount5(n);
//    printf("%d", count);
//    return 0;
//}

//汉明重量
//1.移位+计数
//int BitCount(unsigned int n)
//{
//    unsigned int c = 0; // 计数器
//    while (n > 0)
//    {
//        if ((n & 1) == 1) // 当前位是1
//            ++c; // 计数器加1
//        n >>= 1; // 移位
//    }
//    return c;
//}
//
//int count_diff_bit(int a, int b)
//{
//	int n = a ^ b;
//	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
//	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
//	n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
//	n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
//	n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);
//	return n;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//按位异或
//	int count  = count_diff_bit(a,b);
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a,b, sum = 0;
//	scanf("%d%d", &a, &b);
//	for (a ^= b; a; a &= (a - 1), sum++);
//	printf("%d\n", a);
//	return 0;
//}
//
//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

struct stu
{
	
};

int main()
{

	return 0;
}