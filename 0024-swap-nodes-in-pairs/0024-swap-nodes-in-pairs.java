/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        if(head==null||head.next==null ) return head;
        ListNode temp;
        ListNode curr=head;
        ListNode prev= null;
        ListNode newHead=head.next;
        while(curr!=null&&curr.next!=null){
            temp=curr.next;
            curr.next=temp.next;
            temp.next=curr;
            if(prev!=null){
                prev.next=temp;
            }
            prev=curr;
            curr=curr.next;
        }
        return newHead;
    }
}