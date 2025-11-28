class Solution {
    public ListNode reverseEvenLengthGroups(ListNode head) {
        ListNode prev = head;
        ListNode curr = head.next;
        int group = 2;

        while (curr != null) {
            int count = 0;
            ListNode start = curr;

            // count nodes in this group
            while (curr != null && count < group) {
                curr = curr.next;
                count++;
            }

            if (count % 2 == 1) {   // odd group → skip
                prev = start;
                for (int i = 1; i < count; i++) prev = prev.next;
            } else {                // even group → reverse
                ListNode newHead = reverse(start, count);

                prev.next = newHead;
                start.next = curr;
                prev = start;
            }

            group++;
        }

        return head;
    }

    private ListNode reverse(ListNode head, int k) {
        ListNode prev = null, curr = head;

        while (k-- > 0) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev; // new head
    }
}
