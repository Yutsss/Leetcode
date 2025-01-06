class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.size() == 1 || nums.size() == 2)
    {
      return nums.size();
    }
    int counter = 0;
    int checker = 0;
    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if ((i != 0) && nums[i - 1] != nums[i])
      {
        checker = 0;
      }
      checker++;
      if (checker <= 2)
      {
        nums[index] = nums[i];
        if (i != nums.size() - 1)
        {
          index++;
        }
        counter++;
      }
    }
    return counter;
  }
};

1 1 2 2 2 2 3 4 5