#ifndef BinarySearchTreeClass_hpp
#define BinarySearchTreeClass_hpp

#include <iostream>
using namespace std;
class TreeNode
{
public:
    TreeNode(int value = 0, TreeNode *left = nullptr, TreeNode *right = nullptr);
    TreeNode(int value, int* array);
    int value;
    TreeNode *left;
    TreeNode *right;
    int *array;
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
    BinarySearchTree(TreeNode *root = nullptr);
    bool isEmpty() const;
    TreeNode *getRoot() const;
    int height(TreeNode *node);
    int height();
    int depth(TreeNode *start, TreeNode *finish);
    int depth(TreeNode *finish);
    TreeNode *insert(TreeNode *start, int value);
    void insert(int value);

    void preorder(TreeNode *start);
    void inorder(TreeNode *start);
    void postorder(TreeNode *start);
    void print(MOD mod);

    // find function code
    TreeNode *find(TreeNode *start, int value);
    TreeNode *find(int value);

    TreeNode *findMin(TreeNode *start);
    TreeNode *findMin();

    TreeNode *findMax(TreeNode *start);
    TreeNode *findMax();

};
#endif