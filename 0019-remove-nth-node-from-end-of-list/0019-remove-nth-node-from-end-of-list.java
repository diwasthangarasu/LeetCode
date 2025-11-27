class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int len=0;
        ListNode temp=head;
        while(temp!=null){
            len++;
            temp=temp.next;
        }

        if (n == len) {
            return head.next;
        }


        ListNode curr=head;
        for(int i=1;i<len-n;i++){
            curr=curr.next;
        }
        curr.next=curr.next.next;
        return head;
    }
}