//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>


//��֧��ѭ��
//1��.˳��ṹ  2��.ѡ��ṹ  3��.ѭ���ṹ
//ѡ��ṹ-��֧���-if  switch
//ѭ���ṹ-ѭ�����-while ,for ,do while
// 
// 
// 3.��1.while
//int main()
//{
//	int a = 1;
//	while (a<=10)//1
//	{
//		
//		if (a == 5)//2
//			continue;//break��������ѭ�����������Ϊcontinue�����������ߣ�
//		//��������ѭ�����Ի���д������
//		printf("%d\n", a);//3
//	 a++;//4
//	}
//	return 0;
//}




//int main()
//{
//int a = 0;
//while (a < 10)
//{
//	a++;
//	if (a == 5)
//		continue;//��ֹѭ���б���ѭ���ĺ���Ĵ��룬
//	//ֱ����ת������ѭ�����жϲ��֣��жϱ���ѭ��Ҫ��Ҫִ����һ��ѭ��
//	
//	printf("%d\n", a);
//	
//}
//return 0;
//}


//int main()
//{
//	int a = 0;
//	char b[20] = "helloworld";
//	while (a < 10)
//	{
//		a++;
//		if (a == 4)
//			break;//breakֻ���鵱ǰ���ڵ������ѭ��
//		printf("%d\n", a);
//		
//	}
//	printf("%s\n", b);
//
//}
//3.)1.-��������
//����1.getchar()-��ȡ�ַ�,putchar-����ַ�



//
//int main()
//{
//	int ch = 0;
//	//ctrl+z������ֹ����
//	//EOF-end of file->-1
//	while ((ch = getchar()) !=EOF )//EODF����-1��ͷ�ļ��ĺ���
//	{
//		if (ch < '0' || ch>'9')//||����
//			continue;
//		putchar(ch);
//	 }
//	return 0;
	
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("���������룺");
	//scanf("%s", password);//�������뻺��������\n���������ջ�������
	////�����µ�һ��getchar()��ȡһ���ַ��ߣ���ջ�����//�������������1234 ABCD�������ֻ�������
	////scanf��������߿ո�ǰ���������һ��getchar����߿ո񣬵ڶ���getchar�����һ��A���һ��жϳ�N����
	////����Ҫһֱ��ȡֱ����ȡ\nΪֹ������ѭ��
	//getchar();
	//int ch = 0;
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("��ȷ����Y/N����");
	//  ret = getchar();
	//  if ('Y' == ret)
	//  {
	//	printf("ȷ�ϳɹ�\n");
	//  }
	//  else
	//  {
	//	printf("����\n");//����ֱ��ѡ�񡰷�������
	//	//��Ϊ����һ���س��൱��\n����ַ�����ascllֵΪ10����getchar()��������������else
	//  }
	//printf("%d\n", '\n');//Ϊ10
	//
	//return 0;
	//
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
//}



//3.)2.ifѭ��
//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		i++;//����
//	}//����������Ϸ�ɢ��Ϊ����������ifѭ������
//	return 0;
//}
//for���﷨if(���ʽ1;���ʽ2;���ʽ3)�ֱ��Ӧ����ʼ�����жϣ�������
//int main()
//{
//	int a = 0;
//	for (a = 1/*1*/; a < 10/*2*/; a++/*4*/)//�õ����
//	{
//		if (a == 5)
//			continue;//��whileѭ��һ��,��û�г�����ѭ����
//		printf("%d   ", a);//��ѭ����a<10��ִ��printf("%d,a),��ִ��a++;/*3*/
//	}
//	return 0;
//}



//int main()
//{ 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//��һ�����ﲻ������ѭ�����ڸı�ѭ���ı�������ֹfor��ѭ��
//			printf("haha\n");
//		printf("hehe\n");
//
//	}
//}



//����������forѭ������ǰ�պ�д��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//ǰ�պ�д������i=0;i<=9;i++����Ϊǰ�պ�յ�д��
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//������forѭ���ı���
//int main()
//{
//	for (;;)//forѭ���ĳ�ʼ�����������ж� ������ʡ��
//		//����forѭ�����жϲ��֣������ʡ�ԣ����ж���������Ϊ��,���鲻Ҫ���ʡ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}//j��ʮ�󣬷���i��������û������Ҳ����˵��Ȼ��10�����Ҫ100��hehe����һ���ڶ���if�����޸�Ϊ(i=0;i<10;i++��
//	}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y>5; ++x, y++)
//	{
//		printf("hehe\n");//��ӡ��2���Ǻ�
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; k++, i++)//���ﲻ���ж���䣬��ֵ���k=0Ϊ�٣��򲻽�������ѭ��
//		k++;
//	return 0;
//}


//3.)3.   do while����ѭ��
//do�����﷨//����ִ��һ��
//    do
//       ѭ����䣻
//    whiel(���ʽ)��

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			//break;//���Ƶ�ǰ����
//			continue;//��ѭ����continue����������ѭ������Ĵ���{}����
//		            //�����жϲ���while���֣�������do��䣬�����ѭ��
//	printf("%d\n", i);
//	i++;
//	}
//	while (i <= 10);//����ʱִ��do��䣬�������ǲ�ִ��do���
//	return 0;
//}

//��ϰ1.
//int main()
//{
//	int i = 2;
//	while (i != 1)
//	{
//		if (i == 64)
//		{
//			return 0;
//		}
//		i *= 2;
//		printf("%d\n", i);
//		continue;
//	}
//	return 0;
//}
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

#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int ret = 1;
	int sum = 0;
	scanf_s("%d", &a);
	for (i = 1; i <= a; i ++ )
	{
		ret = ret * i;
		sum = ret + sum;
	}
	
	printf("sum=%d\n", sum);
	return 0;
}

 //2).2.switch��䣬ר��ʵ�ֶ��֧�ṹ 
//int main() 
//{ 
//	int a = 0;
//	scanf("%d", &a);
//	switch(a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}
//3.switch������Ƕ��ʹ�õ�
  
  
 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //ע��swwitch����ֻ�������α��ʽ
//	{
//	case 1://��������Ҫ���α��ʽ���������κ���ʽ��1.0���У�1+0���ԣ��һ���Ҫ������
//	//������int a=0;case n://���ʱ��n���ڱ���
//		printf("����1\n");//����break����return 0;�Ϳ�������������飬��Ȼ�ͻή����Ҳ��ִ��
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//    }
//}
 
 
 
 
// 2).1.if else-if elseѡ����䣬else����ʡ��

// ps:�ɶ��ԣ��Ƚ�������������Ŀɶ���
// ����1.if(condition){
// return x;
// }
// retrun y;
// ����2.if (condition)
// {
//     return x;
// }
// else
// {retrun y;
// }
// �����������ȷ����ͬ�����ڶ����Ŀɶ��Ը���
// ����3.
//int main()
//{
//    int num = 2;
//    if (num = 5)
//    {
//        printf("hehe\n");
//    }//��������Ǵ���ĵģ����ǿ����������������׷���num==5�Ĵ�����Ϊnum=5Ϊ��ֵ�����ܶ�
//    //������д���Ϳ��Խ�����⣬����д��5==num)���������׵����ҵ���ʱ�򻹻ᱨ��
//    //��Ϊ����5�����������num�����ǲ��е�
//}
// 
// 
// 
//����4/
//int main()
//{
//    int a = 10;
//    if (5 == a)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
// 
// 
// int main()
//{   int a=0;
//    int b=1;
//    if (a == 1)
//    {
//        if (b == 1)
//            printf("hehe\n");
//    }
//    else//���������༭���Ὣ���else������������δƥ��ifƥ�䣬���Իᱨ�������ģ�
//       printf("haha\n");
// return 0;
// 
// } 


//��ϰ��1.�ж�һ�����Ƿ�Ϊ����2.���1-100֮�������
//#include<string.h>
//��ϰ1.
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//�ٴ�ע�����ﲻҪ���з���
//	
//	if (1 == a % 2)
//	{
//		printf("%dΪ����\n", a);
//	}
//	else
//		printf("%dΪż��\n", a);
//}
 

//��ϰ2
//int main()
//{
//	   int a = 1;
//	   while (a <= 100)
//	   {
//		   if (a % 2 == 1 && a <= 100)
//			   printf("%dΪ����\n", a);
//		   else
//			   ;// printf(" % dΪż��\n", a);
//		   
//		a++;
//	   }
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//    else if (age >= 18 && age < 28)//��������д����else if(18<=age<28)
//		//��Ϊִ��ԭ��Ϊ��ִ��18<=ageΪ�٣��򲼶�ֵΪ0�����ʱ����Ϊ0<28Ϊ�����ӡ����
//		printf("����\n");
//	else if (age >= 28 && age < 60)
//		printf("׳��\n");
//	else
//		printf("����\n");
// 
//
//
//
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else {//Ҳ��������д//�������If����п��ƶ�����䣬����Ҫʹ�ô����
//		if (age >= 18 && age < 28)//��������д����else if(18<=age<28)
//		//��Ϊִ��ԭ��Ϊ��ִ��18<=ageΪ�٣��򲼶�ֵΪ0�����ʱ����Ϊ0<28Ϊ�����ӡ����
//			printf("����\n");
//		else if (age >= 28 && age < 60)
//			printf("׳��\n");
//		else
//			printf("����\n");
//	}
//	return 0;
//}
 

//1.��;�Ÿ����Ľ�һ�����
//int main()
//{//���
//	int a = 0;
//	;//�˴���Ȼ����䣬ֻ���ǿ����
//	return 0;
//}