#include <iostream>
#include <array>
#include <functional>

using namespace std;

int add_numbers(int a, int b)
{
  return a + b;
}

int subtract_numbers(int a, int b)
{
  return a - b;
}

int multiply_numbers(int a, int b)
{
  return a * b;
}

int main()
{
  array<function<int(int, int)>, 3> my_array = {add_numbers, subtract_numbers, multiply_numbers};

  for (auto it = my_array.begin(); it != my_array.end(); it++)
  {
    cout << (*it)(5, 6) << endl;
  }

  return 0;
}
