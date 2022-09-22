//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        putchar(ch);
//    }
//    return 0;
//}
//int main()
//{
//    int ch = getchar();
//        putchar(ch);
//    printf("%c\n", ch);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    while (i <= 10)
//    {
//        i++;
//        if (i == 5)
//            continue;//break是跳出循环，直接出括号，continue是调到while处，看是否循环
//        //continue适用于终止本次循环，也就是本次循环中continue后面的代码不再执行，而是直接跳转到while语句的判断部分
//        //进行下一次循环的入口判断
//        printf("%d ", i);
//        
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        if (i == 5)
//            continue;//break是跳出循环，直接出括号，continue是调到while处，看是否循环
//        printf("%d ", i);
//        i++;
//    } 
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch(n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)//switch可以嵌套使用
//        {
//        case 1:n++;
//        case 2:m++; n++;
//            break;//这个break结束紧挨着它的switch
//        };
//    case 4:m++;
//        break;
//    default:
//        break;
//    }
//    printf("m=%d,n=%d\n", m, n);
//    return 0;
//}
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:  
//    case 3:  
//    case 4: 
//    case 5:
//        printf("工作日\n");
//        break;
//    case 6:
//    case 7:
//        printf("休息日\n");
//        break;
//    default:
//        printf("输入错误\n");
//        break;
//    }
//    return 0;
//}
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("星期1\n");
//        break;
//    case 2:
//        printf("星期2\n");
//        break;
//    case 3:
//        printf("星期3\n");
//        break;
//    case 4:
//        printf("星期4\n");
//        break;
//    case 5:
//        printf("星期5\n");
//        break;
//    case 6:
//        printf("星期6\n");
//        break;
//    case 7:
//        printf("星期7\n");
//        break;
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        printf("%d ", i);
//        i+=2;//i等于i+2
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        if (i % 2 != 0)//i%2!=1的意思是i除于2不等于1
//            printf("%d ", i);//注意d后面有个空格把这些数间隔开
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        if (i%2 == 1)//i%2==1的意思是i除于2得1
//            printf("%d ", i);//注意d后面有个空格把这些数间隔开
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//        else
//            printf("haha\n");
//    return 0;
//}
//int main()
//{
//	int age = 35;
//	if (age < 18)
//		printf("未成年\n");
//	else 
//	{
//	if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("壮年\n");
//	else if (age >= 40 && age < 55)
//		printf("中年\n");
//	else
//		printf("老年\n");
//	}
//	return 0;
//}
//{
//	int age = 35;
//	if(age<18)
//	printf("未成年\n");
//	else if(age>=18 && age<28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("壮年\n");
//	else if (age >= 40 && age < 55)
//		printf("中年\n");
//	else 
//		printf("老年\n");
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	/*struct Book* pb = &b1;*/
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	/* printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格:%d\n", b1.price);*/
//	return 0;
//}