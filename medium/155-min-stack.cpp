class MinStack
{
private:
  vector<int> st;
  vector<int> minValues;

public:
  MinStack()
  {
    st = {};
    minValues = {};
  }

  void push(int val)
  {
    int minValue;
    if (minValues.size() == 0)
    {
      minValue = INT_MAX;
    }
    else
    {
      minValue = minValues[minValues.size() - 1];
    }
    minValue = min(minValue, val);
    minValues.push_back(minValue);
    st.push_back(val);
  }

  void pop()
  {
    st.pop_back();
    minValues.pop_back();
  }

  int top()
  {
    return st[st.size() - 1];
  }

  int getMin()
  {
    return minValues[minValues.size() - 1];
  }
};