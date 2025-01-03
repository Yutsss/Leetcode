class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.size() == 1)
    {
      return 1;
    }
    int counter = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
      if (nums[i] != nums[i + 1])
      {
        nums[counter] = nums[i + 1];
        counter++;
      }
    }
    return counter;
  }
};
