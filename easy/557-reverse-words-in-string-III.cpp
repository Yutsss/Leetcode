class Solution
{
public:
  string reverseWords(string s)
  {
    int m = s.size();
    string temp = "";
    string res;

    if (m == 0)
      return "";

    for (int i = 0; i < m; i++)
    {
      if (s[i] != ' ')
      {
        temp.push_back(s[i]);
        if (i != (m - 1))
        {
          continue;
        };
      }
      reverse(temp.begin(), temp.end());
      res += temp;
      if (i != (m - 1))
      {
        res.push_back(s[i]);
      }
      temp = "";
    }

    return res;
  }
};