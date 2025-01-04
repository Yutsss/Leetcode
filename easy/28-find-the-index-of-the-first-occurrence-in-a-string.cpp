class Solution
{
public:
  int strStr(string haystack, string needle)
  {
    int checker = needle.size();
    int counter = 0;
    int index;

    if (checker == 0 || haystack.size() < checker)
      return -1;

    for (int i = 0; i < haystack.size(); i++)
    {
      if (haystack[i] == needle[counter])
      {
        counter++;
        if (counter == checker)
          return i - (checker - 1);
        continue;
      }
      i = i - counter;
      counter = 0;
    }

    return -1;
  }
};
