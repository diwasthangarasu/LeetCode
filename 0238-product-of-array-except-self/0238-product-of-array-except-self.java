class Solution {
    public int[] productExceptSelf(int[] nums) {
        int prod=1;
        int a=0;
        for(int i:nums){
            if(i==0) a++;
            else prod*=i;
        }
        int[] arr=new int[nums.length];
        int j=0;
        for(int i:nums){
            if(a==1){
                arr[j]= (i==0 )?prod : 0;
            }
            else if(a>0) arr[j]=0;
            else{
                arr[j]=prod / i;
            }
            j++;
        }
        return arr;
    }
}