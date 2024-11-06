#include <iostream>

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
  int (*my_array[])(int, int) = {&add_numbers, &subtract_numbers, &multiply_numbers};

  // We can print out the result of each function!
  cout << (*my_array[0])(1, 5) << endl;
  cout << (*my_array[1])(1, 5) << endl;
  cout << (*my_array[2])(1, 5) << endl;
  cout << endl;

  // Maybe... we can use a for loop?
  for (int i = 0; i < 3; i++)
  {
    cout << (*my_array[i])(1, 5) << endl;
  }
  cout << endl;

  // Or pointer arithmetic?
  for (int i = 0; i < 3; i++)
  {
    cout << (*(my_array + i))(1, 5) << endl;
  }
  cout << endl;

  return 0;
}
