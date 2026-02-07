# C++ vector 的快速入门使用指南

> [!NOTE]
>
> 部分内容利用AI增加注释8.9.及总结利用AI辅助撰写

`vector` 是 C++ 中最常用的动态数组容器，位于 `<vector>` 头文件中。

```c++
#include <vector>
using namespace std;
int main() {
    // 1. 创建有10个int的vector，初始值都是0
    vector<int> nums(10);
    // 2. 创建有5个double的vector，初始值都是3.14
    vector<double> values(5, 3.14);
    // 3. 创建有3个string的vector，初始值都是"hello"
    vector<string> words(3, "hello");
    // 4. 创建大小为n的vector
    int n;cin > n;
    vector<int> arr(n);
    return 0;
}
```

## 1. 基本创建和初始化

```c++
#include <iostream>
#include <vector>

int main() 
{
    // 创建 vector
    std::vector<int> vec1;  // 空 vector
    std::vector<int> vec2(5);  // 5个元素，默认值0
    std::vector<int> vec3(5, 10);  // 5个元素，每个都是10
    std::vector<int> vec4 = {1, 2, 3, 4, 5};  // 初始化列表
    
    // 从数组创建
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec5(arr, arr + 5);
    
    return 0;
}
```

## 2. 常用操作

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3};
    
    // 添加元素
    vec.push_back(4);  // 末尾添加
    vec.push_back(5);
    
    // 访问元素
    std::cout << vec[0] << std::endl;  // 通过下标
    std::cout << vec.at(1) << std::endl;  // 通过at（检查边界）
    std::cout << vec.front() << std::endl;  // 第一个元素
    std::cout << vec.back() << std::endl;  // 最后一个元素
    
    // 修改元素
    vec[2] = 100;
    
    // 删除元素
    vec.pop_back();  // 删除最后一个
    vec.erase(vec.begin() + 1);  // 删除指定位置
    
    // 插入元素
    vec.insert(vec.begin() + 1, 50);  // 在位置1插入50
    
    return 0;
}
```

## 3. 容量和大小操作

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    std::cout << "大小: " << vec.size() << std::endl;
    std::cout << "是否为空: " << (vec.empty() ? "是" : "否") << std::endl;
    std::cout << "容量: " << vec.capacity() << std::endl;
    
    // 预留容量
    vec.reserve(100);
    std::cout << "预留后容量: " << vec.capacity() << std::endl;
    
    // 调整大小
    vec.resize(10);  // 调整为10个元素
    
    return 0;
}
```

## 4. 遍历 vector 的多种方式

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    // 1. 传统for循环
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    // 2. 迭代器
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // 3. 范围for循环
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
```

## 5. 与算法库结合使用

```cpp
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

int main() {
    std::vector<int> vec = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    
    // 排序
    std::sort(vec.begin(), vec.end());
    
    // 查找
    auto it = std::find(vec.begin(), vec.end(), 8);
    if (it != vec.end()) {
        std::cout << "找到8" << std::endl;
    }
    
    // 求和
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << "总和: " << sum << std::endl;
    
    return 0;
}
```

## 6. 二维 vector 和多维数组

```cpp
#include <vector>
#include <iostream>

int main() {
    // 创建二维vector
    std::vector<std::vector<int>> mat1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // 动态创建
    int rows = 3, cols = 4;
    std::vector<std::vector<int>> mat2(rows, std::vector<int>(cols, 0));
    
    // 访问元素
    std::cout << "mat1[1][2]: " << mat1[1][2] << std::endl;
    
    // 遍历二维vector
    for (int i = 0; i < mat1.size(); ++i) {
        for (int j = 0; j < mat1[i].size(); ++j) {
            std::cout << mat1[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
```

## 7. 性能优化技巧

```cpp
#include <vector>
#include <iostream>
#include <chrono>

struct Person {
    std::string name;
    int age;
    
    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    // 1. 预留容量（提高性能）
    std::vector<int> vec1;
    vec1.reserve(1000000);  // 预先分配空间
    
    for (int i = 0; i < 1000000; ++i) {
        vec1.push_back(i);
    }
    
    // 2. 使用emplace_back代替push_back（避免额外拷贝）
    std::vector<Person> people;
    people.emplace_back("Alice", 25);  // 直接在容器内构造
    people.emplace_back("Bob", 30);
    
    return 0;
}
```

## 8. 实际应用示例

```c++
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
struct Student 
{
    std::string name;
    int id;
    double score;
};

int main() 
{
    std::vector<Student> students = 
    {
        {"Alice", 1001, 85.5},
        {"Bob", 1002, 92.0},
        {"Charlie", 1003, 78.5}
    };
    
    // 计算平均分
    double total = 0;
    for (const auto& student : students) 
    {
        total += student.score;
    }
    double average = total / students.size();
    std::cout << "平均分: " << average << std::endl;
    
    // 按成绩排序
    std::sort(students.begin(), students.end(), 
              [](const Student& a, const Student& b) {
                  return a.score > b.score;
              });
    
    std::cout << "\n按成绩排序:" << std::endl;
    for (const auto& student : students) {
        std::cout << student.name << ": " << student.score << std::endl;
    }
    
    return 0;
}
```

## 9. vector 的优缺点

### 优点：
1. **动态大小**：自动管理内存，无需手动分配/释放
2. **随机访问**：通过下标访问元素，时间复杂度 O(1)
3. **连续存储**：缓存友好，访问速度快
4. **丰富的接口**：提供多种成员函数和算法支持
5. **类型安全**：模板提供类型安全

### 缺点：
1. **中间插入/删除慢**：需要移动后续元素
2. **容量变化开销**：重新分配内存和拷贝元素
3. **不是线程安全**：需要外部同步

## 10. 常见问题

### Q: vector 和数组有什么区别？
A: 数组大小固定，vector 大小动态；数组分配在栈上，vector 在堆上。

### Q: 如何清空 vector？
A: 使用 `clear()` 清空元素，或与空 vector 交换来释放内存：
```cpp
std::vector<int> vec(1000, 0);
vec.clear();  // 清空元素，但容量可能不变
std::vector<int>().swap(vec);  // 释放所有内存
```

### Q: 如何复制 vector？
A: 使用赋值操作符或构造函数：
```cpp
std::vector<int> vec1 = {1, 2, 3};
std::vector<int> vec2 = vec1;  // 拷贝
std::vector<int> vec3(vec1);    // 拷贝构造
```

### Q: vector 的容量和大小有什么区别？
A: 大小是实际元素数量，容量是已分配内存可容纳的元素数量。

## 总结
`vector` 是 C++ 中最常用、最重要的容器之一，适用于大多数需要动态数组的场景。合理使用 `reserve()`、`emplace_back()` 等函数可以显著提高性能。