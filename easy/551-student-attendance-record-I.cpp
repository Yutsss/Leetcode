class Solution
{
public:
  bool checkRecord(string s)
  {
    int m = s.size();
    int counterA = 0, counterL = 0;

    for (int i = 0; i < m; i++)
    {
      if (s[i] == 'A')
      {
        counterA++;
      }
      if (s[i] == 'L')
      {
        if (i != 0 && s[i - 1] != 'L')
          counterL = 0;
        counterL++;
      }
      if (counterL == 3)
        return false;
      if (counterA == 2)
      {
        return false;
      }
    }

    return true;
  }
};