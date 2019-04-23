#ifndef PREODERTREE_H
#define PREODERTREE_H
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;
class TreeNode{
public:
	int data;
	TreeNode* leftchild;
	TreeNode* rightchild;
	TreeNode(){TreeNode(0);}
	TreeNode(int _data):data(_data){leftchild = NULL; rightchild = NULL;}
};

class TreeHandler{
public:
	TreeNode* createTree(vector<int> &nums);
	void preOrderTree(TreeNode* root);
	void deleteTree(TreeNode* root);
	void printTree(TreeNode* root);
	void midOrderTree(TreeNode* root);
	void myPreOrder(TreeNode* root);
};
#endif