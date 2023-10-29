#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    int height;

    TreeNode(int data) : data(data), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
public:
    TreeNode* root;

    AVLTree() : root(nullptr) {}

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
        root->height = 1 + std::max(height(root->left), height(root->right));
        int balance = getBalance(root);
        if (balance > 1) {
            if (data < root->left->data) {
                return rightRotate(root);
            } else {
                root->left = leftRotate(root->left);
                return rightRotate(root);
            }
        }
        if (balance < -1) {
            if (data > root->right->data) {
                return leftRotate(root);
            } else {
                root->right = rightRotate(root->right);
                return leftRotate(root);
            }
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

    // Helper methods for AVL tree balance
    int height(TreeNode* node) {
        return (node != nullptr) ? node->height : 0;
    }

    int getBalance(TreeNode* node) {
        return (node != nullptr) ? height(node->left) - height(node->right) : 0;
    }

    TreeNode* rightRotate(TreeNode* y) {
        TreeNode* x = y->left;
        TreeNode* T2 = x->right;
        x->right = y;
        y->left = T2;
        y->height = 1 + std::max(height(y->left), height(y->right));
        x->height = 1 + std::max(height(x->left), height(x->right));
        return x;
    }

    TreeNode* leftRotate(TreeNode* x) {
        TreeNode* y = x->right;
        TreeNode* T2 = y->left;
        y->left = x;
        x->right = T2;
        x->height = 1 + std::max(height(x->left), height(x->right));
        y->height = 1 + std::max(height(y->left), height(y->right));
        return y;
    }
};

int main() {
    AVLTree tree;
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
