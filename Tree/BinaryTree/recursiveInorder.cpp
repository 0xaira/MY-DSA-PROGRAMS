#include <bits/stdc++.h>
using namespace std;
// Recursive function to perform inorder traversal on the tree

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
void inorder(Node* root)
{
    // if the current node is empty
    if (root == nullptr) {
        return;
    }

    // Traverse the left subtree
    inorder(root->left);

    // Display the data part of the root (or current node)
    cout << root->data << " ";

    // Traverse the right subtree
    inorder(root->right);
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

    inorder(root);

    return 0;
}