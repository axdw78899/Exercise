//LC26 Remove Duplicates from Sorted Array
//[0,1,1,2,2] 5 ->[0,1,2] 3 
int removeDuplicates(int* nums, int numsSize){
	//�إ߷s���p�ƾ� 
    int count=0;//�Ʀ��h�֬ۦP 
    int i=0;
    int newSize=numsSize; 
    for(i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){ //�ۦP,�p�� 
            count=count+1;
            newSize=newSize-1;
        }
        else	//���P,�Ԧ^�h 
        {
            nums[i+1-count]=nums[i+1];
        }
        
    }
    return newSize;
}
