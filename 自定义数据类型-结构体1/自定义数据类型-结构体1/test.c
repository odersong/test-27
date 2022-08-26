#include<stdio.h>

//内置类型：char short int long float double
//自定义类型：结构体 枚举 联合体
//struct stu
//{
//	char name[20];
//	char number[12];
//	int age;
//}c;//定义结构体全局变量
//struct stu b;//定义结构体全局变量
//int main()
//{
//	struct stu a;//定义结构体局部变量
//	return 0;
//}

//匿名结构体类型  -省咯结构体标签
//struct
//{
//	char name[20];
//	char number[12];
//}a;//在这直接创建全局变量
//struct
//{
//	char name[20];
//	char number[12];
//}* pa;//在这直接创建结构体指针
//int main()
//{
//	//struct //不能创建局部变量
//		pa = &a;// 从“ * ”到“ * ”的类型不兼容,虽然两个匿名结构体一样，但是他们不是同一类型
//	a;
//}

//结构体的自引用，是用指针 -在数据结构学到
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

//typedef -重命名
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


//结构体初始化
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
//	struct s a = { "张三",35,{"李四",36} };//结构体初始化
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
//	struct s a = { "张三",35 };//结构体初始化
//	printf("%s %d", a.name, a.age);
//	return 0;
//}





//在设计结构体时 -让占用空间小的成员尽量集中在一起

//struct s
//{
//	int a;
//	char b;
//	char c;
//};
//int main()
//{
//	struct s a = { 0 };//结构体初始化
//	printf("%zd\n", sizeof(a));//8
//	return 0;
//}

//设置默认对齐数位4   ，原默认对齐数位8
//#pragma pack(4)
//struct stu
//{
//	char c1;
//	double d;
//};
//int main()
//{
//	struct stu a;
//	printf("%zd\n", sizeof(a));   //原大小是16，改默认对齐数位4则大小为12
//	return 0;
//}
//取消默认对齐数 ，恢复默认对齐数8
#pragma pack()


//offsetof -计算结构体种成员变量相对首地址的偏移  -这不是函数，这是宏   -头文件#include<stddef.h>  
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



//结构体传参
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
//	tmp(c);//传结构体，不改变实参，容易造成栈溢出
//	print(c);//a 10
//	tmp2(&c);//传地址,直传4/8个字节。
//	print(c);//c 20
//	return 0;
//}


