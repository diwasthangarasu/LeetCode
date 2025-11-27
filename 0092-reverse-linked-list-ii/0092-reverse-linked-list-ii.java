class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {

        if (head == null || left == right) return head;

        int count = 1;
        ListNode prev = null;
        ListNode curr = head;
        ListNode start = null;

        // Move until we reach right
        while (curr != null && count <= right) {

            if (count == left - 1) {   // node before left
                prev = curr;
            }

            if (count == left) {       // node at left
                start = curr;
            }

            curr = curr.next;
            count++;
        }

        // curr is now at right+1
        ListNode rightNext = curr;

        // Cut the list
        ListNode rightNode = start;
        while (rightNode.next != rightNext) {
            rightNode = rightNode.next;
        }
        rightNode.next = null;

        // Reverse [start ... rightNode]
        ListNode reversedHead = reverseSegment(start);

        // Connect prev to reversed head
        if (prev != null) {
            prev.next = reversedHead;
        } else {
            head = reversedHead; // left == 1 case
        }

        // Connect end of reversed segment to rightNext
        ListNode tail = reversedHead;
        while (tail.next != null) {
            tail = tail.next;
        }
        tail.next = rightNext;

        return head;
    }

    private ListNode reverseSegment(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;

        while (curr != null) {
            ListNode temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }

        return prev; // new head of reversed part
    }
}
