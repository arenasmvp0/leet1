#include<vector>
#include<iostream>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target);
int main() {
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(4);
	int target = 6;
	vector<int> a = twoSum(nums, target);
	cout << a[0] << " " << a[1];
}
vector<int> twoSum(vector<int>& nums, int target) 
{
		for (int i = 0; i < nums.size() - 1; i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target)
				{
					vector<int> a;
					a.push_back(i);
					a.push_back(j);
					return a;
				}
			}
		}
	}