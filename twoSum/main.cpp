#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size(); i++){
            for(int j = i+1 ; j < nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return{};
    }
};
int main(){
    Solution solution;
    vector<int> nums = {1,3,4,5};
    int target = 4;
    vector<int> result = solution.twoSum(nums, target);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}
