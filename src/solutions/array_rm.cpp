#include "array_rm.h"
#include <iostream>

int SolutionRm::removeElement(std::vector<int> &nums, int val){
    using namespace std;
    int left  = 0;
    int right = 0;
    int size = nums.size();

    Solution solution;
    solution.printVector(nums);
    cout << "rm值" << val <<endl;

    for(right = 0; right < size; ++right){
        if (val != nums[right]){
            nums[left] = nums[right];
            left++;
        }
        
        
    }
    solution.printVector(nums);
    return left;
}