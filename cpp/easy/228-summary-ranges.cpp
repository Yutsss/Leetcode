class Solution
{
public:
  vector<string> summaryRanges(vector<int> &nums)
  {
    vector<string> v;
    string s = "";
    int m = nums.size();

    if (m == 1)
    {
      v.push_back(to_string(nums[0]));
      return v;
    }

    for (int i = 0; i < m; i++)
    {
      if (s.size() < 1)
        s += to_string(nums[i]);
      ;
      if (i != m - 1 && nums[i + 1] == nums[i] + 1)
      {
        continue;
      }
      else
      {
        if (to_string(nums[i]) != s)
        {
          string temp = "->" + to_string(nums[i]);
          s += temp;
          v.push_back(s);
          s = "";
          continue;
        }
        v.push_back(s);
        s = "";
      }
    }

    return v;
  }
};