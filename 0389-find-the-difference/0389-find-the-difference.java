class Solution {
    public char findTheDifference(String s, String t) {
        int a=0;
        for(int i=0;i<t.length();i++){
            a^=t.charAt(i);
        }
        for(int i=0;i<s.length();i++){
            a^=s.charAt(i);
        }
        return (char)a;
    }
}