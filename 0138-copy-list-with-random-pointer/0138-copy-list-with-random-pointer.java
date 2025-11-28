class Solution {
    public Node copyRandomList(Node head) {
        if (head == null) return null;

        HashMap<Node, Node> map = new HashMap<>();
        Node node = head;
        Node newHead = new Node(node.val);
        map.put(node, newHead);

        Node copy = newHead;
        node = node.next;

        while (node != null) {
            Node newNode = new Node(node.val);
            copy.next = newNode;
            map.put(node, newNode);

            copy = newNode;
            node = node.next;
        }

        node = head;
        copy = newHead;

        while (node != null) {
            copy.random = (node.random != null) ? map.get(node.random) : null;
            node = node.next;
            copy = copy.next;
        }

        return newHead;
    }
}
