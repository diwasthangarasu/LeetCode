class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {

        if (head == null || left == right) return head;

        ListNode leftPrev = null;   // node before left
        ListNode leftNode = head;   // node at left
        ListNode rightNode = head;  // node at right
        ListNode rightNext = null;  // node after right

        int i = 1;
        ListNode temp = head;
        while (temp != null) {

            if (i == left - 1)
                leftPrev = temp;

            if (i == left)
                leftNode = temp;

            if (i == right) {
                rightNode = temp;
                rightNext = temp.next;
                rightNode.next = null;   // cut
            }

            temp = temp.next;
            i++;
        }

        ListNode reversedHead = reverseSegment(leftNode);

        if (leftPrev == null)
            head = reversedHead;
        else
            leftPrev.next = reversedHead;

        ListNode tail = reversedHead;
        while (tail.next != null)
            tail = tail.next;

        tail.next = rightNext;

        return head;
    }

    private ListNode reverseSegment(ListNode head) {
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
