#include <bits/stdc++.h>
using namespace std;
// Recursive function to perform postorder traversal on the tree

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
void postorder(Node* root)
{
    // if the current node is empty
    if (root == nullptr) {
        return;
    }

    // Traverse the left subtree
    postorder(root->left);

    // Traverse the right subtree
    postorder(root->right);

    // Display the data part of the root (or current node)
    cout << root->data << " ";
}

// main function

int main()
{
    /* Construct the following tree
              1
            /   \
           /     \
          2       3
         /      /   \
        /      /     \
       4      5       6
             / \
            /   \
           7     8
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

    postorder(root);

    return 0;
}