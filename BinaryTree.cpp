#include <cstdlib>
#include <iostream>
#include "BinaryTree.h"

TreeNode *newTreeNode(int value) {
    TreeNode *t = new TreeNode;
    t->value = value;
    t->left = NULL;
    t->right = NULL;
    return t;
}

TreeNode* insert(TreeNode *root, int value) {
    if (root == NULL)
        root = newTreeNode(value);
    else if (value <= root->value)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    
    return root;
}

bool contains(TreeNode *root, int value) {
    if (root == NULL)
        return false;
    else if (root->value == value)
        return true;
    else if (value < root->value)
        return contains(root->left, value);
    else
        return contains(root->right, value);
}

void print(TreeNode *node) {
    if (node == NULL)
        return;

    std::cout << node->value << std::endl;
    print(node->left);
    print(node->right);
}

void clearBinaryTree(TreeNode *node) {
    if (node == NULL)
        return;

    clearBinaryTree(node->left);
    clearBinaryTree(node->right);
    delete node;
}