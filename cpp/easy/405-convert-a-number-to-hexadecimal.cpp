class Solution
{
public:
  string toHex(int num)
  {
    unsigned int n = num;
    string result;
    string hex = "0123456789abcdef";

    if (n == 0)
      return "0";

    while (n != 0)
    {
      result = hex[n % 16] + result;
      n = n / 16;
    }

    return result;
  }
};