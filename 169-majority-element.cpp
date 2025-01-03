class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    unordered_map<int, int> umap;
    if (nums.size() > 1)
    {
      for (int num : nums)
      {
        umap[num]++;
        if (umap[num] > nums.size() / 2)
        {
          return num;
        }
      }
    }

    return nums[0];
  }
};