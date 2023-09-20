#include <bits/stdc++.h>
using namespace std;
//Iterative Preoder Traversal

class Node {
public:
    int data;
    Node* left;
    Node* right;
    // Val is the key or the value that
    // has to be added to the data part
    Node(int val)
    {
        data = val;
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};

void iterativePreorder(Node* root) {

    vector<int> preOrder;
    if(root == NULL) {
        return;
    }
    stack<Node*> st;
    st.push(root);
    while (!st.empty()) {
        Node* node = st.top();
        st.pop();
        preOrder.push_back(node->data);
        if(node->right != NULL) {
            st.push(node->right);
        }
        if(node->left != NULL) {
            st.push(node->left);
        }
    }
    for (int i = 0; i < preOrder.size(); i++) {
        cout << preOrder[i] << " ";
    }
}

// main function

int main()
{
    /* Construct the following tree
              1
            /   \
           /     \
          2       3
         / \     / \
        4   5   6   7
    */

    Node* root = nullptr;
    root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    root->right->left = new Node(5);
    root->right->right = new Node(6);

    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    

    iterativePreorder(root);
    return 0;
}