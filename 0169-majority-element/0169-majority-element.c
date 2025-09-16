int majorityElement(int* nums, int numsSize) {
    int c=0;
    int num;
    for(int i=0;i<numsSize;i++){
        if(c==0) num=nums[i];
        if(nums[i]==num) c++;
        else c--;;
    }
    return num;
}