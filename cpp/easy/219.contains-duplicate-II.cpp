class Solution
{
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k)
  {
    unordered_map<int, int> umap;
    int n = nums.size();

    if (n == 1)
      return false;

    if (n <= k)
    {
      for (int i = 0; i < n; i++)
      {
        umap[nums[i]]++;
        if (umap[nums[i]] == 2)
          return true;
      }
    }

    if (n > k)
    {
      for (int i = 0; i < (k + 1); i++)
      {
        umap[nums[i]]++;
        if (umap[nums[i]] == 2)
          return true;
      }

      for (int i = (k + 1); i < n; i++)
      {
        umap[nums[i]]++;
        umap[nums[i - (k + 1)]]--;
        if (umap[nums[i]] == 2)
          return true;
      }
    }

    return false;
  }
};