#define _CRT_SECURE_NO_WARNINGS 1
#include "main.h"
using namespace std;
//const int N = 1e5 + 10;
//int cnt[N], kinds;
//typedef pair<int, int>PII;
//queue<PII>q;//时间和国家绑定<时间,国家>
//int main()
//{
//    int n; cin >> n;
//    while (n--)
//    {
//        int t, k; cin >> t >> k;
//        for (int i = 1; i <= k; i++)
//        {
//            int x; cin >> x;
//            q.push({ t,x });
//            if (cnt[x]++ == 0) kinds++;
//        }
//        while (q.size() && q.back().first - q.front().first >= 86400)
//        {
//            PII tmp = q.front();
//            q.pop();
//            int x = tmp.second;
//            if (cnt[x]-- == 1) kinds--;
//        }
//        cout << kinds << endl;
//    }
//    return 0;
//}
