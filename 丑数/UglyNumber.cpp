#include <stdio.h>
#include<vector>
#include<cstdlib>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define N 10000

int generateRandomArray(int maxSize) {
    int arr = (int) (rand()%(maxSize + 1));
    return arr;
}
bool isEqual(int num1, int num2){//(int[] arr1, int[] arr2) {
    /*if ((arr1 == null && arr2 != null) || (arr1 != null && arr2 == null)) {
        return false;
    }
    if (arr1 == null && arr2 == null) {
        return true;
    }
    if (arr1.length != arr2.length) {
        return false;
    }
    for (int i = 0; i < arr1.length; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;*/
    if(num1 != num2){
        return false;
    }else{
        return true;
    }
}
int rightFunction(int index) {
    int number = 0, i = 7;
    int count = 0;
    int temp, temp2;
    //printf("rightFunction:%d\n",index);
    if(index <= 6){
        return index;
    }else{
        temp = index - 6;
        while(temp > number){
            //printf("after   TEMP>NUMBER   %d %d %d \n",temp, number, i);
            temp2 = i;
            while(temp2 != 0){
                //i++;
                while(temp2 % 2 == 0) temp2 = temp2 / 2;
                while(temp2 % 3 == 0) temp2 = temp2 / 3;
                while(temp2 % 5 == 0) temp2 = temp2 / 5;
                if(temp2 == 1){
                    number++;
                    break;
                }else{
                    break;
                }
            }
            //printf("beforeMMMM   TEMP>NUMBER   %d %d %d \n",temp, number, i);
            i++;
        }
    }
    return i-1;
}


int uglyNumber(int index) {
        int number =0, i;
        vector<int> a(index);

        int t2 = 0,t3 = 0,t5 = 0;  //记录每个因子的个数
        if(index <= 6){
            return index;
        }else{
            a[0] = 1;
            for(int i = 1; i < index; i++)
            {
                a[i] = min(min(a[t2] * 2, a[t3] * 3), a[t5] * 5);
                if(a[i] == a[t2] * 2) t2++;
                if(a[i] == a[t3] * 3) t3++;
                if(a[i] == a[t5] * 5) t5++;
            }
            return a[index - 1];
        }
}
/*
int main()
{
    int num1, num2;
    while(scanf("%d", &num1) != EOF)
    {
        printf("%d\n",uglyNumber(num1));
    }
    return 0;
}
*/

int main(){
    int testTime = 500;
    bool succeed = true;
    int arr , res1, res2, i;
    for (i = 0; i < testTime; i++) {
        arr = generateRandomArray(testTime + 1);
        res1 = uglyNumber(arr);
        res2 = rightFunction(arr);
        printf("%d  %d   %d\n",arr, res1, res2);
        //int[] arr1 = generateRandomArray(maxSize, maxValue);
        //int[] arr2 = copyArray(arr1);
        //bubbleSort(arr1);
        //comparator(arr2);
        if (!isEqual(res1, res2)) {
            succeed = false;
            break;
        }
    }
    printf(succeed ? "Nice!" : "Agagin!");
    arr = generateRandomArray(testTime + 1);
    res1 = uglyNumber(arr);
    res2 =  rightFunction(arr);
    return 0;
}
