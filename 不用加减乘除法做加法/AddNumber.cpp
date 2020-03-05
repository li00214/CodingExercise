#include <stdio.h>
#include<vector>
#include<cstdlib>
using namespace std;
#define N 10000

int sum(int num1, int num2) {
/*
    _asm{
        MOV EAX, num1
        MOV ECX, num2
        ADD EAX, ECX
    }*/
        //二进制计算过程
        //5+7 各位相加：101^111=010 进位：101&111=101 (<<1=1010)
        //2+10 各位相加：010^1010=1000 进位：010&1010=010 <<1=0100
        //8+4 1000^0100=1100 1000&0100=0
        //12+0
        int temp = 0;
        while(num2 != 0){
            temp = num1 ^ num2;
            num2 = ( num1 & num2 ) << 1;
            num1 = temp;
        }
        return num1;
    //return result;
}

int main()
{
    int num1, num2;
    while(scanf("%d %d", &num1, &num2) != EOF)
    {
        printf("%d\n",sum(num1, num2));
    }
    return 0;
}
