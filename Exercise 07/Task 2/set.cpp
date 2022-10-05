#include <sstream>
#include "Set.hpp"

Set::Set() {

}

Set Set::operator*(const Set &other) {
    Set set = *this;

    for (int i : other.numbers) {
        bool add = true;
        for(int y : set.numbers){
            if(i == y)
                add = false;
        }
        if(add)
            set.numbers.emplace_back(i);
    }
    return set;
}

const vector<int> &Set::getNumbers() const {
    return numbers;
}

Set Set::operator+(int number) {
    Set set = *this;
    bool add = true;
    for (int i : set.numbers) {
        if(i == number)
            add = false;
    }
    if(add)
        set.numbers.emplace_back(number);
    return set;
}

Set &Set::operator=(const Set &other) {
    numbers = other.numbers;
    return *this;
}


ostream &operator<<(ostream &out, const Set &set){
    string string = "";
    for(int number : set.getNumbers()){
        string += (to_string(number) + " ");
    }
    out << string;
    return out;
}