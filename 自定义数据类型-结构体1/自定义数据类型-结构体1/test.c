#include<stdio.h>

//�������ͣ�char short int long float double
//�Զ������ͣ��ṹ�� ö�� ������
//struct stu
//{
//	char name[20];
//	char number[12];
//	int age;
//}c;//����ṹ��ȫ�ֱ���
//struct stu b;//����ṹ��ȫ�ֱ���
//int main()
//{
//	struct stu a;//����ṹ��ֲ�����
//	return 0;
//}

//�����ṹ������  -ʡ���ṹ���ǩ
//struct
//{
//	char name[20];
//	char number[12];
//}a;//����ֱ�Ӵ���ȫ�ֱ���
//struct
//{
//	char name[20];
//	char number[12];
//}* pa;//����ֱ�Ӵ����ṹ��ָ��
//int main()
//{
//	//struct //���ܴ����ֲ�����
//		pa = &a;// �ӡ� * ������ * �������Ͳ�����,��Ȼ���������ṹ��һ�����������ǲ���ͬһ����
//	a;
//}

//�ṹ��������ã�����ָ�� -�����ݽṹѧ��
//struct Node 
//{
//	int data;
//	struct stu* next;
//};
//int main()
//{
//
//	return 0;
//}

//typedef -������
//typedef struct stu
//{
//	char name[10];
//	int age;
//}stu;//a= struct stu
//int main()
//{
//	stu b;
//	return 0;
//}


//�ṹ���ʼ��
//struct t
//{
//	char name[20];
//	int age;
//};
//struct s
//{
//	char name[20];
//	int age;
//	struct t b;
//};
//int main()
//{
//	struct s a = { "����",35,{"����",36} };//�ṹ���ʼ��
//	printf("%s %d %s %d\n", a.name, a.age, a.b.name, a.b.age);
//	return 0;
//}

//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct s a = { "����",35 };//�ṹ���ʼ��
//	printf("%s %d", a.name, a.age);
//	return 0;
//}





//����ƽṹ��ʱ -��ռ�ÿռ�С�ĳ�Ա����������һ��

//struct s
//{
//	int a;
//	char b;
//	char c;
//};
//int main()
//{
//	struct s a = { 0 };//�ṹ���ʼ��
//	printf("%zd\n", sizeof(a));//8
//	return 0;
//}

//����Ĭ�϶�����λ4   ��ԭĬ�϶�����λ8
//#pragma pack(4)
//struct stu
//{
//	char c1;
//	double d;
//};
//int main()
//{
//	struct stu a;
//	printf("%zd\n", sizeof(a));   //ԭ��С��16����Ĭ�϶�����λ4���СΪ12
//	return 0;
//}
//ȡ��Ĭ�϶����� ���ָ�Ĭ�϶�����8
#pragma pack()


//offsetof -����ṹ���ֳ�Ա��������׵�ַ��ƫ��  -�ⲻ�Ǻ��������Ǻ�   -ͷ�ļ�#include<stddef.h>  
//#include<stddef.h>
//struct s
//{
//	char a;
//	int b;
//	double c;
//};
//int main()
//{
//	printf("%zd\n", offsetof(struct s, a));//0
//	printf("%zd\n", offsetof(struct s, b));//4
//	printf("%zd\n", offsetof(struct s, c));//8
//	return 0;
//}



//�ṹ�崫��
//struct S
//{
//	char a;
//	int b;
//};
//
//void tmp(struct S p)
//{
//	p.a = 'c';
//	p.b = 20;
//}
//
//void tmp2(struct S* p)
//{
//	p->a = 'c';
//	p->b = 20;
//}
//
//void print(struct S p)
//{
//	printf("%c %d\n", p.a, p.b);
//}
//
//int main()
//{
//	struct S c={'a',10};
//	tmp(c);//���ṹ�壬���ı�ʵ�Σ��������ջ���
//	print(c);//a 10
//	tmp2(&c);//����ַ,ֱ��4/8���ֽڡ�
//	print(c);//c 20
//	return 0;
//}


