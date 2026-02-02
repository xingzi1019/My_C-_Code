# C++ 学习路线与标准库总结（学习笔记版）

## 一、C++ 基础语法学习路线

### 1. 程序基础

#### Hello World
```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl; // 输出 Hello World
    return 0;
}
```

#### 变量与常量
- 变量用于存储数据，可改变；
- 常量用 `const` 声明，不可修改。

```cpp
int age = 18;
const double PI = 3.14159; // 常量
```

#### 输入输出
```cpp
int a;
cin >> a; // 输入一个整数
cout << "输入的值是：" << a << endl;
```

---

### 2. 运算符
- 算术：`+ - * / %`
- 关系：`== != > < >= <=`
- 逻辑：`&& || !`
- 位运算：`& | ^ << >>`
- 赋值：`= += -=`
- `sizeof` 用于计算变量或类型所占内存大小。

---

### 3. 流程控制
```cpp
if (a > 0) cout << "正数";
else if (a == 0) cout << "零";
else cout << "负数";
```

#### 循环示例
```cpp
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
```

---

### 4. 数组
```cpp
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) cout << arr[i] << " ";
```

---

### 5. 函数
```cpp
int add(int a, int b) { // 函数定义
    return a + b;
}

int main() {
    cout << add(3, 5); // 调用函数
}
```

---

### 6. 指针
```cpp
int a = 10;
int *p = &a;
cout << *p; // 输出 10
```

---

### 7. 结构体
```cpp
struct Person {
    string name;
    int age;
};
Person p1 = {"张三", 20};
cout << p1.name << " " << p1.age;
```

---

### 8. 文件操作
```cpp
#include <fstream>
ofstream fout("data.txt");
fout << "写入文件内容" << endl;
fout.close();
```

---

## 二、C++ 标准库容器总结（STL）

### 1. vector（动态数组）
```cpp
#include <vector>
vector<int> v = {1, 2, 3};
v.push_back(4); // 添加元素
for (int x : v) cout << x << " ";
```

### 2. string（字符串）
```cpp
string s = "Hello";
s += " World"; // 拼接字符串
cout << s;//Hello World
```

### 3. deque（双端队列）
```cpp
#include <deque>
deque<int> dq = {1, 2};
dq.push_front(0);
dq.push_back(3);
```

### 4. list（双向链表）
```cpp
#include <list>
list<int> l = {1, 2, 3};
l.push_back(4);
l.remove(2);
```

### 5. set（集合）
```cpp
#include <set>
set<int> s = {1, 3, 2};
s.insert(4);
for (auto x : s) cout << x << " "; // 自动排序
```

### 6. map（键值对映射）
```cpp
#include <map>
map<string, int> m;
m["Tom"] = 90;
m["Jerry"] = 80;
cout << m["Tom"];
```

### 7. unordered_map（无序映射）
```cpp
#include <unordered_map>
unordered_map<string, int> um;
um["Alice"] = 100;
um["Bob"] = 95;
```

### 8. stack（栈）
```cpp
#include <stack>
stack<int> st;
st.push(10);
st.push(20);
cout << st.top(); // 输出栈顶元素
```

### 9. queue（队列）
```cpp
#include <queue>
queue<int> q;
q.push(1);
q.push(2);
q.pop();
cout << q.front();
```

### 10. priority_queue（优先队列）
```cpp
#include <queue>
priority_queue<int> pq;
pq.push(3);
pq.push(1);
pq.push(2);
cout << pq.top(); // 输出最大值
```

---

### STL 常用头文件
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
```