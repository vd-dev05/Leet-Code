// 53. Maximum Subarray

// quay lui
// class Solution {
//     public:
//         int maxSubArray(vector<int>& nums) {
//             const int MIN_INT = -99999; 
//             int max_sofar = MIN_INT;
//             int max_cur = 0;
//             for (int num : nums) {
//                 max_cur = max(max_cur + num, num);
//                 max_sofar = max(max_sofar, max_cur);
//             }
//             return max_sofar;
//         }
//     };