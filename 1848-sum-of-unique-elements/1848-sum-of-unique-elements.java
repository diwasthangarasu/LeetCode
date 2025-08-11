class Solution {
    public int sumOfUnique(int[] nums) {
        int[] a=new int[101];
        for(int i:nums){
            a[i]++;
        }
        int b=0;
        for(int i:nums){
            if(a[i]==1){
                b+=i;
            }
        }
        return b;
    }
}