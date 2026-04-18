#define  _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>  // 包含srand()和rand()函数
#include <string.h>
#include <time.h> // 包含time()函数，用于获取系统时间
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    /*
//************     12    (4)*3
// *        *            (4)*2个空格
//  *                    (4)/2行
//   *                   (4)-1个空格
//  *
// *        *
//************       */
//    for (int i = 1; i <= n * 3; i++)
//    {
//        printf("*");
//    }
//    printf("\n");
//    //////////////////////////
//    for (int j = 1; j <= (n / 2); j++)
//    {
//        printf(" ");
//    }
//    printf("*");
//    for (int j = 1; j <= (n / 2); j++)
//    {
//        printf(" ");
//    }
//        printf("*");
//printf("\n");
//    //////////////////////////
//    for (int i = 1; i <= n * 3; i++)
//    {
//        printf("*");
//    }
//    /*
//******************
// *              *
//  *            *
//   *
//    *
//     *
//    *
//   *
//  *            *
// *              *
//******************
//    */
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////
//int ADD(int a, int b)
//{
//	return a + b;
//}
//int JIAN(int a, int b)
//{
//	return a - b;
//}
//int CHENG(int a, int b)
//{
//	return a * b;
//}
//int CHU(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int a, b;
//	char c;
//	scanf("%d %d %c", &a, &b, &c);
//	if (c == '/' && a == 0)
//	{
//		printf("NaN");
//	}
//	else
//	{
//		if (c == '+')
//		{
//			int guo = ADD(a, b);
//			printf("%d", guo);
//		}
//		else if (c == '-')
//		{
//			int guo = JIAN(a, b);
//			printf("%d", guo);
//		}
//		else if (c == '*')
//		{
//			int guo = CHENG(a, b);
//			printf("%d", guo);
//		}
//		else if (c == '/')
//		{
//			int guo = CHU(a, b);
//			printf("%d", guo);
//		}
//	}
//	return 0;
//}
///////////////////////////////////////////////////////////
/*
小璐刚开始学习编程的时候，曾学习到一个概念叫做”回文数“，
即把一个正整数的各位数字分解出来，第一位的数字和最后一位的数字一样，第二位的数字和倒数第二个数字一样，
以此类推，比如11，121，1221，12321这样的数字都是回文数，
而123，321，12344这些数字则不是回文数。
	   得知你的水平很强，她希望你能写一份代码求出某个正整数闭区间中回文数的个数
输入格式:
一行包含两个正整数 x , y (1≤x≤y≤10000）。
输出格式:
一行包含一个整数表示从x到y（包含x和y）中的所有正整数里有几个回文数。
*/
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int count = 0;
//	for (int i = x; i <= y; i++)
//	{
//		//10000
//		if (i / 1000 != 0)//4位数
//		{
//			if (i % 10 == i / 1000 && i % 100 / 10 == i % 1000 / 100)//1221
//			{
//				count++;
//			}
//		}
//		else if (i / 100 != 0)//3位数
//		{
//			if (i / 100 == i % 10)//121
//			{
//				count++;
//			}
//		}
//		else//2位数
//		{
//			if (i % 10 == i / 10)//66
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <string.h>
//#include <stdlib.h>  // 包含srand()和rand()函数
//#include <time.h> // 包含time()函数，用于获取系统时间
//int sushu(int n)
//{
//    int j = 0;
//    for (j = 2; j <= sqrt(n); j++)
//    {
//        if (n % j == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int n, x;
//    scanf("%d", &n);
//    getchar();
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &x);
//        int m = sushu(x);
//        if (m == 0)
//        {
//            printf("QAQ", m);
//            break;
//        }
//    }
//    int max = 0;
//    for (int j = 1; j <= n; j++)
//    {
//        if (n % j == 0)
//        {
//            max = j;
//        }
//    }
//    printf("%d", max);//n的最大公约数
//    return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	/*
//*   *
// * *
//  *
//	////////////////////
//*   *   *
// * * * *
//  *   *
//			*/
//	for (int i = 1; i <= n; i++)
//	{
//		printf("*   ");
//	}
//	printf("*\n");//第一行
//	for (int j = 1; j <= n; j++)
//	{
//		printf(" * *");
//	}
//	printf("\n");//第二行
//	for (int k = 1; k <= n; k++)
//	{
//		printf("  *");
//	}
//	return 0;
//}
//#define  _CRT_SECURE_NO_WARNINGS
//int main()
//{
//    float f = 0.0;
//    scanf("%f", &f);
//    float xiao = f * 10.0 % 10;
//    float ge = f * 10.0 % 100 / 10.0;
//    float shi = f * 10.0 % 1000 / 100.0;
//    float bai = f * 10.0 / 1000.0;
//    float fanzhuan = (xiao * 1000.0 + ge * 100.0 + shi * 10.0 + xiao) / 10.0;
//    printf("%f", fanzhuan);
//    return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//    //int i, s = 0;
//    //for (i = 1; i < 10; i += 2)
//    //    s = s + i + 1;
//    //printf("%d\n", s);
//    int i = 2;
//    for (i = 2; i == 0; )
//    {
//        printf(" % d", i--);
//    }
//    return 0;
//}
//int main()
//{
	//int i, j, m, n;
	//scanf_s("%d", &n);
	///*
	//*****
	// ***
	//  *
	// ***
	//*****
	//*/
	//m = (n + 1) / 2;//
	//for (i = m; i <= n; i++)//
	//{
	//	for (j = m + 1 - i; j > 0; j--)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= 2 * i - 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (i = m - 1; i >= 1; i--)//
	//{
	//	for (j = m + 1 - i; j > 0; j--)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= 2 * i - 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
//	int i, j, m, n;
//	scanf("%d", &n);
//	m = (n - 1) / 2;
//	for (i = m + 1; i >= 1; i--) {
//		for (j = m + 1 - i; j > 0; j--) {
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 2; i <= m + 1; i++) {
//		for (j = m + 1 - i; j > 0; j--) {
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[2][2] = { 0 };
//	for (int i = 0; i <= 10; i++)
//	{
//		arr[0][0] = i;
//		for (int j = 0; j <= 10; j++)
//		{
//			arr[0][1] = j;
//			for (int k = 0; k <= 10; k++)
//			{
//				arr[1][0] = k;
//				for (int l = 0; l <= 10; l++)
//				{
//					arr[1][1] = l;
//					if ((i * l) - (j * k) == n)
//					{
//						printf("%d %d\n%d %d", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
//						//printf("%d",arr);
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int mine(char arr[][3],int n,int m)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[i][j] == '*')
//			{
//				arr[i][j] = '0';
//			}
//		}
//	}
//	//CountJudgeMent(arr[3][3]);
//}
//int	CountJudgeMent(char arr[][3],int n,int m)
//{
//	for ()
//	{
//		if()
//	}
//}
/*
*
3 3
*??
???
?*?

*10
221
1*1

*/
//int main()
//{
//	int n, m;
//	char arr[][3] = { '?'};
//	char arr[][3] = { '0' };
//	scanf("%d %d", &n, &m);
//	char ij;
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < m-1; j++)
//		{
//			scanf("%c", &ij);
//			arr[i][j] = ij;
//		}
//		getchar();
//	}
//	mine(arr,n,m);
//	CountJudgeMent(arr,n,m);
//	return 0;
//}
//#define  _CRT_SECURE_NO_WARNINGS
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <string.h>
//#include <stdlib.h>  // 包含srand()和rand()函数
//#include <time.h> // 包含time()函数，用于获取系统时间
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	int x1, x2, y1, y2;
//	float x=0.0, y=0.0;
//	for (int i = 1; i <= 2; i++)
//	{
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		x = x1 / y1;
//		y = x2 / y2;
//		if (x == y)
//		{
//			printf("1\n");
//		}
//		else if (x > y)
//		{
//			printf("%d %d\n", x1, y1);
//		}
//		else
//		{
//			printf("%d %d\n", x2, y2);
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int n, m, k;
//    int q, xi;
//    int arr[100][100] = { 0 };
//
//    scanf("%d %d %d", &n, &m, &k);
//
//for (int i = 0; i < n; i++) {
//    for (int j = 0; j < m; j++) {
//        scanf("%d", &arr[i][j]);
//    }
//}
//
//    scanf("%d", &q);
//
//    while (q--) {
//        scanf("%d", &xi);  // 第 xi 行，注意数组是 0-based，所以是 xi-1
//        int row = xi - 1;
//
//        // 以下变量你可以认为是临时的，为了贴近你原来的变量名，我们复用一些
//        int v1 = 0, v2 = 0, v3 = 0;  // 这里仅作示意，实际不应该这么用
//        // 我们不用 v1,v2,v3 全局统计，而是用下面更清晰的逻辑
//
//        int current_type = -1;     // 当前正在统计的花种类
//        int current_count = 0;     // 当前连续个数
//        int max_count = 0;         // 当前行最大连续个数
//        int dense_type = k + 1;    // 最密集花的种类，初始化一个较大值
//
//        for (int j = 0; j < m; j++) {
//            int flower = arr[row][j];
//
//            if (flower == current_type) {
//                current_count++;
//            }
//            else {
//                // 先结算前一种花的连续情况
//                if (current_count > max_count) {
//                    max_count = current_count;
//                    dense_type = current_type;
//                }
//                else if (current_count == max_count) {
//                    if (current_type < dense_type) {
//                        dense_type = current_type;
//                    }
//                }
//                // 重置，开始统计新的花
//                current_type = flower;
//                current_count = 1;
//            }
//        }
//
//        // 处理最后一组花（循环结束后可能还没统计）
//        if (current_count > max_count) {
//            max_count = current_count;
//            dense_type = current_type;
//        }
//        else if (current_count == max_count) {
//            if (current_type < dense_type) {
//                dense_type = current_type;
//            }
//        }
//
//        printf("%d\n", dense_type);
//    }
//
//    return 0;
//}
//int main()
//{
	/*int i, j, m = 55;
	for (i = 1; i <= 3; i++)
	{
		for (j = 3; j <= i; j++)
		{
			m = m % j;
		}
	}
	printf("%d\n ", m);*/
	//	int n = 5;
	//	for (int i = n - 1; i >= 1; i--)
	//	{
	//		for (int j = n - 1; j >= 1; j--)
	//		{
	//			printf("%d", i);
	//		}
	//		printf("\n");
	//	}
	//}
		//int main()
		//{
		//	int n;
		//	while (scanf("%d", &n) == 1)
		//	{
		//		for (int i = 0; i <= n / 5; i++)
		//		{
		//			for (int j = 0; j <= n / 3; j++)
		//			{
		//				int k = n - i - j;
		//				if (k % 3 == 0 && i * 5 + j * 3 + k / 3 == n)
		//				{
		//					printf("%d %d %d\n", i, j, k);
		//				}
		//			}
		//		}
		//	}
		//	return 0;
		//}
	//#include <stdio.h>
	//
	//int Gcd(int x, int y);
	//
	//int main()
	//{
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	printf("%d\n", Gcd(a, b));
	//	return 0;
	//}
	//
	///* 你提交的代码将被嵌在这里 */
	//int Gcd(int x, int y)
	//{
	//	int min = x < y ? x : y;
	//	for (int i = min; i > 0; i--)
	//	{
	//		if (x % i == 0 && y % i == 0)
	//		{
	//			return i;
	//		}
	//	}
	//}
	//#include <stdio.h>
	//#include <stdlib.h>
	//
	//void Show(int number, char symbol);
	//void LfIso(int height, char symbol);
	//
	//int main()
	//{
	//	int n;
	//	char s;
	//	scanf("%d %c", &n, &s);
	//	LfIso(n, s);
	//	putchar('\n');
	//	return 0;
	//}
	//
	///* 你提交的代码将被嵌在这里 */
	//void LfIso(int height, char symbol)
	//{
	//	/*
	//*
	//**
	//***
	//****
	//*****
	//		*/
	//	int i;
	//	for (i = 1; i <= height; i++)
	//	{
	//		for (int j = height - 1; j >= i; i--)
	//		{
	//			printf(" ");
	//		}
	//		for (int k = 1; k <= i; k++)
	//		{
	//			printf("%c", symbol);
	//		}
	//	}
	//	/*
	//****
	// ***
	//  **
	//   *        */
	//	for (i = height - 1; i >= 1; i--)
	//	{
	//		for (int j = height; j > i; j--)
	//		{
	//			printf(" ");
	//		}
	//		for (int k = 1; k <= i; k++)
	//		{
	//			printf("%c", symbol);
	//		}
	//	}
	//}
//#include <stdio.h>
//#include <stdio.h>
//double funpi(double e)
//{
//	double pi = 0.0, term = 1.0;
//	int sign = 1, denominator = 1;
//	while (term >= e)
//	{
//		pi += sign * (1.0 / denominator);
//		sign = -sign;
//		denominator += 2;
//		term = sign * (1.0 / denominator);
//	}
//	return 4 * pi;
//}
//int main()
//{
//	float e;
//	scanf("%f", &e);
//	printf("pi = %.6f", funpi(e));
//	return 0;
//}
//int main() 
//{
//	int n, m, horse_x, horse_y;
//	scanf("%d %d %d %d", &n, &m, &horse_x, &horse_y);
//	int blocked[21][21] = { 0 };
//	int dx[] = { 0, 1, 1, -1, -1, 2, 2, -2, -2 };
//	int dy[] = { 0, 2, -2, 2, -2, 1, -1, 1, -1 };
//	int i;
//	for (i = 0; i < 9; i++) {
//		int x = horse_x + dx[i];
//		int y = horse_y + dy[i];
//		if (x >= 0 && x <= n && y >= 0 && y <= m) {
//			blocked[x][y] = 1;
//		}
//	}
//	if (blocked[0][0]) {
//		printf("0\n");
//		return 0;
//	}
//	long long dp[21][21] = { 0 };
//	dp[0][0] = 1;
//	int j;
//	for (i = 0; i <= n; i++) {
//		for (j = 0; j <= m; j++) {
//
//			if (blocked[i][j]) {
//				continue;
//			}
//			if (i > 0 && !blocked[i - 1][j]) {
//				dp[i][j] += dp[i - 1][j];
//			}
//			if (j > 0 && !blocked[i][j - 1]) {
//				dp[i][j] += dp[i][j - 1];
//			}
//		}
//	}
//	printf("%lld\n", dp[n][m]);
//	return 0;
//}
//#include <iostream>
//#include <optional>
//
//enum Color { RED, BLACK };
//
//template <typename Key, typename Value>
//class RBTree {
//public:
//    void insert(const Key& key, const Value& value) {
//        Node* z = new Node(key, value);
//        bstInsert(z);
//        fixInsert(z);
//    }
//
//    void remove(const Key& key) {
//        Node* z = searchNode(root, key);
//        if (!z) return;
//        Node* y = z;
//        Node* x = nullptr;
//        Color yOriginalColor = y->color;
//        if (!z->left) {
//            x = z->right;
//            transplant(z, z->right);
//        }
//        else if (!z->right) {
//            x = z->left;
//            transplant(z, z->left);
//        }
//        else {
//            y = minimum(z->right);
//            yOriginalColor = y->color;
//            x = y->right;
//            if (y->parent == z) {
//                if (x) x->parent = y;
//            }
//            else {
//                transplant(y, y->right);
//                y->right = z->right;
//                y->right->parent = y;
//            }
//            transplant(z, y);
//            y->left = z->left;
//            y->left->parent = y;
//            y->color = z->color;
//        }
//        delete z;
//        if (yOriginalColor == BLACK) fixDelete(x, z ? z->parent : nullptr);
//    }
//
//    std::optional<Value> find(const Key& key) const {
//        Node* node = searchNode(root, key);
//        if (!node) return std::nullopt;
//        return node->value;
//    }
//
//    void inorder() const {
//        inorder(root);
//        std::cout << std::endl;
//    }
//
//    ~RBTree() { destroy(root); }
//
//private:
//    struct Node {
//        Key key;
//        Value value;
//        Color color;
//        Node* left;
//        Node* right;
//        Node* parent;
//        Node(const Key& k, const Value& v)
//            : key(k), value(v), color(RED), left(nullptr), right(nullptr), parent(nullptr) {
//        }
//    };
//
//    Node* root = nullptr;
//
//    void leftRotate(Node* x) {
//        Node* y = x->right;
//        x->right = y->left;
//        if (y->left) y->left->parent = x;
//        y->parent = x->parent;
//        if (!x->parent)
//            root = y;
//        else if (x == x->parent->left)
//            x->parent->left = y;
//        else
//            x->parent->right = y;
//        y->left = x;
//        x->parent = y;
//    }
//
//    void rightRotate(Node* y) {
//        Node* x = y->left;
//        y->left = x->right;
//        if (x->right) x->right->parent = y;
//        x->parent = y->parent;
//        if (!y->parent)
//            root = x;
//        else if (y == y->parent->left)
//            y->parent->left = x;
//        else
//            y->parent->right = x;
//        x->right = y;
//        y->parent = x;
//    }
//
//    void fixInsert(Node* z) {
//        while (z->parent && z->parent->color == RED) {
//            if (z->parent == z->parent->parent->left) {
//                Node* y = z->parent->parent->right;
//                if (y && y->color == RED) {
//                    z->parent->color = BLACK;
//                    y->color = BLACK;
//                    z->parent->parent->color = RED;
//                    z = z->parent->parent;
//                }
//                else {
//                    if (z == z->parent->right) {
//                        z = z->parent;
//                        leftRotate(z);
//                    }
//                    z->parent->color = BLACK;
//                    z->parent->parent->color = RED;
//                    rightRotate(z->parent->parent);
//                }
//            }
//            else {
//                Node* y = z->parent->parent->left;
//                if (y && y->color == RED) {
//                    z->parent->color = BLACK;
//                    y->color = BLACK;
//                    z->parent->parent->color = RED;
//                    z = z->parent->parent;
//                }
//                else {
//                    if (z == z->parent->left) {
//                        z = z->parent;
//                        rightRotate(z);
//                    }
//                    z->parent->color = BLACK;
//                    z->parent->parent->color = RED;
//                    leftRotate(z->parent->parent);
//                }
//            }
//        }
//        root->color = BLACK;
//    }
//
//    void fixDelete(Node* x, Node* parent) {
//        while ((x != root) && (!x || x->color == BLACK)) {
//            if (x == (parent ? parent->left : nullptr)) {
//                Node* w = parent->right;
//                if (w && w->color == RED) {
//                    w->color = BLACK;
//                    parent->color = RED;
//                    leftRotate(parent);
//                    w = parent->right;
//                }
//                if ((!w->left || w->left->color == BLACK) &&
//                    (!w->right || w->right->color == BLACK)) {
//                    if (w) w->color = RED;
//                    x = parent;
//                    parent = x ? x->parent : nullptr;
//                }
//                else {
//                    if (!w->right || w->right->color == BLACK) {
//                        if (w->left) w->left->color = BLACK;
//                        w->color = RED;
//                        rightRotate(w);
//                        w = parent->right;
//                    }
//                    w->color = parent->color;
//                    parent->color = BLACK;
//                    if (w->right) w->right->color = BLACK;
//                    leftRotate(parent);
//                    x = root;
//                }
//            }
//            else {
//                Node* w = parent->left;
//                if (w && w->color == RED) {
//                    w->color = BLACK;
//                    parent->color = RED;
//                    rightRotate(parent);
//                    w = parent->left;
//                }
//                if ((!w->left || w->left->color == BLACK) &&
//                    (!w->right || w->right->color == BLACK)) {
//                    if (w) w->color = RED;
//                    x = parent;
//                    parent = x ? x->parent : nullptr;
//                }
//                else {
//                    if (!w->left || w->left->color == BLACK) {
//                        if (w->right) w->right->color = BLACK;
//                        w->color = RED;
//                        leftRotate(w);
//                        w = parent->left;
//                    }
//                    w->color = parent->color;
//                    parent->color = BLACK;
//                    if (w->left) w->left->color = BLACK;
//                    rightRotate(parent);
//                    x = root;
//                }
//            }
//        }
//        if (x) x->color = BLACK;
//    }
//
//    void bstInsert(Node* z) {
//        Node* y = nullptr;
//        Node* x = root;
//        while (x) {
//            y = x;
//            if (z->key < x->key)
//                x = x->left;
//            else
//                x = x->right;
//        }
//        z->parent = y;
//        if (!y)
//            root = z;
//        else if (z->key < y->key)
//            y->left = z;
//        else
//            y->right = z;
//    }
//
//    Node* searchNode(Node* node, const Key& key) const {
//        while (node) {
//            if (key == node->key) return node;
//            node = key < node->key ? node->left : node->right;
//        }
//        return nullptr;
//    }
//
//    Node* minimum(Node* node) const {
//        while (node->left) node = node->left;
//        return node;
//    }
//
//    void transplant(Node* u, Node* v) {
//        if (!u->parent)
//            root = v;
//        else if (u == u->parent->left)
//            u->parent->left = v;
//        else
//            u->parent->right = v;
//        if (v) v->parent = u->parent;
//    }
//
//    void inorder(Node* node) const {
//        if (!node) return;
//        inorder(node->left);
//        std::cout << node->key << "(" << (node->color == RED ? "R" : "B") << ") ";
//        inorder(node->right);
//    }
//
//    void destroy(Node* node) {
//        if (!node) return;
//        destroy(node->left);
//        destroy(node->right);
//        delete node;
//    }
//};
//
//int main() {
//    RBTree<int, std::string> tree;
//    tree.insert(10, "ten");
//    tree.insert(20, "twenty");
//    tree.insert(30, "thirty");
//    tree.insert(15, "fifteen");
//    tree.inorder();
//
//    tree.remove(20);
//    tree.inorder();
//
//    auto val = tree.find(15);
//    if (val) std::cout << "found: " << *val << std::endl;
//    return 0;
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	int arr[8] = { 0 };
//	int arr2[8] = { 0 };
//	while (T--)
//	{
//		for (int i = 0; i < 8; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 0; i < 8; i++)
//		{
//			scanf("%d", &arr2[i]);
//		}
//		int sum = 0;
//		for (int i = 0; i < 8; i++)
//		{
//			sum += (arr2[i] - arr[i]);
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}
//#include <iostream>
//#include <math.h>
//using namespace std;
//int calc(int n)
//{
//	int sum = 0;
//	//循环1~n
//	for (int i = 1; i <= n; i++)
//	{
//		//计算是几位数
//		int count = 1;
//		int j;
//		for (j = 1; j <= 6; j++)
//		{
//			if (n / pow(10, j) != 0)
//			{
//				count++;
//			}
//		}
//		int account = 0;
//		for (int k = count; k > 0; k--)
//		{
//			int a = n / pow(10, k);
//			int b = n / pow(10, k - 1);
//			if (a > b)
//			{
//				account++;
//			}
//		}
//		if (account == count)
//		{
//			sum++;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	// 请在此输入您的代码
//	int n;
//	scanf_s("%d", &n);
//	int ret = calc(n);
//	printf("%d\n", ret);
//	return 0;
//}
//本题要求从数组中删除指定数x，然后输出删除后的数组元素。
//如果x不存在于数组中，提示“Not found x"，其中的x是具体数值。
//#define N 10
//int main()
//{
//	//本题假设数组中顶多存在一个要找的x
//	int a[N], i, j, x;
//	for (i = 0; i < N; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &x);
//	int flag = 0;  //预设标志
//	for (i = 0; i < N; i++) //依次查找数组中是否有x
//	{
//		if (		)
//		{
//			(    )
//			//设置找到标志
//			for (j =	; j <	; j++)
//				a[j] = a[j + 1];
//			break;
//		}
//	}
//	if ( )
//		for (i = 0; i < N - 1; i++)
//			if (i == 0)
//				printf("%d", a[i]);
//			else
//				printf(" %d", a[i]);
//	else
//		printf("Not found %d", x);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#define N 80
//int main(void)
//{
//	int k;
//	for (k = 1; k <= 3; k++) { //该循环用于自动阅卷，请考生忽略
//		char s[N];
//		int i, j;
//		scanf("%s", &s);
//		//输入一个字符串，存入字符数组s中
//		i = 0;  //字符串首端字符对应数组元素的下标
//		j = strlen(s) - 1;  //字符串尾端字符对应数组元素的下标
//		while (i < j)
//		{
//			if (s[i] == s[j])
//			{
//				i++;
//				j--;
//			}
//			else
//				break;
//		}
//		if (i >= j)
//			printf("Yes!\n");
//		else
//			printf("No!\n");
//	} //该循环用于自动阅卷，请考生忽略
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", a[i]);
//		if (a[i] > max)
//			max = a[i];
//	}
//}
//int main()
//{
//	int n;
//	if (scanf("%d", &n) != 1 || n <= 0)
//	{
//		return 0;
//	}
//	int a[10000];
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("%d\n", max);
//	for (int k = 1; k <= max; k++)
//	{
//		int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] >= k)
//				count++;
//		}
//		printf("%d", count);
//		if (k != max) 
//			printf(" ");
//	}
//	printf("\n");
//	return 0;
//}
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	int a[100];
//	int max = 0;
//	for (int i = 0; i < n; i++) 
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	printf("%d\n", max);
//	int arr[100][100] = { 0 };
//	for (int col = 0; col < n; col++) 
//	{
//		for (int row = 0; row < a[col]; row++) 
//		{ 
//			arr[row][col] = 1;
//		}
//	}
//	for (int r = 0; r < max; r++) 
//	{
//		int count = 0;
//		for (int c = 0; c < n; c++) 
//		{
//			if (arr[r][c] == 1) 
//				count++;
//		}
//		printf("%d ", count);
//	}
//	printf("\n");
//	return 0;
//}
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	int* a = (int*)malloc(n * sizeof(int));
//	int max = 0;
//	for (int i = 0; i < n; i++) 
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > max) 
//			max = a[i];
//	}
//	int* freq = (int*)calloc(max + 2, sizeof(int));
//	for (int i = 0; i < n; i++) 
//	{
//		freq[a[i]]++;
//	}
//	int* count = (int*)malloc((max + 2) * sizeof(int));
//	count[max] = freq[max];
//	for (int r = max - 1; r >= 1; r--) 
//	{
//		count[r] = count[r + 1] + freq[r];
//	}
//	printf("%d\n", max);
//	for (int r = 1; r <= max; r++) 
//	{
//		printf("%d ", count[r]);
//	}
//	printf("\n");
//	free(a);
//	free(freq);
//	free(count);
//	return 0;
//}
//#define MAXN 1005  // 假设最大长度
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	// 顺序表 a 存储初始高度
//	int a[MAXN];
//	int max_h = 0;
//	// 顺序表初始化（输入）
//	for (int i = 0; i < n; i++) 
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > max_h) 
//		{
//			max_h = a[i];
//		}
//	}
//	// 新顺序表 res 的长度为 max_h
//	int m = max_h;
//	int res[MAXN];
//	// 构建新顺序表：res[k-1] 表示新第 k 列的高度
//	for (int k = 1; k <= m; k++) 
//	{
//		int count = 0;
//		// 遍历顺序表 a，统计 a[i] >= k 的元素个数
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] >= k) 
//			{
//				count++;
//			}
//		}
//		res[k - 1] = count;  // 顺序表 res 下标从 0 开始
//	}
//	// 输出新顺序表的长度 m
//	printf("%d\n", m);
//	// 顺序表遍历输出
//	for (int i = 0; i < m; i++) 
//	{
//		printf("%d", res[i]);
//		if (i != m - 1) 
//		{
//			printf(" ");
//		}
//	}
//	printf("\n");
//	return 0;
//}
//
//#include <stdio.h>
//int main() 
//{
//	char  s[] = "abcde";
//	s += 2;
//	printf("%d\n", s[0]);
//}//error
//假设scanf语句执行时输入ABCDE<回车>，能使puts(s)语句正确输出ABCDE字符串的程序段是__。    D
//A.
//char s[5] = { "ABCDE" }; puts(s);
//B.
//char s[5] = { 'A', 'B', 'C', 'D', 'E' }; puts(s);
//C.
//char* s; scanf("%s", s); puts(s);
//D.
//char* s; s = "ABCDE"; puts(s);
//以下哪一种对于str的定义不恰当，有可能使strlen(str)（strlen是定义在C标准库中的函数）获得非预期的结果：  C
//A.
//char str[] = "hello world!";
//B.
//char str[100] = "X";
//C.
//char str[4] = "abcd";
//D.
//char str[6] = { 65, 66, 67, 68, 69, 0 };
//若有说明语句：char c[] = "\n"，则c（ ）。           B
//A.
//包含1个字符
//B.
//包含2个字符
//C.
//包含3个字符
//D.
//长度不定
//error
//int main()
//{
//	char  s[] = "abcde";
//	s += 2;
//	printf("%d\n", s[0]);
//}
//替换空格   
//当字符串为“We Are Happy“.则经过替换之后的字符串为“We%20Are%20Happy“
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch != ' ')
//			putchar(ch);
//		else
//			printf("%%20");
//	}
//	return 0;
//}
//替换空格
//char* replaceSpace(char* s) 
//{
//	assert(s);
//	if (s == NULL) 
//		return NULL;
//	// 统计空格数量和计算新长度
//	int len = strlen(s);
//	int space_count = 0;
//	for (int i = 0; i < len; i++) 
//	{
//		if (s[i] == ' ') 
//		{
//			space_count++;
//		}
//	}
//	// 新长度 = 原长度 + 空格数量 * 2（因为每个空格替换为3个字符，净增2个）
//	int new_len = len + space_count * 2;
//	// 分配新内存（+1 是为了存放字符串结束符 '\0'）
//	char* result = (char*)malloc(sizeof(char) * (new_len + 1));
//	if (result == NULL) return NULL;
//	// 从后往前填充，避免频繁移动
//	int i = len - 1;        // 原字符串指针（从末尾开始）
//	int j = new_len - 1;    // 新字符串指针（从末尾开始）
//	result[new_len] = '\0'; // 设置结束符
//	while (i >= 0) 
//	{
//		if (s[i] == ' ') 
//		{
//			// 替换空格为 "%20"
//			result[j--] = '0';
//			result[j--] = '2';
//			result[j--] = '%';
//		}
//		else 
//		{
//			// 普通字符直接复制
//			result[j--] = s[i];
//		}
//		i--;
//	}
//	return result;
//}
//#include <ctype.h>
//int main() 
//{
//	char str[35];
//	int ssum = 0;
//	while (fgets(str, sizeof(str), stdin))
//	{
//		str[strcspn(str, "\n")] = '\0';
//		if (strcmp(str, "***") == 0) 
//		{
//			break;
//		}
//		char str2[3] = { 0 };
//		int count = 0;
//		for (int i = strlen(str) - 1; i >= 0; i--)
//		{
//			if (isdigit((unsigned char)str[i]))
//			{
//				str2[count++] = str[i];
//				if (count == 2) 
//				{
//					break;
//				}
//			}
//		}
//		if (count == 0) 
//		{
//			continue; 
//		}
//		else 
//		{
//			int num = 0;
//			for (int i = 0; i < count; i++) 
//			{
//				num = num * 10 + (str2[i] - '0');
//			}
//			ssum += num;
//		}
//	}
//	printf("%d\n", ssum);
//	return 0;
//}
//void PeoOut(int* arr, int num)
//{
//	assert(arr && num);
//	//printf("%d ", num);
//	//arr[num - 1] = 0;
//	int count = 0;
//	int putcount = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			count++;
//			if (count == num)
//			{
//				arr[i] = 0;
//				count = 0;
//				printf("%d ", i + 1);
//				putcount++;
//			}
//		}
//		if (putcount < 10 && i == 9)
//			i = -1;
//		if (putcount == 10)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	int num;
//	scanf("%d", &num);
//	PeoOut(arr, num);
//	return 0;
//}