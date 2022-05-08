//LC27 Remove Element
//[3,2,2,3] 3 ->把3刪掉 ->  [2,2]
int removeElement(int* nums, int numsSize, int val){
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==val)
            count=count+1; //count有多少數被砍 
        else
            nums[i-count]=nums[i];//用 i-count 拉回 
    }
    //     [0,1,2,2,3,0,4,2] val=2
	//	   [0,1,_,_,3,0,4,_] 
	//count:0 0 1 2 2 2 2 3 
	//i=0,1,4,5,6 -> i-count=0,1,2,3,4
    return numsSize-count;//總數 
}
