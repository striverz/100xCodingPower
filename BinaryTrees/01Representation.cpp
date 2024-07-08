#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val){
		data=val;
		left=nullptr;
		right=nullptr;

	}

};
int main(){
	TreeNode* root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->right=new TreeNode(3);
	root->left->right=new TreeNode(4);
}

            1
	       / \
	      2   3
	       \
	        4