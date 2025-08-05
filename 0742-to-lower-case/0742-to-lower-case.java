class Solution {
    public String toLowerCase(String s) {
        String a="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)<91 && s.charAt(i)>64){
                a+=(char)(s.charAt(i)+32);
            }
            else a+=s.charAt(i);
        }
        return a;
    }
};