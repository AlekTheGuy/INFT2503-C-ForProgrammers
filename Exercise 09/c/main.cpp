#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v1 = {3, 3, 12, 14, 16, 25, 30};
  vector<int> v2 = {2, 3, 12, 14, 24};

  vector<int> tmpVector = {};
  tmpVector.resize(v1.size());

  replace_copy_if(
      v1.begin(), v1.end(), tmpVector.begin(), [](auto &n)
      { return n % 2 == 1; },
      100);
  v1 = tmpVector;
  for (auto n : v1)
  {
    cout << n << " ";
  }

  return 0;
}