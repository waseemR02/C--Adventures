// #include <cstdint>
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  int age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas [";
  
  constexpr int legalAge{16};
  if (age >= 16)
    std::cout << 'x';
  else
    std::cout << ' ';

  std::cout << "]\n";

  return 0;
}