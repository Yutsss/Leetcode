class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> st;
    int m = s.size();

    if (m == 1)
      return false;

    for (int i = 0; i < m; i++)
    {
      if (!st.empty() && s[i] != '(' && s[i] != '{' && s[i] != '[')
      {
        if (s[i] == ')' && st.top() != '(')
          return false;
        if (s[i] == ']' && st.top() != '[')
          return false;
        if (s[i] == '}' && st.top() != '{')
          return false;
        st.pop();
        continue;
      }
      st.push(s[i]);
    }

    return st.empty();
  }
};