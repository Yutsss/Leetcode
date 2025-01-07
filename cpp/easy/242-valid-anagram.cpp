class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    unordered_map<char, int> umapS;
    unordered_map<char, int> umapT;
    int m = s.size();
    int n = t.size();

    if (m != n)
      return false;

    for (int i = 0; i < m; i++)
    {
      umapS[s[i]]++;
      umapT[t[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
      if (umapS[s[i]] != umapT [[i]])
        return false;
    }

    return true;
  }
};