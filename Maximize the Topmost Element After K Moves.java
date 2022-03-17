class Solution {
    public int maximumTop(int[] nums, int k) {
    int max = -1; 
    for(int i = (nums.length == 1 && k%2 != 0) ? 1 : 0; i < nums.length && i <= k ; i++)
            max = Math.max(max, i == k - 1 ? -1 : nums[i]); 
    return max;
    }
}