#ifndef BinarySearchTreeClass_hpp
#define BinarySearchTreeClass_hpp

#include <iostream>
using namespace std;

class TreeNode
{
public:
    TreeNode(int value = 0, TreeNode *left = nullptr, TreeNode *right = nullptr);
    int value;
    TreeNode *left;
    TreeNode *right;
};

class BinaryTree
{
    TreeNode *root;

public:
    BinaryTree(TreeNode *root = nullptr);
    bool isEmpty() const;
    TreeNode *getRoot() const;
    int height(TreeNode *node);
    int height();
    int depth(TreeNode *start, TreeNode *finish);
    int depth(TreeNode *finish);
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

class AVLNode : public TreeNode
{
public:
    int value;
    AVLNode *left;
    AVLNode *right;
    AVLNode(int value = 0, AVLNode *left = nullptr, AVLNode *right = nullptr);
};

class AVL : public BinarySearchTree
{
    AVLNode *root;
    int height(AVLNode *node) const;
    int different(AVLNode *node) const;
    AVLNode *ll_rotate(AVLNode *node);
    AVLNode *rr_rotate(AVLNode *node);

public:
    AVL(AVLNode *root = nullptr);
    bool isEmpty() const;
    int height() const;
};

#endif