#include <iostream>
#include "binary.h"
#include "array_rm.h"
#include "array_sqrt_sort.h"

int main(){
	using namespace  std;
	/*******************数组平方后排序************************/
	SolutionSqrt solutionsqrt;
	Solution solution;
	vector<int> myNum = {-4,-1,0,3,10};
	vector<int> result(myNum.size());

	result = solutionsqrt.sortedSquares(myNum);
	solution.printVector(result);

	/*******************删除数组中对应的数************************/
	// SolutionRm solutionrm;
	// vector<int> myNum = {0,1,2,2,3,0,4,2};
	// int k = 0;
	// k = solutionrm.removeElement(myNum, 2);
	// cout << k << endl;

	/*******************二分法测试************************/
	// Solution solution;
	// vector<int> myNum = {-1,0,3,5,9,12};
	// int search=0;
	// search = solution.search(myNum, 12);
	// cout << search << endl;

	return 0;
}
