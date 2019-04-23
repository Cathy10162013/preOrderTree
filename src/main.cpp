#include "preodertree.h"

int main(int argc, char const *argv[]){
	std::vector<int> v({1,2,-1,4,5,6});
	TreeHandler* th = new TreeHandler(); 
	TreeNode* root = th->createTree(v);
	th->printTree(root);
	th->myPreOrder(root);
	th->deleteTree(root);
	delete th;
	return 0;
}