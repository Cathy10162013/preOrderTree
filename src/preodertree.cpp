#include "preodertree.h"
TreeNode* TreeHandler::createTree(vector<int> &nums){
	TreeNode* root = NULL;
	if(nums.empty()){
		return root;
	}
	root = new TreeNode(nums[0]);
	stack<TreeNode*> stk;
	TreeNode* p = root;
	for(int i = 1; i < nums.size(); ){
		if(nums[i] != -1){
			TreeNode* l = new TreeNode(nums[i]);
			p->leftchild = l;
			i++;
		}
		if(i < nums.size() && nums[i] != -1){
			TreeNode* r = new TreeNode(nums[i]);
			stk.push(r);
			p->rightchild = r;
			i++;
		}
		if(p->leftchild != NULL){
			p = p->leftchild;
		}
		else if(!stk.empty()){
			p = stk.top();
			stk.pop();
		}
	}
	return root;
}

void TreeHandler::printTree(TreeNode* root){
	cout << "pre: ";
	preOrderTree(root);
	cout << endl;
	cout << "mid: ";
	midOrderTree(root);
	cout << endl;
}

void TreeHandler::deleteTree(TreeNode* root){
	if(!root)
		return ;
	deleteTree(root->leftchild);
	deleteTree(root->rightchild);
	delete root;
}

void TreeHandler::preOrderTree(TreeNode* root){
	if(!root)
		return ;
	cout<<root->data<<" ";
	preOrderTree(root->leftchild);
	preOrderTree(root->rightchild);
}

void TreeHandler::midOrderTree(TreeNode* root){
	if(!root){
		return ;
	}
	midOrderTree(root->leftchild);
	cout << root->data << " ";
	midOrderTree(root->rightchild);
}

void TreeHandler::myPreOrder(TreeNode* root){	// 非递归先序遍历二叉树git
	cout << "mypre: ";
	if(!root)
		return;
	stack<TreeNode*> stk;
	stk.push(root);
	while(!stk.empty()){
		TreeNode* p = stk.top();
		cout << p->data << " ";
		stk.pop();
		if(p->rightchild){
			stk.push(p->rightchild);
		}
		if(p->leftchild){
			stk.push(p->leftchild);
		}
	}
	cout << endl;
}
