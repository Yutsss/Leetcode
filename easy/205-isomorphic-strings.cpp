class Solution
{
public:
  bool isIsomorphic(string s, string t)
  {
    unordered_map<char, char> umaps;
    unordered_map<char, char> umapt;

    for (int i = 0; i < s.size(); i++)
    {
      if (umaps.find(s[i]) == umaps.end() && umapt.find(t[i]) == umapt.end())
      {
        umaps[s[i]] = t[i];
        umapt[t[i]] = s[i];
      }
      if (umaps[s[i]] != t[i] || umapt[t[i]] != s[i])
      {
        return false;
      }
    }

    return true;
  }
};