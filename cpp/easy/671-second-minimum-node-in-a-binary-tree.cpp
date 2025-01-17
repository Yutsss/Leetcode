class Solution
{
private:
  void helper(TreeNode *root, int &first, int &second)
  {
    if (root == nullptr)
      return;
    if (root->val > first && (second == -1 || root->val < second))
    {
      second = root->val;
    }
    helper(root->right, first, second);
    helper(root->left, first, second);
  }

public:
  int findSecondMinimumValue(TreeNode *root)
  {
    int first = root->val;
    int second = -1;

    helper(root, first, second);
    return second;
  }
};