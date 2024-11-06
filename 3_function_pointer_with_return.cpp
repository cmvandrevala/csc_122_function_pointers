#include <iostream>

using namespace std;

int add_numbers(int a, int b)
{
  return a + b;
}

int main()
{
  int (*my_function_ptr)(int, int);
  my_function_ptr = &add_numbers;
  int result = (*my_function_ptr)(1, 5);

  cout << result << endl;

  return 0;
}
