class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int count = 0;
    int found = false;
    for (int i = s.length() - 1; i >= 0; i--)
    {
      if (s[i] != ' ')
      {
        found = true;
        count++;
        continue;
      }
      if (found)
        break;
    }
    return count;
  }
};