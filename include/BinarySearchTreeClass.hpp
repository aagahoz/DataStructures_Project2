/**
 * @file  BinarySearchTreeClass.hpp
 * @description Binary Tree Radix Sort kullanımı
 * @course  1.Öğretim C Grubu 
 * @assignment  2.Ödev
 * @date   20.12.2022
 * @author  Abdullah Agah Özdemir - agah.ozdemir@ogr.sakarya.edu.tr
 */

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
    bool balance;

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
    void isBalanced(TreeNode* node);
    void isBalanced();

};
#endif