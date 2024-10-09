#include <iostream>
#include <vector>
using namespace std;
class SortedRotated {
public:
    static bool Check(const std::vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                count++;
            }
        }
        if (n > 0 && nums[n - 1] > nums[0]) {
            count++;
        }

        return count <= 1;
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 1, 2};
    if (SortedRotated::Check(nums)) {
        cout << "The array is sorted and rotated." <<endl;
    } else {
        cout << "The array is not sorted and rotated." <<endl;
    }
    return 0;
}
