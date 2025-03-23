// 78. Subsets


// Solution 1
// class Solution {
//     public:
//         void generateSubsets(const vector<int>& nums, int index, vector<int>& subset, vector<vector<int>>& result) {
//             if (index == nums.size())
//              { 
//                 result.push_back(subset); 
//                 return;
//              }
//             generateSubsets(nums, index + 1, subset, result);
            
//             subset.push_back(nums[index]);
//             generateSubsets(nums, index + 1, subset, result);
    
//             subset.pop_back();
//         }
    
//         vector<vector<int>> subsets(vector<int>& nums) {
//             vector<vector<int>> result;
//             vector<int> subset;
//             generateSubsets(nums, 0, subset, result);
//             return result;
//         }
//     };

// Solution 2
// class Solution {
//     public:
//     // O(2^n) 
//         void Subsets(const vector<int>& nums, int index, vector<int>& subset, vector<vector<int>>& result) {
//             if (index == nums.size())
//              { 
//                 result.push_back(subset); 
//                 return;
//              }
//             Subsets(nums, index + 1, subset, result);
    
//             subset.push_back(nums[index]);
//             Subsets(nums, index + 1, subset, result);
    
//             subset.pop_back();
//         }
    
//         vector<vector<int>> subsets(vector<int>& nums) {
//             vector<vector<int>> result;
//             vector<int> subset;
//             Subsets(nums, 0, subset, result);
//             return result;
//         }
//     };