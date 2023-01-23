#include <iostream>
#include <vector>

int main()
{
  std::vector<int> scores;
  int n, k, a;
  int count = 0;
  std::cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    std::cin >> a;
    scores.push_back(a);
  }

  for (int i = 0; i < scores.size(); i++)
  {
    if (scores[i] > 0 && scores[i] >= scores[k - 1])
    {
      count++;
    }
  }

  std::cout << count;

  return 0;
}