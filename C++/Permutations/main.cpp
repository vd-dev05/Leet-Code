// 46. Permutations

// Solution 1
// 
// class Solution {
//     public:
//         void Try(vector<int>& nums, int begin, vector<vector<int>>& result) {
//             if (begin == nums.size()) {
//                 result.push_back(nums);
//                 return;
//             }
    
//             for (int i = begin; i < nums.size(); i++) {
//                 swap(nums[begin], nums[i]); 
//                 Try(nums, begin + 1, result);
//                 swap(nums[begin], nums[i]); 
//             }
//         }
    
//         vector<vector<int>> permute(vector<int>& nums) {
//             vector<vector<int>> result;
//             Try(nums, 0, result);
//             return result; 
//         }
//     };