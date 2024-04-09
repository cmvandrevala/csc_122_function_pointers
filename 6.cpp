#include <iostream>
#include <array>
#include <functional>

using namespace std;

void our_very_first_callback_function(function<void()> callback)
{
  cout << "This code comes from our_very_first_callback_function" << endl;
  callback();
}

void callback_one()
{
  cout << "This code comes from callback one!" << endl;
}

void callback_two()
{
  cout << "This code comes from callback two!" << endl;
}

void noop() {}

int main()
{
  char user_input;
  cout << "(1) or (2)?" << endl;
  cin >> user_input;

  switch (user_input)
  {
  case '1':
    our_very_first_callback_function(callback_one);
    break;
  case '2':
    our_very_first_callback_function(callback_two);
    break;
  default:
    our_very_first_callback_function(noop);
  }

  return 0;
}
