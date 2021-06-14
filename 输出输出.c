//#include <stdio.h>
//#define INT 10000000
//main(void)
//{
//	int n = 0, a = 0;
//	int x = 0;
//	//输入0退出
//	int num;
//	while (scanf_s("%d", &n) == 1 && n)           //判断返回值是否为1以及n是否为0,0为结束标致.
//	{
//		float s=0;
//		int max = -INT, min = INT;
//		for (int i = 0; i < n; i++)
//		{
//			scanf_s("%d", &x);
//			s += x;
//			if (x > max)max = x;
//			if (x < min)min = x;
//		}
//		s /= n;
//		if (a)printf("\n");    //除开第一行其余每一行都输出一个空行
//		printf("case %d: min:%d  max:%d  avserage:%.3lf\n", ++a, min, max, s);
//			
//	}
//}

//扩展
#include <stdio.h>
main(void)
{
	int x=0;
	int j = 0;
	int a = 0,b=0,c=0,kase=0;
	while (scanf_s("%d%d%d", &a, &b, &c) == 3)
	{
		if (a >= 3 || b >= 5 || c >= 7)
			break;
		x = kase;
		for (j = 10; j <= 100; j++)
		{
			if ((j % 3 == a) && (j % 5 == b) && (j % 7 == c))
			{
				printf("case %d : %d\n", ++kase, j);
			}
		}
		if (x == kase && j > 100)printf("case %d:NO answer!\n", ++kase);

	}
	
}