class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        vector<int> stack;
        int index = 0;
        for ( int i = 0 ; i< 2 * nums.size(); i ++ ){
            if ( stack.size() == 0 || nums[stack.back()] >= nums[index] ){
                stack.push_back( index ) ;
                index = (index + 1) % nums.size();
            }
            while ( nums[stack.back()] < nums[index] && stack.size()!= 0 ){
                ans[ stack.back() ] = nums[index];
                stack.pop_back();
            }   
        }
        return ans;
    }
};
