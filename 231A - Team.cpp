#include <iostream>

int main()
{
  int n, petya, vasya, tonya, number;
  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    std::cin >> petya >> vasya >> tonya;
    if (petya + vasya + tonya >= 2)
    {
      number++;
    }
  }

  std::cout << number;
  return 0;
}