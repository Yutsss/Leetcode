class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    int m = ransomNote.size();
    int n = magazine.size();
    unordered_map<char, int> umap;

    if (m > n)
      return false;
    if (m == 0)
      return true;
    if (n == 0)
      return false;
    if (m == 1 && n == 1)
    {
      if (ransomNote[0] != magazine[0])
        return false;
    }

    for (char m : magazine)
    {
      umap[m]++;
    }

    for (char r : ransomNote)
    {
      umap[r]--;
      if (umap[r] < 0)
        return false;
    }

    return true;
  }
};