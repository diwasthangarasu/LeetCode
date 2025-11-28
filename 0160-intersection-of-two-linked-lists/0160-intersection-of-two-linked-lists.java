public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        HashSet<ListNode> a=new HashSet<>();
        while(headA!=null){
            a.add(headA);
            headA=headA.next;
        }
        while(headB!=null){
            if(a.contains(headB)){
                return headB;
            }
            headB=headB.next;
        }
        return null;
    }
}