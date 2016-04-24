#ifndef BINARYTREE_H
#define	BINARYTREE_H

struct TreeNode {
    int value;
    TreeNode *left;
    TreeNode *right;
};

TreeNode *newTreeNode(int value);
TreeNode* insert(TreeNode *root, int value);
bool contains(TreeNode *root, int value);
void print(TreeNode *node);
void clearBinaryTree(TreeNode *node);

#endif