class Solution
{
public:
  bool isPalindrome(int x)
  {
    vector<int> digits;

    if (x < 0)
    {
      return false;
    }

    if (x > 9)
    {
      while (x > 0)
      {
        digits.push_back(x % 10);
        x /= 10;
      }

      int checker = digits.size() - 1;
      for (int i = 0; i < digits.size(); i++)
      {
        if (checker == i)
        {
          break;
        }
        if (digits[i] != digits[checker])
        {
          return false;
        }

        checker--;
      }
    }
    return true;
  }
};