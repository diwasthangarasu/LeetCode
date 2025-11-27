class Solution {
    public int getDecimalValue(ListNode head) {
        ListNode curr=head;
        ListNode prev=null;
        ListNode temp;
        while(curr!=null){
            temp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
        }
        int ans=prev.val;
        prev=prev.next;
        int i=2;
        while(prev!=null){
            ans+=prev.val*i;
            i*=2;
            prev=prev.next;
        }
        return ans;
    }
}