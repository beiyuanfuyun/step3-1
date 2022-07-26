//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>


//分支与循环
//1）.顺序结构  2）.选择结构  3）.循环结构
//选择结构-分支语句-if  switch
//循环结构-循环语句-while ,for ,do while
// 
// 
// 3.）1.while
//int main()
//{
//	int a = 1;
//	while (a<=10)//1
//	{
//		
//		if (a == 5)//2
//			continue;//break可以跳出循环，但是如果为continue并不会往后走，
//		//会陷入死循环所以换种写法如下
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
//		continue;//终止循环中本次循环的后面的代码，
//	//直接跳转到本次循环的判断部分，判断本次循环要不要执行下一次循环
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
//			break;//break只打碎当前所在的区块的循环
//		printf("%d\n", a);
//		
//	}
//	printf("%s\n", b);
//
//}
//3.)1.-附属代码
//代码1.getchar()-获取字符,putchar-输出字符



//
//int main()
//{
//	int ch = 0;
//	//ctrl+z可以终止代码
//	//EOF-end of file->-1
//	while ((ch = getchar()) !=EOF )//EODF就是-1，头文件的函数
//	{
//		if (ch < '0' || ch>'9')//||或者
//			continue;
//		putchar(ch);
//	 }
//	return 0;
	
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("请输入密码：");
	//scanf("%s", password);//现在输入缓冲区多了\n，那如何清空缓冲区呢
	////就让新的一个getchar()读取一个字符走，清空缓冲区//但如果是这样的1234 ABCD的密码又会有问题
	////scanf函数会读走空格前面的数，第一个getchar会读走空格，第二个getchar会读走一个A并且会判断成N类型
	////所以要一直读取直到读取\n为止，利用循环
	//getchar();
	//int ch = 0;
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("请确定（Y/N）：");
	//  ret = getchar();
	//  if ('Y' == ret)
	//  {
	//	printf("确认成功\n");
	//  }
	//  else
	//  {
	//	printf("放弃\n");//出错直接选择“放弃”，
	//	//因为敲了一个回车相当与\n这个字符（的ascll值为10）被getchar()函数读走了属于else
	//  }
	//printf("%d\n", '\n');//为10
	//
	//return 0;
	//
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
//}



//3.)2.if循环
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		i++;//调整
//	}//但三个区域较分散，为解决这个问题if循环出现
//	return 0;
//}
//for的语法if(表达式1;表达式2;表达式3)分别对应（初始化，判断，调整）
//int main()
//{
//	int a = 0;
//	for (a = 1/*1*/; a < 10/*2*/; a++/*4*/)//用的最多
//	{
//		if (a == 5)
//			continue;//与while循环一致,但没有出现死循环，
//		printf("%d   ", a);//先循环到a<10再执行printf("%d,a),再执行a++;/*3*/
//	}
//	return 0;
//}



//int main()
//{ 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//（一）这里不可以再循环体内改变循环的变量，防止for死循环
//			printf("haha\n");
//		printf("hehe\n");
//
//	}
//}



//（二）建议for循环采用前闭后开写法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//前闭后开写法。（i=0;i<=9;i++）这为前闭后闭的写法
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//（三）for循环的变种
//int main()
//{
//	for (;;)//for循环的初始化，调整，判断 都可以省略
//		//但是for循环的判断部分，如果被省略，那判断条件：恒为正,建议不要随便省略
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
//		}//j到十后，返回i函数，但没有销毁也就是说仍然是10，如果要100个hehe将第一个第二个if函数修改为(i=0;i<10;i++）
//	}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y>5; ++x, y++)
//	{
//		printf("hehe\n");//打印出2个呵呵
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; k++, i++)//这里不是判断语句，赋值语句k=0为假，则不进入下列循环
//		k++;
//	return 0;
//}


//3.)3.   do while（）循环
//do语句的语法//至少执行一次
//    do
//       循环语句；
//    whiel(表达式)；

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			//break;//打破当前区块
//			continue;//死循环，continue会跳过本次循环后面的代码{}区域，
//		            //来到判断部分while部分，再来到do语句，造成死循环
//	printf("%d\n", i);
//	i++;
//	}
//	while (i <= 10);//符合时执行do语句，不符合是不执行do语句
//	return 0;
//}

//练习1.
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
//2.！n的代码(阶乘)
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;//超出一个一个整形时，会报错溢出，尽量不要超过
//
//	}
//	printf("%d ", ret);
//	return 0;
//}
//3.计算1！+2！+3!+...+10!
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
//}//错了，但不知错在哪
//参考代码1.
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
//			ret = ret * b;//这个时候ret没有初始化，应该这样写下面
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
//			ret = ret * b;//这个时候ret没有初始化，应该这样写下面
//		}
//		sum = ret + sum;
// //本应该为ret1=1*1
// //ret2=1*1*2
// //ret3=1*1*2*3
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//优化方案：利用ret不初始化

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

 //2).2.switch语句，专门实现多分支结构 
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}
//3.switch语句可以嵌套使用的
  
  
 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //注意swwitch后面只能是整形表达式
//	{
//	case 1://这里仍需要整形表达式，或者整形函数式如1.0不行，1+0可以，且还需要常量，
//	//不能是int a=0;case n://这个时候n属于变量
//		printf("星期1\n");//加上break或者return 0;就可以跳出这个区块，不然就会降下述也给执行
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//    }
//}
 
 
 
 
// 2).1.if else-if else选择语句，else可以省略

// ps:可读性，比较下面两条代码的可读性
// 代码1.if(condition){
// return x;
// }
// retrun y;
// 代码2.if (condition)
// {
//     return x;
// }
// else
// {retrun y;
// }
// 两条代码的正确性相同，但第二个的可读性更好
// 代码3.
//int main()
//{
//    int num = 2;
//    if (num = 5)
//    {
//        printf("hehe\n");
//    }//这个代码是错误的的，但是可以跑起来，不容易发现num==5的错误，因为num=5为赋值可以跑动
//    //但换种写法就可以解决问题，这样写（5==num)这样不容易掉，且掉的时候还会报错，
//    //因为想让5这个常量赋给num变量是不行的
//}
// 
// 
// 
//代码4/
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
//    else//这个会出错，编辑器会将这个else会与离得最近的未匹配if匹配，所以会报不出来的，
//       printf("haha\n");
// return 0;
// 
// } 


//练习：1.判断一个数是否为奇数2.输出1-100之间的奇数
//#include<string.h>
//练习1.
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//再次注意这里不要换行符号
//	
//	if (1 == a % 2)
//	{
//		printf("%d为奇数\n", a);
//	}
//	else
//		printf("%d为偶数\n", a);
//}
 

//练习2
//int main()
//{
//	   int a = 1;
//	   while (a <= 100)
//	   {
//		   if (a % 2 == 1 && a <= 100)
//			   printf("%d为奇数\n", a);
//		   else
//			   ;// printf(" % d为偶数\n", a);
//		   
//		a++;
//	   }
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//    else if (age >= 18 && age < 28)//不能这样写代码else if(18<=age<28)
//		//因为执行原则为先执行18<=age为假，则布尔值为0，则此时翻译为0<28为真则打印青年
//		printf("青年\n");
//	else if (age >= 28 && age < 60)
//		printf("壮年\n");
//	else
//		printf("老年\n");
// 
//
//
//
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else {//也可以这样写//如果想在If语句中控制多条语句，就需要使用代码块
//		if (age >= 18 && age < 28)//不能这样写代码else if(18<=age<28)
//		//因为执行原则为先执行18<=age为假，则布尔值为0，则此时翻译为0<28为真则打印青年
//			printf("青年\n");
//		else if (age >= 28 && age < 60)
//			printf("壮年\n");
//		else
//			printf("老年\n");
//	}
//	return 0;
//}
 

//1.由;号隔开的叫一个语句
//int main()
//{//语句
//	int a = 0;
//	;//此处仍然是语句，只是是空语句
//	return 0;
//}