#ifndef BinarySearchTreeClass_hpp
#define BinarySearchTreeClass_hpp

#include <iostream>
using namespace std;

#include "TissueClass.hpp"

class TreeNode
{
public:
    TreeNode(TreeNode *left = nullptr, TreeNode *right = nullptr, Tissue *tissue = nullptr)
    {
        this->left = left;
        this->right = right;
        this->tissue = tissue;
    }
    TreeNode(Tissue *newTissue)
    {
        tissue = newTissue;
        right = nullptr;
        left = nullptr;
    }
    Tissue *getTissue()
    {
        return tissue;
    }
    TreeNode *left;
    TreeNode *right;
    Tissue *tissue; //  array will solve
};

enum MOD
{
    PRE,
    IN,
    POST
};
class BinarySearchTree
{
    TreeNode *root;

public:
    BinarySearchTree(TreeNode *root = nullptr)
    {
        this->root = root;
    }
    bool isEmpty() const
    {
        return root == nullptr;
    }
    TreeNode *getRoot() const
    {
        return root;
    }
    // int height(TreeNode *node);
    // int height();
    // int depth(TreeNode *start, TreeNode *finish);
    // int depth(TreeNode *finish);
    TreeNode *insert(TreeNode *start, Tissue *newTissue)
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

    void insert(Tissue *newTissue)
    {
        root = insert(root, newTissue);
    }

    void preorder(TreeNode *start)
    {
        if (start)
        {
            cout << start->tissue->getMiddleValue() << " ";
            preorder(start->left);
            preorder(start->right);
        }
    }
    void inorder(TreeNode *start)
    {
        if (start)
        {
            inorder(start->left);
            cout << start->tissue->getMiddleValue() << " ";
            inorder(start->right);
        }
    }
    void postorder(TreeNode *start)
    {
        if (start)
        {
            postorder(start->left);
            postorder(start->right);
            cout << start->tissue->getMiddleValue() << " ";
        }
    }
    void print(MOD mod)
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

    // // find function code
    // TreeNode *find(TreeNode *start, int value);
    // TreeNode *find(int value);

    // TreeNode *findMin(TreeNode *start);
    // TreeNode *findMin();

    // TreeNode *findMax(TreeNode *start);
    // TreeNode *findMax();
};
#endif