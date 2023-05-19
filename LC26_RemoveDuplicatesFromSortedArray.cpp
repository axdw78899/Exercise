//LC26 Remove Duplicates from Sorted Array
//[0,1,1,2,2] 5 ->[0,1,2] 3 
#include <stdio.h>
#include <stdlib.h>
int removeDuplicates(int* nums, int numsSize) {
    //建立新的計數器 
    int count = 0;//數有多少相同 
    int i = 0;
    int newSize = numsSize;
    for (i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) { //相同,計數 
            count = count + 1;
            newSize = newSize - 1;
        }
        else	//不同,拉回去 
        {
            nums[i + 1 - count] = nums[i + 1];
        }

    }
    return newSize;
}
int main() {
    int arr[5] = {0,1,1,2,2 };
    int Size = 5;

    int ans = removeDuplicates(arr, 5);
    printf("%d \n", ans);
    return 0;
}
