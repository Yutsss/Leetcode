class Solution
{
private:
  void countingSort(vector<int> &arr)
  {
    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;

    vector<int> count(range, 0), output(arr.size());

    for (int num : arr)
      count[num - minVal]++;
    for (int i = 1; i < range; i++)
      count[i] += count[i - 1];
    for (int i = arr.size() - 1; i >= 0; i--)
    {
      output[count[arr[i] - minVal] - 1] = arr[i];
      count[arr[i] - minVal]--;
    }
    arr = output;
  }

public:
  int arrayPairSum(vector<int> &nums)
  {
    int m = nums.size();
    int i = 0;
    int k = 2;
    int sum = 0;

    if (m == 2)
      return min(nums[0], nums[1]);

    countingSort(nums);

    while (i < (m - 1))
    {
      sum += nums[i];
      i += 2;
    }

    return sum;
  }
};