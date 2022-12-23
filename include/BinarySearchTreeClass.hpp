#ifndef BinarySearchTreeClass_hpp
#define BinarySearchTreeClass_hpp

#include <iostream>
using namespace std;

#include "TissueClass.hpp"

class TreeNode
{
public:
    TreeNode(TreeNode *left, TreeNode *right, Tissue *tissue);
    TreeNode(Tissue *newTissue);
    Tissue *getTissue();
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
    BinarySearchTree();
    BinarySearchTree(TreeNode *root);
    bool isEmpty() const;
    TreeNode *getRoot() const;
    int height(TreeNode *node);
    int height();
    TreeNode *insert(TreeNode *start, Tissue *newTissue);

    void insert(Tissue *newTissue);

    void preorder(TreeNode *start);
    void inorder(TreeNode *start);
    void postorder(TreeNode *start);
    void print(MOD mod);
};
#endif