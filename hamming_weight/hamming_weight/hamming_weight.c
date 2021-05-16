#define _CRT_SECURE_NO_WARNINGS 1
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

//int BitCount1(unsigned int n)
//{
//    unsigned int c = 0; // 计数器
//    for (c = 0; n; n >>= 1) // 循环移位
//        c += n & 1; // 如果当前位是1，则计数器加1
//    return c;
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
// 
// 2.快速清除法
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
//
// 4.动态建表

//int BitCount3(unsigned int n)
//{
//    // 建表
//    unsigned char BitsSetTable256[256] = { 0 };
//
//    // 初始化表 
//    for (int i = 0; i < 256; i++)
//    {
//        BitsSetTable256[i] = (i & 1) + BitsSetTable256[i / 2];
//    }
//
//    unsigned int c = 0;
//
//    // 查表
//    unsigned char* p = (unsigned char*)&n;
//
//    c = BitsSetTable256[p[0]] +
//        BitsSetTable256[p[1]] +
//        BitsSetTable256[p[2]] +
//        BitsSetTable256[p[3]];
//
//    return c;
//}
// 
// 
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
//5.平行算法
//int BitCount4(unsigned int n)
//{
//    n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
//    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
//    n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
//    n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
//    n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);
//
//    return n;
//}

//0101010101010101 
//0011001100110011
//1111111100000000
//1111111111111111