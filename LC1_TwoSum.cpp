//LC1 two sum
//給一串數字,組合出target
//2層for迴圈
//(0,1),(0,2),(0,3),(0,4) i=0,j=1,2,3,4
//      (1,2),(1,3),(1,4) i=1,j=  2,3,4 ...
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int i = 0, j = 0;
    int n = numsSize;
    int* resultArr = (int*)malloc(sizeof(int) * 2);
    for(i = 0; i < n-1; i++) {
        for(j = i + 1; j < n; j++) {
            if(target == nums[i] + nums[j]) {
                resultArr[0] = i;
                resultArr[1] = j;
                return resultArr;
            }
        }
    }
    return resultArr;
}
