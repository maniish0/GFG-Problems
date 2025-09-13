class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        if (arr.empty()) return nullptr; // empty array -> empty list

        // Create head node
        Node* head = new Node(arr[0]);
        Node* tail = head;

        // Insert remaining nodes
        for (int i = 1; i < arr.size(); i++) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        return head; // return head of constructed list
    }
};
