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
//            continue;//break������ѭ����ֱ�ӳ����ţ�continue�ǵ���while�������Ƿ�ѭ��
//        //continue��������ֹ����ѭ����Ҳ���Ǳ���ѭ����continue����Ĵ��벻��ִ�У�����ֱ����ת��while�����жϲ���
//        //������һ��ѭ��������ж�
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
//            continue;//break������ѭ����ֱ�ӳ����ţ�continue�ǵ���while�������Ƿ�ѭ��
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
//        switch (n)//switch����Ƕ��ʹ��
//        {
//        case 1:n++;
//        case 2:m++; n++;
//            break;//���break��������������switch
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
//        printf("������\n");
//        break;
//    case 6:
//    case 7:
//        printf("��Ϣ��\n");
//        break;
//    default:
//        printf("�������\n");
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
//        printf("����1\n");
//        break;
//    case 2:
//        printf("����2\n");
//        break;
//    case 3:
//        printf("����3\n");
//        break;
//    case 4:
//        printf("����4\n");
//        break;
//    case 5:
//        printf("����5\n");
//        break;
//    case 6:
//        printf("����6\n");
//        break;
//    case 7:
//        printf("����7\n");
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
//        i+=2;//i����i+2
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        if (i % 2 != 0)//i%2!=1����˼��i����2������1
//            printf("%d ", i);//ע��d�����и��ո����Щ�������
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        if (i%2 == 1)//i%2==1����˼��i����2��1
//            printf("%d ", i);//ע��d�����и��ո����Щ�������
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
//		printf("δ����\n");
//	else 
//	{
//	if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("׳��\n");
//	else if (age >= 40 && age < 55)
//		printf("����\n");
//	else
//		printf("����\n");
//	}
//	return 0;
//}
//{
//	int age = 35;
//	if(age<18)
//	printf("δ����\n");
//	else if(age>=18 && age<28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("׳��\n");
//	else if (age >= 40 && age < 55)
//		printf("����\n");
//	else 
//		printf("����\n");
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	/*struct Book* pb = &b1;*/
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	/* printf("����:%s\n", b1.name);
//	printf("�۸�:%d\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
//	return 0;
//}