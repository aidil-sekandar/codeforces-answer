#include <iostream>

int main()
{
  std::string word;
  int num;
  std::cin >> num;

  for (int i = 0; i < num; i++)
  {
    std::cin >> word;
    if (word.length() > 10)
    {
      std::cout << word[0] << word.length() - 2 << word.back() << '\n';
    }
    else
    {
      std::cout << word << '\n';
    }
  }

  return 0;
}