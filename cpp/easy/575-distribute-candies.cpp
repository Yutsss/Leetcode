class Solution
{
public:
  int distributeCandies(vector<int> &candyType)
  {
    unordered_set<int> uset;
    int m = candyType.size();
    int checker = m / 2;

    for (int i = 0; i < m; i++)
    {
      uset.insert(candyType[i]);
      if (uset.size() == checker)
      {
        return checker;
      }
    }

    return uset.size();
  }
};