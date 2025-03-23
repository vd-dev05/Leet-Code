// Solution 1
// class Solution {
//     public:
//         int jump(vector<int>& nums) {
//                 int n = nums.size();
//         int jumps = 0;
//         int currentEnd = 0;
//         int farthest = 0;
    
//         for (int i = 0; i < n - 1; i++) {
//             farthest = max(farthest, i + nums[i]);
    
//             if (i == currentEnd) {
//                 jumps++;
//                 currentEnd = farthest;
    
//                 if (currentEnd >= n - 1) {
//                     break;  // Reached the last index
//                 }
//             }
//         }
    
//         return jumps;
//         }
//     };

// Solution 2

// class Solution {
//     public:
//       int jump(vector<int>& nums) {
//         // O(n)
//       for(int i = 1; i < nums.size(); i++)
//       {
//         nums[i] = max(nums[i] + i, nums[i-1]);
//       }
    
//       int index = 0;
//       int answer = 0;
    
//       while(index < nums.size() - 1)
//       {
//         answer++;
//         index = nums[index];
//       }
    
//       return answer;
//     }
//     };
    