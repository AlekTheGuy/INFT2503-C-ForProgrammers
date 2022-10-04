#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v1 = {3, 3, 12, 14, 16, 25, 30};
  vector<int> v2 = {2, 3, 12, 14, 24};

  auto over_15 = find_if(v1.begin(), v1.end(), [](auto &n)
                         { return n > 15; });
  cout << "The first element with value greater than 15 is: " << (over_15 - v1.begin()) << endl;

  return 0;
}