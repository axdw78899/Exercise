//LC35 Search Insert Position

int searchInsert(int* nums, int numsSize, int target){
    int min = 0;
    int max = numsSize-1;
    int mid =0;

    while (max >= min){
        mid = (max+min)/2;//int µL¤p¼Æ 
        if (nums[mid]==target)
            return mid;
        else if (target < nums[mid])
            max=mid-1;
        else
            min=mid+1;
    }   
    return min;
}
