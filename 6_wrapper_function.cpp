// A simple C program to show function pointers as parameter
#include <iostream>

using namespace std;

void my_cool_function()
{
  cout << "This is my cool function!" << endl;
}

void wrapper(void (*fun)())
{
  cout << "Do something before the function is called." << endl;
  fun();
  cout << "Do something after the function is called." << endl;
}

int main()
{
  wrapper(my_cool_function);

  return 0;
}
