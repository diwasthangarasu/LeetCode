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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l3=reverse(l1);
        ListNode l4=reverse(l2);

        ListNode head=new ListNode(0);
        ListNode temp=head;
        int carry=0;
        while(l3!=null || l4!=null){
            int sum=carry;
            if(l3!=null){
                sum+=l3.val;
                l3=l3.next;
            }
            if(l4!=null){
                sum+=l4.val;
                l4=l4.next;
            }
            carry=sum/10;
            head.next=new ListNode(sum%10);
            head=head.next;
        }
        if(carry>0) head.next=new ListNode(carry);
        ListNode rev=reverse(temp.next);
        return rev;
    }
    public ListNode reverse(ListNode head){
        ListNode curr=head;
        ListNode prev=null;
        ListNode temp;
        while(curr!=null){
            temp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;

        }
        return prev;
    }
}