// Solution 1 
// class Solution {
//     public int[] twoSum(int[] nums, int target) {
       
//         for (int i = 0 ; i < nums.length ; i ++ ) {
//             for (int j = i + 1 ; j < nums.length ; j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return new int[]{i,j};
//                 }
//             } 
//         }
//         return new int[]{};
//     }
// }

//  Solution 2
// import java.util.HashMap;
// class Solution {
//     public int[] twoSum(int[] nums, int target) {
//         // search for
//         // for (int i = 0 ; i < nums.length ; i ++ ) {
//         //     for (int j = i + 1 ; j < nums.length ; j++) {
//         //         if (nums[i] + nums[j] == target) {
//         //             return new int[]{i,j};
//         //         }
//         //     } 
//         // }
//         // return new int[]{};

//         // hash map
//           HashMap<Integer, Integer> hashmap = new HashMap<>();

//         for (int i = 0 ; i < nums.length ; i ++ ) {
//             int test = target - nums[i];
//             if (hashmap.containsKey(test)) {
//                 return new int[]{hashmap.get(test),i};
                
//             }
//             hashmap.put(nums[i],i);
//         }
//         throw new IllegalArgumentException("No two sum solution");
        

//     }
// }