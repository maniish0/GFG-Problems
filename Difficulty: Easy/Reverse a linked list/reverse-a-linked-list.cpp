/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
public:
    Node* reverseList(Node* head) {
        if (head == NULL) return NULL;

        stack<Node*> st;
        Node* temp = head;

        //  Push all nodes into the stack
        while (temp != NULL) {
            st.push(temp);
            temp = temp->next;
        }

        //  Pop to rebuild reversed list
        Node* newhead = st.top();
        st.pop();
        temp = newhead;

        while (!st.empty()) {
            temp->next = st.top();
            st.pop();
            temp = temp->next;
        }
        temp->next = NULL;

        return newhead;
    }
};
