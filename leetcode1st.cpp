#include <iostream>

using namespace std;

void twoSum(int nums[], int size, int target) {
    // Nested loop to check each pair
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // Check if the sum of nums[i] and nums[j] is equal to the target
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return; // Return as soon as the pair is found
            }
        }
    }
    
    // If no solution is found (this won't happen as per the problem statement)
    cout << "No solution found." << endl;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);
    
    twoSum(nums, size, target);
    
    return 0;
}
