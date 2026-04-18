### C语言面试题总结

##### **1.** 定义如下变量

①⼀个整型数（An integer）； 

②⼀个指向整型数的指针（A pointer to an integer）； 

③⼀个指向指针的的指针，它指向的指针是指向⼀个整型数（A pointer to a pointer to an integer）；

④⼀个有10个整型数的数组（An array of 10 integers）； 

⑤⼀个有10个指针的数组，该指针是指向⼀个整型数的（An array of 10 pointers to integers）；

⑥⼀个指向有10个整型数数组的指针（A pointer to an array of 10 integers）； 

⑦⼀个指向函数的指针，该函数有⼀个整型参数并返回⼀个整型数（A pointer to a function that takes an integer as an argument and returns an integer）；

⑧⼀个有10个指针的数组，该指针指向⼀个函数，该函数有⼀个整型参数并返回⼀个整型数（ An array of ten pointers to functions that take an integer argument and return an integer ）。

##### **2.** 已知结构体struct data定义如下，则sizeof(struct data)的值为（ ）。

```c
struct data
{
	char c1;
	int si;
	char c2;
};
```

##### **3.**位操作与内存读写

（1）给定一个整型变量a,写两段代码 第一个设置a的bit3 第二个清除a的bit3 在以上两个操作中 要保持其他位不变

(2)设置一绝对地址为0x68a7的整形变量值为0xaabb，写代码去完成这一任务

##### **4.**请问运行下述Test函数会有什么样的后果?

```c
void Getmemory(char* p)
{
    p = (char*)malloc(100);
}
void Test(void)
{
    char* str = NULL;
    Getmemory(str);
    strcpy(str, "hello world");
    printf(str);
}
```

##### **5.**请问运行下述Test函数会有什么样的后果?

```c
char* GetMemory(void)
{
    char p[] = "hello world";
    str = GetMemory();
    printf(str);
}
```

##### **6.**请问运行下述Test函数会有什么样的后果?

```c
void GetMemory2(char** p, int num)
{
    *p = (char*)malloc(num);
}
void Test(void)
{
    char *str = NULL;
    GetMemory(&str, 100);
    strcpy(str, "hello");
    printf(str);
}
```

##### **7.**请说明下面的变量声明是什么，如果可能是否可以改写成更容易阅读的形式？

```c
void (*signal(int,void(*)(int)))(int);
```

