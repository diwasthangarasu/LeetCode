class Solution {
    public int findFinalValue(int[] nums, int original) {
        Arrays.sort(nums);
        int value = original;
        
        for (int num : nums) {
            if (num == value) {
                value *= 2; 
            }
        }
        
        return value;
    }
}
