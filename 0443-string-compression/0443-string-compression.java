class Solution {
    public int compress(char[] chars) {
        char flag = chars[0];
        int count = 1;
        int index = 0;

        for (int i = 1; i < chars.length; i++) {
            if (chars[i] == flag) {
                count++;
            } else {
                chars[index++] = flag;

                if (count > 1) {
                    String s = String.valueOf(count);
                    for (char c : s.toCharArray()) {
                        chars[index++] = c;
                    }
                }

                flag = chars[i];
                count = 1;
            }
        }

        // handle last group
        chars[index++] = flag;

        if (count > 1) {
            String s = String.valueOf(count);
            for (char c : s.toCharArray()) {
                chars[index++] = c;
            }
        }

        return index;
    }
}