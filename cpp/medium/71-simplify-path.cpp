class Solution
{
public:
  string simplifyPath(string path)
  {
    stack<string> st;
    string clearPath = "";
    string temp = "";
    path += "/";
    int m = path.size();

    for (int i = 0; i < m; i++)
    {
      if (path[i] != '/')
      {
        temp += path[i];
        continue;
      }
      if (temp == ".")
      {
        temp = "";
        continue;
      }
      if (temp == "..")
      {
        if (!st.empty())
        {
          st.pop();
          temp = "";
          continue;
        }
        temp = "";
        continue;
      }
      if (temp != "")
        st.push(temp);
      temp = "";
    }

    if (st.empty())
      return "/";

    while (!st.empty())
    {
      clearPath = "/" + st.top() + clearPath;
      st.pop();
    }

    return clearPath;
  }
};