class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int[] a = new int[58];
        int count=0;
        for(int i=0;i<stones.length();i++){
            a[(int)stones.charAt(i)-65]++;
        }
        for(int i=0;i<jewels.length();i++){
            count+=a[(int)jewels.charAt(i)-65];
        }
        return count;
    }
}
