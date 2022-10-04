#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v1 = {3, 3, 12, 14, 16, 25, 30};
  vector<int> v2 = {2, 3, 12, 14, 24};

  auto is_equal = equal(v1.begin(), v1.begin() + 4, v2.begin(), [](int &a, int &b)
                        { return abs(a - b) < 2; });
  cout << "The ranges are " << (is_equal ? "equal." : "not equal.") << endl;

  return 0;
}