#include "iostream"
#include <vector>
using namespace std;

class Set {
private:
    vector<int> numbers;
public:
    const vector<int> &getNumbers() const;

    Set();
    Set operator*(const Set &other);
    Set operator+(int number);
    Set &operator=(const Set &other);

};
ostream &operator<<(ostream &out, const Set &set);
