#include <iostream>
#include <string>

using namespace std;

bool rotateString(string s, string goal) {

    if (s.length() != goal.length()) {
        return false;

    }        

    string result = s + s;

    if (result.find(goal) == string::npos) {
        return false;
    }

    return true;
}

int main() {

    rotateString("abcde", "cdeab");

    return 0;
}
