#include "array_sqrt_sort.h"
#include <iostream>
using namespace std;

/*******************数组平方后排序************************/
vector<int> SolutionSqrt::sortedSquares(vector<int>& nums){
    for(size_t i=0; i<nums.size(); ++i){
        nums[i] = nums[i]*nums[i];
        cout<< nums[i];
        cout<< " ";
    }
    cout<<endl;

    
    vector<int> result(nums.size()); //注意是同等大小不要-1
    int k = nums.size()-1; // 注意要-1
    for(size_t i=0, j=nums.size()-1; i<=j;){
        if(nums[i] < nums[j]){
            result[k--] = nums[j];
            j--;
        }else{
            result[k--] = nums[i];
            i++;
        }
    }


    return result;
}


