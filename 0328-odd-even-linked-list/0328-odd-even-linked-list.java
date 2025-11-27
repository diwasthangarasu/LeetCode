class Solution {
    public ListNode oddEvenList(ListNode head) {

        if (head == null || head.next == null)
            return head;

        ListNode odd = head;
        ListNode even = head.next;
        ListNode evenHead = even;

        while (even != null && even.next != null) {
            odd.next = even.next;   // link odd list
            odd = odd.next;

            even.next = odd.next;   // link even list
            even = even.next;
        }

        odd.next = evenHead;  // join odd + even lists

        return head;
    }
}
