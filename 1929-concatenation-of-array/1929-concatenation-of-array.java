class Solution {
    public int[] getConcatenation(int[] nums) {
        int b=nums.length;
        int len=b*2;
        int[] a=new int[len];
        for(int i=0;i<len;i++){
            a[i]=nums[i%b];
        }
        return a;
    }
}