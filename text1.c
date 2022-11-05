#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize; j++) {
            if(nums[i] + nums[j]==target && i != j){
                returnSize={i,j};
                break;
            }
        }

    }
        return  a;
}   
