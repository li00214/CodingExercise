#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    /*
     N-->总钱数
     m-->希望购买物品的个数
     v-->物品的价格
     p-->物品的重要度
     */
    int N,m,v,p;
    int dp[30001];
    cin >> N >> m;
    for(int i = 0; i < m; i ++){
        cin >> v >> p;
        for(int j = N; j >= v; j --){
            dp[j] = max(dp[j],dp[j-v]+v*p);
            //printf("%d %d  %d  %d  %d \n",j, max(dp[j],dp[j-v]+v*p), (dp[j]), (dp[j-v]+v*p), dp[j-v]);
        }
    }
    /*for(int i = 0; i < N*2; i ++){
        cout<<dp[i]<<"  ";
    }
    cout<<endl;*/
    cout << dp[N];
    return 0;
}
