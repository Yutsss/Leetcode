class Solution
{
private:
  int sumOfSquaredDigits(int num)
  {
    int sum = 0;
    while (num > 0)
    {
      int digit = num % 10;
      sum += digit * digit;
      num /= 10;
    }
    return sum;
  }

public:
  bool isHappy(int n)
  {
    unordered_set<int> set;
    int currValue = n;

    while (currValue != 1)
    {
      currValue = sumOfSquaredDigits(currValue);
      if (set.find(currValue) == set.end())
      {
        set.insert(currValue);
        continue;
      }

      return false;
    }

    return true;
  }
};