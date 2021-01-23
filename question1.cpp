/*Implement In-order Tree Traversal to print all nodes of a Binary Tree. */
#include <iostream>
using namespace std;
template <typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
void printInorder(BinaryTreeNode<int>* root) 
{ 
	if (root==NULL) 
		return; 

// 	calling the function on left child
	printInorder(root->left); 

// 	printing the root
	cout << root->data << " "; 

// 	calling the function on right child
	printInorder(root->right); 
} 
int main(){
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(3);
    BinaryTreeNode<int>* node3=new BinaryTreeNode<int>(4);
    BinaryTreeNode<int>* node4=new BinaryTreeNode<int>(5);
    
    root->right=node2;
    root->left=node1;
    node1->right=node4;
    node1->left=node3;
    cout << "\nInorder traversal of binary tree is :\n"; 
    printInorder(root);
    return 0;    
}

/*Time Complexity: O(n) */
/*space Complexity: O(n) */

