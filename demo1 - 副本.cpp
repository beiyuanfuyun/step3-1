//2.��n�Ĵ���(�׳�)
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;//����һ��һ������ʱ���ᱨ�������������Ҫ����
//
//	}
//	printf("%d ", ret);
//	return 0;
//}
//3.����1��+2��+3!+...+10!
//int sum1(int a )
//{
//	
//	int c = 0;
//	int d = 1;
//	for (c = 1; c <= a; c++)
//	{
//		d = d * c;
//	}
//	return a;
//}
//int main()
//{
//	int sum = 0;
//	int num1 = 1;
//	int num2 = 2;
//	int num3 = 3;
//	int num4 = 4;
//	int num5 = 5;
//	int num6 = 6;
//	int num7 = 7;
//	int num8 = 8;
//	int num9 = 9;
//	int num10 = 10;
//	sum = sum1(num1) + sum1(num2) + sum1(num3) + sum1(num4) + sum1(num5) + sum1(num6) + sum1(num7) + sum1(num8) + sum1(num9) + sum1(num10);
//	printf("%d\n", sum);
//	return 0;
//}//���ˣ�����֪������
//�ο�����1.
//int main()
//{
//	int n = 0;
//	int b = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (b = 1; b <= n; b++)
//		{
//			
//			ret = ret * b;//���ʱ��retû�г�ʼ����Ӧ������д����
//		}
//		sum = ret + sum;
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int b = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (b = 1; b <= n; b++)
//		{
//
//			ret = ret * b;//���ʱ��retû�г�ʼ����Ӧ������д����
//		}
//		sum = ret + sum;
// //��Ӧ��Ϊret1=1*1
// //ret2=1*1*2
// //ret3=1*1*2*3
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//�Ż�����������ret����ʼ��

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf_s("%d", &a);
//	for (i = 1; i <= a; i ++ )
//	{
//		ret = ret * i;
//		sum = ret + sum;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}