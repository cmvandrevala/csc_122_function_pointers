#include <iostream>

using namespace std;

void say_hello()
{
  cout << "Hello!" << endl;
}

int main()
{
  void (*my_function_ptr)();
  my_function_ptr = &say_hello;
  (*my_function_ptr)();

  return 0;
}
