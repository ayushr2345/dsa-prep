class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Sol 1 - O(N^2)
        // 1. iterate through array
        // 2. if ele < target, remaining_target = target - ele
        // 3. Find remaining_target in rest of the array
        // 4. if found, that is the solution, if not, repeat

        // vector<int> result;
        // for (int i = 0; i < nums.size(); i++) {
        //     int remaining_target = target - nums.at(i);
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums.at(j) == remaining_target) {
        //             result.push_back(i);
        //             result.push_back(j);
        //             break;
        //         }
        //     }
        //     if (result.size() != 0)
        //         break;
        // }

        // Sol 2 using map - O(N)
        // 1. Iterate through the array
        // 2. remaining_target = target - ele
        // 3. Find remaining_target in map
        // 4. if not found, insert with frequency 1
        // 5. if found, insert index to result vector, break
        // 6. iterate through the array again, to find the new remaining target
        // 7. insert the found index at the start of the result.

        vector<int> result;
        std::unordered_map<int, int> numsMap;
        int numsSize = nums.size();
        int remainingTarget = 0;
        for (int i = 0; i < numsSize; i++) {
            remainingTarget = target - nums.at(i);
            if (numsMap.find(remainingTarget) == numsMap.end()) {
                numsMap[nums[i]] = 1;
            } else {
                result.push_back(i);
                break;
            }
        }
        
        remainingTarget = target - nums.at(result.at(0));
        for (int i = 0; i < numsSize; i++) {
            if (remainingTarget == nums.at(i)) {
                // result.insert(result.begin(), i);
                result.push_back(i);
                break;
            }
        }
        return result;
        
    }
};