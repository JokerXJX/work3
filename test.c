#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d%d", &weight, &high);
//	float BMI = weight / ((double)high*high/10000);
//	printf("%.2f ",BMI );
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	float circumference = a + b + c;
//	float p = (a + b + c) / 2.0;//半周长
//	float area = sqrt(p * (p - a) * (p - b) * (p - c));//海伦公式
//	printf("circumference=%.2f area=%.2f\n", circumference, area);
//	return 0;
//}

//#define PI 3.14
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	float v = (4.0*(PI * a * a * a)) /3;
//	printf("%.3f", v);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("score1=%d score2=%d score3=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int score[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	printf("score1=%d score2=%d score3=%d\n", score[0], score[1], score[2]);
//	return 0;
//}---改良

//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int tmp = i;
//		int j = 10;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (tmp % j) * (tmp / j);
//		}
//	   if (sum == i)
//	   {
//		printf("%d ", i);
//	   }
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = a + b;
//	if (a + b >= 100)
//	{
//		sum %= 100;
//		printf("%d\n", sum);
//	}
//	else
//	{
//		printf("%d\n", sum);
//	}
//	return 0;
//}

