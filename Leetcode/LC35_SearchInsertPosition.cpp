// LC35_SearchInsertPosition.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 給定一個排序陣列和一個目標值，在陣列中找到目標值，並返回其索引。
// 如果目標值不存在於陣列中，返回它將會被按順序插入的位置。
// 
// Input: [1,3,5,6], 5
// Output: 2
//用二元搜尋法做
#include <stdio.h>
#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target) {
    int min = 0;
    int max = numsSize - 1;
    int mid = 0;

    while (max >= min) {
        mid = (max + min) / 2;//中間
        if (nums[mid] == target)
            return mid;
        else if (target < nums[mid])
            max = mid - 1;
        else
            min = mid + 1;
    }
    return min;
}

int main() {
    int arr[4] = { 1,3,5,6 };
    int Size = 4;
    int target1 = 5;

    int ans = searchInsert(arr,Size, target1);
    printf("%d \n", ans);

    int target2 = 2;
     ans = searchInsert(arr, Size, target2);
    printf("%d \n", ans);
    return 0;
}
