#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    string result = "";

    for (int i = 0; i < strs[0].length(); i++) {
        for (int j = 1; j < strs.size(); j++) {
            if (strs[0][i] != strs[j][i]) {
                return result;
            }

            if (strs[j].length() <= i) {
                return result;
            }
            result += strs[0][i];

        }
    }


    return result;
}


int main() {

//    vector<string> strs = {"flower", "flow", "flight"};
    
//    longestCommonPrefix(strs);
    return 0;
}
