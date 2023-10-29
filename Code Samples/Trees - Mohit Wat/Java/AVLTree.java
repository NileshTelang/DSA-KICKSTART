class TreeNode {
    int data;
    TreeNode left;
    TreeNode right;
    int height;

    public TreeNode(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
        this.height = 1;
    }
}

public class AVLTree {
    TreeNode root;

    public AVLTree() {
        root = null;
    }

    // Insertion
    public void insert(int data) {
        root = insertRec(root, data);
    }

    private TreeNode insertRec(TreeNode root, int data) {
        if (root == null) {
            return new TreeNode(data);
        }
        if (data < root.data) {
            root.left = insertRec(root.left, data);
        } else if (data > root.data) {
            root.right = insertRec(root.right, data);
        }
        root.height = 1 + Math.max(height(root.left), height(root.right));
        int balance = getBalance(root);
        if (balance > 1) {
            if (data < root.left.data) {
                return rightRotate(root);
            } else {
                root.left = leftRotate(root.left);
                return rightRotate(root);
            }
        }
        if (balance < -1) {
            if (data > root.right.data) {
                return leftRotate(root);
            } else {
                root.right = rightRotate(root.right);
                return leftRotate(root);
            }
        }
        return root;
    }

    // Inorder Traversal (Left-Root-Right)
    public void inorderTraversal(TreeNode node) {
        if (node != null) {
            inorderTraversal(node.left);
            System.out.print(node.data + " ");
            inorderTraversal(node.right);
        }
    }

    // Helper methods for AVL tree balance
    private int height(TreeNode node) {
        return (node != null) ? node.height : 0;
    }

    private int getBalance(TreeNode node) {
        return (node != null) ? height(node.left) - height(node.right) : 0;
    }

    private TreeNode rightRotate(TreeNode y) {
        TreeNode x = y.left;
        TreeNode T2 = x.right;
        x.right = y;
        y.left = T2;
        y.height = Math.max(height(y.left), height(y.right)) + 1;
        x.height = Math.max(height(x.left), height(x.right)) + 1;
        return x;
    }

    private TreeNode leftRotate(TreeNode x) {
        TreeNode y = x.right;
        TreeNode T2 = y.left;
        y.left = x;
        x.right = T2;
        x.height = Math.max(height(x.left), height(x.right)) + 1;
        y.height = Math.max(height(y.left), height(y.right)) + 1;
        return y;
    }

    public static void main(String[] args) {
        AVLTree tree = new AVLTree();
        tree.insert(50);
        tree.insert(30);
        tree.insert(70);
        tree.insert(20);
        tree.insert(40);
        tree.insert(60);
        tree.insert(80);

        System.out.println("Inorder Traversal:");
        tree.inorderTraversal(tree.root);
    }
}
