#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    /*
     N-->��Ǯ��
     m-->ϣ��������Ʒ�ĸ���
     v-->��Ʒ�ļ۸�
     p-->��Ʒ����Ҫ��
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
