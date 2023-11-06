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

void mark_parents(Node* root, unordered_map<Node*, Node*>& parent){
    if(root == nullptr){
        return;
    }
    if(root->left){
        parent[root->left] = root;
        mark_parents(root->left, parent);
    }
    if(root->right){
        parent[root->right] = root;
        mark_parents(root->right, parent);
    }
}

vector<int> distance (Node* root, Node* target, int k){
    unordered_map<Node*, Node*> parent;
    mark_parents(root, parent);
    queue<Node*> q;
    q.push(target);
    unordered_set<Node*> visited;
    visited.insert(target);
    int level = 0;
    while(!q.empty()){
        int size = q.size();
        if(level == k){
            vector<int> ans;
            while(!q.empty()){
                ans.push_back(q.front()->data);
                q.pop();
            }
            return ans;
        }
        for(int i = 0; i < size; i++){
            Node* curr = q.front();
            q.pop();
            if(curr->left && visited.find(curr->left) == visited.end()){
                q.push(curr->left);
                visited.insert(curr->left);
            }
            if(curr->right && visited.find(curr->right) == visited.end()){
                q.push(curr->right);
                visited.insert(curr->right);
            }
            if(parent[curr] && visited.find(parent[curr]) == visited.end()){
                q.push(parent[curr]);
                visited.insert(parent[curr]);
            }
        }
        level++;
    }
    return {};
}


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
     
    vector<int> ans = distance(root, root->right->left, 4);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}