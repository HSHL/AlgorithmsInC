#include "BinaryTreeTest.h"
#include "BinaryTree.h"
#include "UnitTesting.h"
#include <iostream>

void newTreeNode_Test() {
    TreeNode *n = newTreeNode(5);
    assertTrue(n->left == NULL, "Left subnode of new binary treenode should be NULL!");
    assertTrue(n->right == NULL, "Right subnode of new binary treenode should be NULL!");
    assertEqual(5, n->value, "Value of new binary treenode should be 5!");
    clearBinaryTree(n);
    
    std::cout << "SUCCESS: execution of BinaryTree::newTreeNode succesfull!" << std::endl;
}

void insert_Test() {
    TreeNode *n = insert(NULL, 5);
    assertEqual(5, n->value, "Value of new binary treenode should be 5!");
    
    insert(n, 10);
    assertFalse(n->right == NULL, "New binary treenode should be on right side!");
    assertEqual(10, n->right->value, "New binary treenode should have value 10!");
    
    insert(n, 2);
    assertFalse(n->left == NULL, "New binary treenode should be on left side!");
    assertEqual(2, n->left->value, "New binary treenode should have value 2!");
    clearBinaryTree(n);
    
    std::cout << "SUCCESS: execution of BinaryTree::insert succesfull!" << std::endl;
}

void contains_Test() {
    TreeNode *n = newTreeNode(5);
    insert(n, 3);
    insert(n, 7);
    insert(n, 1);
    insert(n, 8);
    
    assertTrue(contains(n, 3), "Binary tree should contain 3!");
    assertTrue(contains(n, 8), "Binary tree should contain 8!");
    assertTrue(contains(n, 7), "Binary tree should contain 7!");
    assertTrue(contains(n, 1), "Binary tree should contain 1!");
    assertFalse(contains(n, 19), "Binary tree should not contain 19!");
    assertFalse(contains(n, 2), "Binary tree should not contain 2!");
    clearBinaryTree(n);

    std::cout << "SUCCESS: execution of BinaryTree::contains succesfull!" << std::endl;
}

void run_all_BinaryTree_Tests() {
    std::cout << "Executing Tests for BinaryTree!" << std::endl;
    newTreeNode_Test();
    insert_Test();
    contains_Test();
    std::cout << "Execution done!" << std::endl << std::endl;
}