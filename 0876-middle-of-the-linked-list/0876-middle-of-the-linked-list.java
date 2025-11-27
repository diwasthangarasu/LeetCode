class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode temp=head;
        int len=0;
        while(head!=null){
            head=head.next;
            len++;
        }
        for(int i=0;i<len/2;i++){
            temp=temp.next;
        }
        return temp;
    }
}