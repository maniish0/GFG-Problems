class Solution {
  public:
    Node* insertAtEnd(Node* head, int x) {
        // Create new node with value x
        Node* newNode = new Node(x);

        // If list is empty, return new node as head
        if (head == nullptr) {
            return newNode;
        }

        // Traverse to the last node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Attach new node at the end
        temp->next = newNode;

        // Return original head
        return head;
    }
};
