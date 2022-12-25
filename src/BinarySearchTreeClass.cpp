/**
 * @file  BinarySearchTreeClass.cpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

#include "BinarySearchTreeClass.hpp"

TreeNode::TreeNode(TreeNode *left, TreeNode *right, Tissue *tissue)
{
    this->left = left;
    this->right = right;
    this->tissue = tissue;
    this->balance = true;
}
TreeNode::TreeNode(Tissue *newTissue)
{
    tissue = newTissue;
    right = nullptr;
    left = nullptr;
    this->balance = true;
}
Tissue *TreeNode::getTissue()
{
    return tissue;
}

BinarySearchTree::BinarySearchTree()
{
}

BinarySearchTree::BinarySearchTree(TreeNode *root)
{
    this->root = root;
}
bool BinarySearchTree::isEmpty() const
{
    return root == nullptr;
}
TreeNode *BinarySearchTree::getRoot() const
{
    return root;
}
int BinarySearchTree::height(TreeNode *node)
{
    if (node)
    {
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
    }
    else
    {
        return -1;
    }
}
int BinarySearchTree::height()
{
    return height(root);
}
TreeNode *BinarySearchTree::insert(TreeNode *start, Tissue *newTissue)
{
    if (start)
    {
        if (newTissue->getMiddleValue() <= start->tissue->getMiddleValue())
        {
            start->left = insert(start->left, newTissue);
        }
        else if (newTissue->getMiddleValue() > start->tissue->getMiddleValue())
        {
            start->right = insert(start->right, newTissue);
        }
    }
    else
    {
        return new TreeNode(newTissue);
    }
    return start;
}

void BinarySearchTree::insert(Tissue *newTissue)
{
    root = insert(root, newTissue);
}

void BinarySearchTree::preorder(TreeNode *start)
{
    if (start)
    {
        cout << start->tissue->getMiddleValue() << " ";
        preorder(start->left);
        preorder(start->right);
    }
}
void BinarySearchTree::inorder(TreeNode *start)
{
    if (start)
    {
        inorder(start->left);
        cout << start->tissue->getMiddleValue() << " ";
        inorder(start->right);
    }
}
void BinarySearchTree::postorder(TreeNode *start)
{
    if (start)
    {
        postorder(start->left);
        postorder(start->right);
        cout << start->tissue->getMiddleValue() << " ";
    }
}
void BinarySearchTree::print(MOD mod)
{
    switch (mod)
    {
    case PRE:
        cout << "Preorder: ";
        preorder(root);
        break;
    case IN:
        cout << "Inorder: ";
        inorder(root);
        break;
    case POST:
        cout << "Postorder: ";
        postorder(root);
        break;
    }
    if (!isEmpty())
        cout << endl;
}

void BinarySearchTree::isBalanced(TreeNode *node)
{
    if(node)
    {
        if(!(abs(height(node->left) - height(node->right)) < 2))
        {
            node->balance = false;
        }
        isBalanced(node->left);
        isBalanced(node->right);
    }
}

void BinarySearchTree::isBalanced()
{
    isBalanced(root);
}