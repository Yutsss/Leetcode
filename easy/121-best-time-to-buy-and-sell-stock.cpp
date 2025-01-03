class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int total = 0;
    int minVal = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
      if (minVal > prices[i])
      {
        minVal = prices[i];
      }
      if (prices[i] - minVal > total)
      {
        total = prices[i] - minVal;
      }
    }
    return total;
  }
};