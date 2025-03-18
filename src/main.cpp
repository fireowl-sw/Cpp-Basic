#include <iostream>
#include "binary.h"

int main(){
	using namespace  std;
	Solution solution;
	vector<int> myNum = {-1,0,3,5,9,12};
	int search=0;

	search = solution.search(myNum, 2);
	cout << search << endl;

	return 0;
}
