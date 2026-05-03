#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << i << j << endl;
                return {i, j};
            }
        }
    }
    return {};
}

int main() {

    vector<int> nums = {1, 21, 23, 15, 85, 6, 11, 50, 100, 200, 300, 18, 50};
    int target = 100;
    twoSum(nums, target);
    return 0;

}
