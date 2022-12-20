#include "BinarySearchTreeClass.hpp"

TreeNode::TreeNode(int value, TreeNode *left, TreeNode *right) : value(value), left(left), right(right) {}
TreeNode::TreeNode(int value, int* array) : value(value), array(array) {}

BinarySearchTree::BinarySearchTree(TreeNode *root) : root(root) {}

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

int BinarySearchTree::depth(TreeNode *start, TreeNode *finish)
{
    if (start)
    {
        if (start == finish)
            return 0;

        int leftDepth = depth(start->left, finish);
        int rightDepth = depth(start->right, finish);
        return 1 + (leftDepth > rightDepth ? leftDepth : rightDepth);
    }
    else
    {
        return INT_MIN;
    }
}

int BinarySearchTree::depth(TreeNode *finish)
{
    return depth(root, finish);
}





void BinarySearchTree::preorder(TreeNode *start)
{
    if (start)
    {
        cout << start->value << " ";
        preorder(start->left);
        preorder(start->right);
    }
}

void BinarySearchTree::inorder(TreeNode *start)
{
    if (start)
    {
        inorder(start->left);
        cout << start->value << " ";
        inorder(start->right);
    }
}

void BinarySearchTree::postorder(TreeNode *start)
{
    if (start)
    {
        postorder(start->left);
        postorder(start->right);
        cout << start->value << " ";
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

TreeNode *BinarySearchTree::find(TreeNode *start, int value)
{
    if (start)
    {
        if (value < start->value)
        {
            return find(start->left, value);
        }
        else if (value > start->value)
        {
            return find(start->right, value);
        }
    }
    return start;
}

TreeNode *BinarySearchTree::find(int value)
{
    return find(root, value);
}

// TreeNode *BinarySearchTree::findMin(TreeNode *start)
// {
//     if (start)
//     {
//         if (start->left)
//         {
//             return findMin(start->left);
//         }
//     }
//     return start;
// }
// use while
TreeNode *BinarySearchTree::findMin(TreeNode *start)
{
    if (start)
    {
        while (start && start->left)
        {
            start = start->left;
        }
    }
    return start;
}

TreeNode *BinarySearchTree::findMin()
{
    return findMin(root);
}

// TreeNode *BinarySearchTree::findMax(TreeNode *start)
// {
//     if (start)
//     {
//         if (start->right)
//         {
//             return findMax(start->right);
//         }
//     }
//     return start;
// }
// use while
TreeNode *BinarySearchTree::findMax(TreeNode *start)
{
    if (start)
    {
        while (start && start->right)
        {
            start = start->right;
        }
    }
    return start;
}

TreeNode *BinarySearchTree::findMax()
{
    return findMax(root);
}

TreeNode *BinarySearchTree::insert(TreeNode *start, int value)
{
    if (start)
    {
        if (value < start->value)
        {
            start->left = insert(start->left, value);
        }
        else if (value > start->value)
        {
            start->right = insert(start->right, value);
        }
    }
    else
    {
        return new TreeNode(value);
    }
    return start;
}

void BinarySearchTree::insert(int value)
{
    root = insert(root, value);
}