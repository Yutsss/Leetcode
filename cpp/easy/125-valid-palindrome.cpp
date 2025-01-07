#include <cctype>
class Solution
{
public:
  bool isPalindrome(string s)
  {
    int m = s.size();
    int i = 0, j = m - 1;

    if (m == 0)
      return true;

    while (i < j)
    {
      while (i < j && !isalnum(s[i]))
      {
        i++;
      }
      while (i < j && !isalnum(s[j]))
      {
        j--;
      }
      if (tolower(s[i]) != tolower(s[j]))
      {
        return false;
      }
      else
      {
        i++;
        j--;
      }
    }

    return true;
  }
};