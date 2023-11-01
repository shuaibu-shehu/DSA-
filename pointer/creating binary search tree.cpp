#include <iostream>
using namespace std;

// Define the structure for a BST node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(NULL), right(NULL) {}
};

// Function to insert a new value into the BST
TreeNode* insert(TreeNode* root, int value) {
    if (root == NULL) {
        return new TreeNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to create a BST from an array
TreeNode* createBST(int arr[], int n) {
    TreeNode* root = NULL;
    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }
    return root;
}

// In-order traversal: Left-Root-Right
void inOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Pre-order traversal: Root-Left-Right
void preOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    std::cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Post-order traversal: Left-Right-Root
void postOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
	cout << root->data << " ";
}

int main() {
    int arr[] = {1, 5, 15, 3, 17, 12, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    TreeNode* root = createBST(arr, n);

    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout <<endl;

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

