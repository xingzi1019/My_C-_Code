#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//对于⼆叉搜索树 平衡⼆叉树以及红⿊树 只需了解背后的原理 不做代码实现的要求
//重要清楚各种操作的时间复杂度 为使⽤ set 与 map 铺垫

//二叉搜索树
//左 < 根 < 右
//所以中序遍历的结果是从小到大 ---->可以去回顾一下各个遍历
//所以根据二叉搜索树的特性 搜索 插入的操作都是差不多的操作 时间复杂度是 O(N)
//构造⼀颗⼆叉搜索树的⽬的，其实并不是为了排序，⽽是为了提⾼查找和插⼊删除关键字的速度
const int N = 1e5 + 10;
int l[N], r[N];
int n;
void push()
{

}
void pop()
{

}
void insert()
{

}
int main()
{
	cin >> n;
	for (int i = 1;i <= n; ++i)
	{
		cin >> l[i] >> r[i];
	}

	return 0;
}