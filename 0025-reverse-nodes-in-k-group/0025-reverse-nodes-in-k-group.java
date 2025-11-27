class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode temp = head;
        ListNode left = null;
        ListNode right = null;
        ListNode prev = null;      
        ListNode prevleft = null; 
        ListNode newHead = head;  

        int a = 1;

        while (temp != null) {

            if (a == 1) {        
                prevleft = prev;   
                left = temp;       
            }

            if (a == k) {          
                right = temp;      
                ListNode rightnext = temp.next;
                temp.next = null;  
                ListNode rev = reverseInterval(left);
                if (prevleft == null) {
                    newHead = rev;
                } else {
                    prevleft.next = rev; 
                }
                ListNode tail = rev;
                while (tail.next != null) {
                    tail = tail.next;
                }
                tail.next = rightnext;
                prev = left;
                temp = rightnext;
                a = 1;
                continue;
            }

            prev = temp;
            temp = temp.next;
            a++;
        }

        return newHead;
    }

    public ListNode reverseInterval(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        ListNode temp;

        while (curr != null) {
            temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
}
