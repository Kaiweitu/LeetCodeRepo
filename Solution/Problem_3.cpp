inline int max ( int i1, int i2 ){
    return ( i1 > i2 ) ? i1 : i2;
}
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            int max_length = 0, index = 0, pt ;
                int hash_table[127] = {0};
                for ( pt = 0; pt < s.length() ; pt ++ ){              
                    if ( hash_table[ s[ pt ] ] == 0 ) hash_table[ s[ pt ] ] = pt + 1;
                    else {
                        index = max ( hash_table[ s[ pt ] ], index ) ;
                        hash_table [ s[ pt ] ] = pt  + 1;
                    }
                    max_length = max ( max_length, pt - index + 1);
                }
            return max_length;         
    }
};
