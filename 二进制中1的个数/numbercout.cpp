#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
#define N 31

int NumberOf1(int n)
{
    int count = 0;
/*    if(n < 0){
        count = 32;
        while(n != -1){
            if(n%2 == 0){
                count--;
            }
            n>>=1;
            //n = n / 2;
        }
    }else{
        while(n != 0){
            if(n % 2 == 1)
                count++;
            //n = n / 2;
            n>>=1;
        }
    }*/
      unsigned int flag = 1;
      while(flag)
      {
            if(n & flag)
                  count ++;

            flag = flag << 1;
      }

    return count;
/*
else if(n == -2147483648){
        return 1;
    }
*/
}

int main()
{
    int num;
    //getrusage(RUSAGE_SELF, &usage);
    while(scanf("%d",&num)!=EOF)
    {
        printf("%d\n",NumberOf1(num));
    }
    return 0;
}
