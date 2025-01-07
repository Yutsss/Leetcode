class Solution
{
public:
  bool wordPattern(string pattern, string s)
  {
    vector<string> words;
    int m = pattern.size();
    int n = s.size();
    string currWord = "";
    unordered_map<char, string> umap;

    for (int i = 0; i < n; i++)
    {
      if (s[i] != ' ')
      {
        currWord.push_back(s[i]);
        continue;
      }
      words.push_back(currWord);
      currWord = "";
    }

    if (!currWord.empty())
      words.push_back(currWord);

    if (m != words.size())
      return false;

    unordered_map<char, string> umapP;
    unordered_map<string, char> umapW;

    for (int i = 0; i < m; i++)
    {
      if (umapP.find(pattern[i]) == umapP.end() && umapW.find(words[i]) == umapW.end())
      {
        umapP[pattern[i]] = words[i];
        umapW[words[i]] = pattern[i];
      }
      if (umapP[pattern[i]] != words[i] || umapW[words[i]] != pattern[i])
      {
        return false;
      }
    }

    return true;
  }
};