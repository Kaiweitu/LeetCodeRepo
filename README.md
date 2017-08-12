# LeetCodeRepo
This repo is used to record the solutions for the problems on [LeetCode]:<https://leetcode.com>
## Lists
- #3 Longest Substring Without Repeating Characters
## Understanding and solutions 
### #3 Longest Substring Without Repeating Characters 
**Description:** 
Given a string s, find the length of the longest substring without repeating characters.  
**Solution:** 
Data Structure: Using hash table to search whether character s<sub>i</sub> appear in the substring s<sub>index, i-1 </sub>.
Algorithm: Using charater as the key, and the largest subscribe of the same character in the string as the values. Using one right pointer to scan through the string. Update the hash table while scaning the string. If the character hasn't appeared in the string, then update its location. If the character already in the string, move the left pointer to this location, and then update the location of this character. 
Time Complexity: The time complexity of searching an element in a hash table is O(1). The time complexity of scanning through the string is O(n). Thus, the complexity of this algorithm is O(n). 
