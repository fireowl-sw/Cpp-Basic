#include "binary.h"
#include <iostream>
/*
时间复杂度：O(log n)
空间复杂度：O(1)
*/

using namespace std;
int Solution::search(vector<int> &nums, int target)
{
    cout << "目标值" << target << endl;
    printVector(nums);
    int left=0;
    int right = nums.size()-1;
    while(left <= right){
        int middle = left + ((right - left)/2);
        if(target > nums[middle]){
            left = middle+1;
        }
        else if(target < nums[middle]){
            right = middle-1;
        }
        else
            return middle;
    }

    return -1;
}


/************************************动态数组打印方法************************************/
template <typename T>
void Solution::printVector(vector<T> &vec)
{
    cout << "目标数组";
    cout <<"[";
    for (size_t i = 0; i < vec.size(); ++i){
        cout << vec[i];

        if (i != vec.size()-1) cout<<",";
    }
    cout << "]" << endl;
}

