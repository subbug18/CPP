#include <iostream>
#include <memory>

using namespace std;

#include "Tree.hpp"

void TreeNode::Insert(int data)
{
   if (root == nullptr)
  {
    root = new TreeNode;
    root->data = data;
    root->left = nullptr;
    root->right = nullptr;
    return;
  }
  
    TreeNode *tmp = root; 
    TreeNode *prev; 
     
    while (tmp != nullptr)
    {
       prev = tmp;
       if (data > tmp->data)
       {         
         tmp = tmp -> right;
       }
       if (data < tmp->data)
       {
         tmp = tmp -> left;
       }
    }
    if (data > prev->data)
    {         
      prev->right = new TreeNode;
      prev->right->data = data;
      prev->right->left = nullptr;
      prev->right->right = nullptr;
    }
    if (data < prev->data)
    {       
      prev->left = new TreeNode;
      prev->left->data = data;
      prev->left->left = nullptr;
      prev->left->right = nullptr;
    }  
}

void TreeNode::InorderTraversal(TreeNode* root)
{
  if( root != nullptr)
  {
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
  }
}


int main()
{
  auto treeOb = new TreeNode;//make_unique<TreeNode>();
  treeOb->Insert(10);treeOb->Insert(1);treeOb->Insert(15);treeOb->Insert(4);treeOb->Insert(12);treeOb->Insert(20);

    return 0;
}

