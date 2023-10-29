#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
public:
    TreeNode* root;

    BinarySearchTree() : root(nullptr) {}

    // Insertion
    void insert(int data) {
        root = insertRec(root, data);
    }

    TreeNode* insertRec(TreeNode* root, int data) {
        if (root == nullptr) {
            return new TreeNode(data);
        }
        if (data < root->data) {
            root->left = insertRec(root->left, data);
        } else if (data > root->data) {
            root->right = insertRec(root->right, data);
        }
        return root;
    }

    // Inorder Traversal (Left-Root-Right)
    void inorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            std::cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }
};

int main() {
    BinarySearchTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Inorder Traversal:" << std::endl;
    tree.inorderTraversal(tree.root);

    return 0;
}
