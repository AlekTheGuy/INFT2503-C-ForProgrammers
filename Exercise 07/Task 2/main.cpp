#include "Set.hpp"

using namespace std;

int main() {

    Set set1;

    set1 = set1 + 1 + 1 + 2 + 3;
    cout << "set 1: " << set1 << endl;

    Set set2;
    set2 = set2 + 3 + 4 + 5;
    cout << "set 2: " << set2 << endl;

    cout << "set1 union set2: " << set1 * set2 << endl;

    set2 = set1;

    cout << "new set2: " << set2 << endl;

    return 0;
}