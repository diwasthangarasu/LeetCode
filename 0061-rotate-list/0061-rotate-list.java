class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null ||head.next==null) return head;
        int len=0;
        ListNode temp=head;
        while(temp.next!=null){
            len++;
            temp=temp.next;
        }
        len++;
        ListNode arr=head;
        k=k%len;
        for(int i=1;i<len-k;i++){
            arr=arr.next;
        }
        temp.next=head;
        head=arr.next;
        arr.next=null;
        return head;


    }
}