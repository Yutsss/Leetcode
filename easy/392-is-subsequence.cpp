class Solution
{
public:
  bool isSubsequence(string s, string t)
  {
    int m = s.size();
    int n = t.size();

    if (m == 0)
      return true;

    int index = 0;

    for (int i = 0; i < n; i++)
    {
      if (index == m - 1 && t[i] == s[index])
        return true;
      if (t[i] == s[index])
        index++;
    }

    return false;
  }
};