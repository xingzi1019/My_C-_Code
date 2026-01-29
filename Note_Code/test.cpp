#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
//现在需要C++ 数据结构 算法 三开
//#include <iostream>
//using namespace std; 
//int main()
//{
//	int a=10;
//	int b=20;
//	cout << a+b << endl;
//	cout << "hehe" << endl;
//	cout << "i like c++" << endl;
//	return 0;
//}
//C语言头文件的拓展名是.h但是c++的用法发生了一些变化,对老式C的头文件保留了拓展名.h
//但是C++的自己的头文件没有拓展名了.
//有些C语言的头文件被转换成C++头文件,这些头文件被重命名,去掉了.h 增加了前缀c
//比如math.h变成cmath
//int main()
//{
//	//int num;
//	//cin >> num;
//	//cout << num << endl;
//	////endl 换行和刷新缓冲区
//	//cout << "hehe";
//	//cout << "haha";
//	//cout << endl;
//	//cout << "hello" << " " << "world" << endl;
//	float f;
//	cin >> f;//9.99				9.99999	9.999999
//	cout << f << endl;//9.99	9.99999	10
//	return 0;
//}
//using namespace std;
//意思是使用，使用命名空间 std
//在C++中，变量、函数和类都是大量存在的，这些变量、函数和类的名称如果都存在于全局作用域中，可能会导致很多冲突
//使用名字空间的目的是对标识符的名称进行隔离，以避免命名冲突或名字污染，关键字 namespace 的出现就是针对这种问题的
//std 是C++标准库的名字空间名，C++将标准库的定义实现都放到这个命名空间中
//当我们需要使用标准库中的内容时，就需要加上：using namespace std
//当有了这句代码的时候，表示名字空间 std 中信息都是可见和可用的，比如：cin、cout、endl等
//int main()
//{
//	std::cout << "haha" << std::endl;
//	//多见于企业开发 而不是算法竞赛里面
//	//竞赛还是用的using namespace std;
//}
//short int
//long int 
//long long int
//后面的int可以省略
//int main()
//{
//	double d1 = 1e5;//1.0 * 10^5
//	double d2 = 1e5 + 10;//1.0 * 10^5 +10
//	cout << d1 << endl;//100000
//	cout << d2 << endl;//100010
//	double d3 = 1.23e5 + 10;
//	cout << d3 << endl;//123010
//	return  0;
//}
//布尔类型
//C++有⼀种类型叫： bool （布尔类型），布尔类型的变量的值可以是 true 或 false 
//这种类型的变量专⻔⽤来表⽰真或假的
//当然在C和C++中，0表⽰假，⾮0表⽰真，有时候不使⽤ bool 类型也能表达相同的逻辑
//int main()
//{
//	bool flag = true;
//	if (flag)
//		cout << "hehe" << endl;
//	flag = false;
//	if (!flag)
//		cout << "haha" << endl;
//	cin >> flag;
//	if (flag)
//		cout << "flag为真" << endl;
//	if (!flag)
//		cout << "flag为假" << endl;
//	return  0;
//}
//char是signed char还是unsigned char是取决于编译器的实现的
//常见的编译器是signed char
//sizeof 操作符的操作数可以是类型，也可是变量名或者表达式
//sizeof 的操作数如果不是类型，是表达式的时候，可以省略掉后边的括号的。
//sizeof (类型)
//sizeof 表达式
//int main()
//{
//	int a = 10;
//	std::cout << sizeof a << std::endl;
//	std::cout << sizeof(a) << std::endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(bool) << endl;//1
//	return 0;
//}
//C/C++的标准规定：
//sizeof(long) >= sizeof(int)
//int main()
//{ 
//	//使用这些需要包含<climits>这个文件
//	cout << CHAR_MIN << endl;
//	cout << CHAR_MAX << endl;
//	cout << INT_MIN << endl;
//	return 0;
//}
// 
//int m = 100;
//int main()
//{
//	int m = 1;
//	int a = 10;
//	cout << m << endl;//1
//	return 0;
//}
//局部和全局变量都在时 优先使用局部变量 若想使用全局变量 则需在局部空间里面增加::
//int main()
//{
//	int m = 1;
//	int a = 10;
//	cout << ::m << endl;//100
//	return 0;
//}
////全局变量：全局变量通常在定义时就被初始化，如果没有明确指定初始值，它们通常会被初始化为0。
//局部变量：局部变量通常不会⾃动初始化。它们需要在使⽤之前明确地赋值或初始化
//如果没有初始化，它们的值将是未定义的，使⽤未初始化的局部变量可能会导致不可预测的⾏为或运⾏时错误，因此局部变量建议初始化
//int m;
//int main()
//{
//	int a;
//	cout << m << a << endl;//DevC++会打印00 而VS会直接报错
//	//vs想打印未初始化的局部变量会报错
//	return 0;
//}
//int main()
//{
//	int a;
//	cout << a;
//	return 0;
//}
//常量:分为以下三类
//字面常量:整形常量(八 十 十六进制数字) 字符常量('a') 浮点型常量(3.14 1e6)
//#define定义的常量
//const 定义的常量
//关于负数取模%
//负数也是⽀持取模的，但是负数求模结果的正负号由第⼀个运算数（操作数）的正负号决定
//int main()
//{
//	int a = 4;
//	int b = 0;
//	int c = a / b;
//	cout << c << endl;
//	cout << 11 % -5 << endl; // 1
//	cout << -11 % -5 << endl; // -1
//	cout << -11 % 5 << endl; // -1
//	return 0;
//}
//c = b = a + 3; //连续赋值，从右向左依次赋值的
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << "输出";
//	cout << a << ' ' << b << endl;
//	return 0;
//}
//混合运算时的类型转换
//整型提升：表达式之中的 char 和 short 类型⼀定会先转换成 int 类型，然后参与运算。
//算术转换：表达式中出现下⾯的任意两种类型的值进⾏计算的时候，要先要将较下⾯的类型转换成另
//外⼀种类型才能计算。
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int
//这些转换都是隐式⾃动发⽣的，有些编译器会报警告，写程序的⼈并没有感知到，也不需要操⼼细节。
//还有截断和C语言是一样的 这里不过多赘述
//强制类型转换也是一样 不解释
//getchar putchar
//int main()
//{
//	int a = 123;
//	printf("%5d", a);//右对齐
//	printf("\n");
//	printf("%-5d",a);//左对齐
//	cout << 'X' << endl;
//	return 0;
//}
//某幼儿园里，有5个小朋友编号为1、2、3、4、5，他们按自己的编号顺序围坐在一张圆桌旁
//他们身上都有若干个糖果(键盘输入)，现在他们做一个分糖果游戏
//从1号小朋友开始，将自己的糖果均分三份（如果有多余的糖果，则立即吃掉），自己留一份，其余两份分给他的相邻的两个小朋友
//接着2号、3号、4号、5号小朋友同样这么做。问一轮后，每个小朋友手上分别有多少糖果
//【输入】
//5个小朋友的糖果数。
//【输出】
//游戏后5个小朋友的糖果数。(按5位宽度输出)
//【输入样例】
//8 9 10 11 12
//【输出样例】
//11    7    9   11    6
//int main()
//{
//	int a, b, c, d, e;
//	cin >> a >> b >> c >> d >> e;
//	// 8 9  10 11 12
//	// 2 11 10 11 14
//	// 5 3  13 11 14
//	// 5 7  4  15 14
//	// 5 7  9  5  19
//	//11 7  9  11  6
//	a /= 3; e += a; b += a;
//	b /= 3; a += b; c += b;
//	c /= 3; b += c; d += c;
//	d /= 3; c += d; e += d;
//	e /= 3; d += e; a += e;
//	printf("%5d%5d%5d%5d%5d\n", a, b, c, d, e);
//	return 0;
//}
//cin 是 C++ 中提供的标准输⼊流对象，⼀般针对的是键盘，也就是从键盘上输⼊的字符流，使⽤
//cin 来进⾏数据的提取， cin ⼀般是和 >> （流提取运算符）配合使⽤的。 cin 的功能和 scanf
//是类似的。
//cout 是C++中提供的标准输出流对象，⼀般针对的控制台的窗⼝，也就是将数据以字符流的形式输
//出到控制台窗⼝上显⽰。 cout ⼀般是和 << （流插⼊运算符）配合使⽤。 cout 的功能和
//printf 是类似的。
// 
//📌 我们在写程序的时候，经常需要处理数据，不管什么类型的数据都是以字符流的形式输⼊和
//输出的，也就是不管在键盘上输⼊什么类型的数据，还是将程序中的各种类型的数据输出显
//⽰到控制台屏幕上，都是以字符流的形式处理的。
//cin 和 cout 的输⼊输出⾮常的⽅便，不需要⼿动控制格式，能够⾃动识别变量类型
// 
//📌 cin 使⽤细节：
//cin 在读取的时候是根据⽤⼾的输⼊，从前往后，从上往下依次扫描。
//cin 在读取的过程中遇到空格，⾃动会跳过，所以不要担⼼在想要的字符前输⼊空⽩字符。
//当⼀⾏读取结束的时候，会⾃动换⾏，读取下⼀⾏的内容。
//cin 后⾯不可以跟换⾏ endl
//cout 的格式输出(加餐)
//printf 函数在输出数据的时候，可以指定格式来输出，⽐如：指定宽度，⽐如指定⼩数点后的位
//数，对⻬⽅式等等。那么 cout 在数据的时候能否指定格式呢？答案是可以的！ cout 结合
//<iomanip>(IO manipulators)头⽂件中的操纵符，可以灵活控制输出格式，从⽽满⾜各种格式化需
//求。
//控制宽度和填充(加餐)
//• setw ：设置字段宽度（只对紧接着的输出项有效）。
//• setfill ：设置填充字符。
//int main() 
//{
//	int a = 123;
//
//	cout << "默认宽度: " << a << endl;
//	cout << "宽度设置为10: " << setw(10) << a << endl;
//	cout << "宽度为10，不够时填充*: " << setw(10) << setfill('*') << a << endl;
//
//	return 0;
//}
// 
//控制数值格式(加餐)
//• fixed ：以固定⼩数点表⽰浮点数，设置后就不会以科学计数法展⽰了。
//• scientific ：以科学计数法表⽰浮点数。
//• setprecision ：设置浮点数的精度，以控制⼩数点后的数字位数，⼀般先固定⼩数点，再设置
//精度。
//int main()
//{
//	double pi = 3.141592653589793;
//
//	cout << "默认: " << pi << endl;
//	cout << "固定小时点方式: " << fixed << pi << endl;
//	cout << "科学计数法方式: " << scientific << pi << endl;
//	cout << "固定小数点，小数点后2位有效数字: " << fixed << setprecision(2) << pi << endl;
//
//	return 0;
//}
//cout 结合其他操作符还能完成⼀些其他的格式输出，但是毕竟 cout 在完成格式化输出的时候，其
//实不如 printf ⽅便，所以在竞赛中，涉及格式化输出的时候，我们⼀般会使⽤ printf 来完成，
//所以下⾯的内容属于选学部分。
//控制整数格式（加餐）
//• dec ：以⼗进制格式显⽰整数（默认）。
//• hex ：以⼗六进制格式显⽰整数。
//• oct ：以⼋进制格式显⽰整数。
//int main() 
//{
//	int n = 255;
//	cout << "十进制 : " << dec << n << endl;
//	cout << "十六进制: " << hex << n << endl;
//	cout << "八进制 : " << oct << n << endl;
//	return 0;
//}
//控制对⻬⽅式（加餐）
//• left ：左对⻬。
//• right ：右对⻬（默认）
//int main() 
//{
//	int n = 123;
//
//	cout << "右对齐: " << setw(10) << right << n << endl;
//	cout << "左对齐: " << setw(10) << left << n << endl;
//
//	return 0;
//}
//int main()
//{
//	double a = 0.1;
//	double b = 0.2;
//	double c = 0.3;
//	if (fabs((a + b) - c) < 1e-9) // 1e-9 表⽰允许的误差范围
//		cout << "a + b 约等于 c" << endl;
//	else
//		cout << "a + b 不等于 c" << endl;
//	return 0;
//}
//学生结构体定义
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//};
////值传递
//void printStudent(student stu)
//{
//	stu.age = 28;
//	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//}
////地址传递
//void printStudent2(student* stu)
//{
//	stu->age = 28;
//	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
//}
//int main() {
//	student stu = { "张三",18,100 };
//	//值传递
//	printStudent(stu);
//	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//	cout << endl;
//	//地址传递
//	printStudent2(&stu);
//	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//	system("pause");
//	return 0;
//}
//学生结构体定义
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//};
//
////const使用场景
//void printStudent(const student* stu) //加const防止函数体中的误操作
//{
//	//stu->age = 100; //操作失败，因为加了const修饰
//	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
//
//}
//
//int main() {
//
//	student stu = { "张三",18,100 };
//
//	printStudent(&stu);
//
//	system("pause");
//
//	return 0;
//}
//struct Student
//{
//	string name;
//	int score;
//};
//struct Teacher
//{
//	string name;
//	Student sArray[5];
//};
//void allocateSpace(Teacher tArray[], int len)
//{
//	string tName = "教师";
//	string sName = "学生";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].name = tName + nameSeed[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].name = sName + nameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//void printTeachers(Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tArray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//int main() 
//{
//
//	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>
//	Teacher tArray[3]; //老师数组
//	int len = sizeof(tArray) / sizeof(Teacher);
//	allocateSpace(tArray, len); //创建数据
//	printTeachers(tArray, len); //打印数据
//	system("pause");
//	return 0;
//}
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//int &c; //错误，引用必须初始化
//	int& c = a; //一旦初始化后，就不可以更改
//	c = b; //这是赋值操作，不是更改引用
//	
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//
//	return 0;
//}

//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main() {

	//局部变量
	int a = 10;
	int b = 10;

	//打印地址
	cout << "局部变量a地址为： " << (int)&a << endl;
	cout << "局部变量b地址为： " << (int)&b << endl;

	cout << "全局变量g_a地址为： " <<  (int)&g_a << endl;
	cout << "全局变量g_b地址为： " <<  (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
	cout << "静态变量s_b地址为： " << (int)&s_b << endl;

	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;

	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;

	system("pause");

	return 0;
}