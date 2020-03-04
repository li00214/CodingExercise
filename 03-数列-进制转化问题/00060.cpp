#include<cstdio>
#include<cstring>
#include<cmath>
#include <fstream>//文件操作
using namespace std;
//十进制转换为任意进制
int main()
{
    //long long n, k;
    long long n, k, ans = 0, a = 1;
    freopen("sequence.in","r",stdin);
    freopen("sequence.out","w",stdout);
    scanf("%lld%lld", &k, &n);
	//while(scanf("%lld %lld", &k, &n)!=EOF){
        ans=0;
        a=1;
        while(n)
        {
            ans += (n & 1) * a;
            a *= k;
            n >>= 1;
        }
    printf("%lld", ans);

    //}
    return 0;
}
/*
int main()
{
	int n, k, ans = 0, a = 1;
	scanf("%d %d", &k, &n);
	while(n)
	{
		ans += (n & 1) * a;
		a *= k;
		n >>= 1;
	}
	printf("%d\n", ans);
	return 0;
}*/

