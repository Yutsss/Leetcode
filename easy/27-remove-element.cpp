class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int counter = 0;
    int index = 0;

    if (nums.size() == 0)
      return counter;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != val)
      {
        counter++;
        nums[index] = nums[i];
        index++;
      }
    }

    return counter;
  }
};