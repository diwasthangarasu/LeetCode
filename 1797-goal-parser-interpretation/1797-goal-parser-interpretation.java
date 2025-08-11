class Solution {
    public String interpret(String command) {
        String a= command.replace("()","o");
        String b=a.replace("(al)","al");
        return b;
    }
}