#ifndef TREEE_HPP
#define TREE_HPP

class TreeNode
{
  private:
    int data;
    TreeNode *left;  
    TreeNode *right;
  public:

    TreeNode() = default;
   ~TreeNode() = default;
   
    void Insert(int data);
    void DeleteData(int data);
    int CountLeafNodes(TreeNode* root);
    void InorderTraversal(TreeNode* root);
};
TreeNode *root =nullptr;

#endif  // TREE_HPP