class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        double mn;
        int len = nums1.length + nums2.length;
        int[] n = new int[len];
        for (int i =0 ; i<nums1.length ; i++){
            n[i]=nums1[i];
        }
        for (int i =0 ; i<nums2.length ; i++){
            n[i+nums1.length]=nums2[i];
        }
        Arrays.sort(n);
        if (len%2==0){
            double a =(n[len/2-1]+n[len/2])/2.0;
            return a;
        }
        else{
            return n[len/2];
        }
        
    }
}