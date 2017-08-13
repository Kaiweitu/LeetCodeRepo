/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
            if( nums.size() == 0 ) return NULL;
            vector<int>::iterator it  = nums.begin();
            pair< int , vector<int>::iterator > max = make_pair( *it , it );
            for ( it = nums.begin() + 1; it != nums.end(); it ++ ){
                if ( *it > max.first ) {
                    max.first = *it;
                    max.second = it;
                }
            }
            TreeNode *new_node = new TreeNode( max.first );
            vector<int> nums_left( nums.begin(), max.second );
            vector<int> nums_right( max.second + 1, nums.end() );
            new_node -> left = constructMaximumBinaryTree( nums_left );
            new_node -> right = constructMaximumBinaryTree( nums_right );
            return new_node;
    }
};
