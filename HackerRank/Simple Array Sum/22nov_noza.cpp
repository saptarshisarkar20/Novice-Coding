#include <bits/stdc++.h>

using namespace std;

class Solution {
	int sum_of_vector(vector<int> vec);
	vector<int> read_vector();
public:
	int solve(){ return sum_of_vector(read_vector()); };
};

int main() {
	Solution solution;
	cout << solution.solve() << endl;

	return 0;
}


int Solution::sum_of_vector(vector<int> vec){
	return accumulate(vec.begin(), vec.end(), 0);
}
vector<int> Solution::read_vector() {
	int size, element;
	cin >> size;
	vector<int> list_of_elements(size, 0);
	for (int i = 0; i < size; i++) cin>> element, list_of_elements[i] = element;
	return list_of_elements;
}

