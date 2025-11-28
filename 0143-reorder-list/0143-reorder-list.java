class Solution {
    public void reorderList(ListNode head) {
        if(head==null || head.next==null )return;
        ListNode slow=head;
        ListNode fast=head;
        while(fast!=null&& fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
    
        ListNode second=reverse(slow.next);
        slow.next=null;
        ListNode first = head;
        while (second != null) {
            ListNode t1 = first.next;
            ListNode t2 = second.next;

            first.next = second;
            second.next = t1;

            first = t1;
            second = t2;
        }

    }
    public ListNode reverse(ListNode head){
        ListNode prev=null;
        ListNode temp;
        while(head!=null){
            temp=head.next;
            head.next=prev;
            prev=head;
            head=temp;
        }
        return prev;
    }
}