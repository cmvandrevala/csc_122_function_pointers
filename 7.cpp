#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

class Restaurant
{
private:
  string restaurant_name;
  int ramen_rating;

public:
  Restaurant(string name, int ramen_rating)
  {
    this->restaurant_name = name;
    this->ramen_rating = ramen_rating;
  }

  string name()
  {
    return this->restaurant_name;
  }

  int rating()
  {
    return this->ramen_rating;
  }
};

bool ramen_sorter(Restaurant a, Restaurant b)
{
  return a.rating() > b.rating();
}

int main()
{
  Restaurant chicago_ramen = Restaurant("Chicago Ramen", 8);
  Restaurant mitsuwa = Restaurant("Mitsuwa Marketplace", 9);
  Restaurant shinchan = Restaurant("Ramen Shinchan", 7);

  array<Restaurant, 3> ramen_restaurants = {chicago_ramen, mitsuwa, shinchan};
  array<Restaurant, 3>::iterator ramen_iterator = ramen_restaurants.begin();

  for (array<Restaurant, 3>::iterator ramen_iterator = ramen_restaurants.begin(); ramen_iterator != ramen_restaurants.end(); ++ramen_iterator)
  {
    cout << ramen_iterator->name() << '\t' << ramen_iterator->rating() << endl;
  }

  cout << endl;

  // This fails
  // sort(ramen_restaurants.begin(), ramen_restaurants.end());

  // This works
  // sort(ramen_restaurants.begin(), ramen_restaurants.end(), ramen_sorter);

  // for (array<Restaurant, 3>::iterator ramen_iterator = ramen_restaurants.begin(); ramen_iterator != ramen_restaurants.end(); ++ramen_iterator)
  // {
  //   cout << ramen_iterator->name() << '\t' << ramen_iterator->rating() << endl;
  // }

  return 0;
}
