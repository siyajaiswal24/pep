//1.
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int left = 0, right = height.size() - 1;
//         int maxWater = 0;

//         while (left < right) {
//             int h = min(height[left], height[right]);
//             int w = right - left;
//             maxWater = max(maxWater, h * w);

//             // Move the smaller height pointer
//             if (height[left] < height[right])
//                 left++;
//             else
//                 right--;
//         }

//         return maxWater;
//     }
// };


//2.
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>> ans;
//         int n = nums.size();
//         if (n < 4) return ans;

//         sort(nums.begin(), nums.end());

//         for (int i = 0; i < n - 3; i++) {
//             if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate i

//             for (int j = i + 1; j < n - 2; j++) {
//                 if (j > i + 1 && nums[j] == nums[j - 1]) continue; // skip duplicate j

//                 int left = j + 1, right = n - 1;

//                 while (left < right) {
//                     long long sum =
//                         (long long)nums[i] + nums[j] + nums[left] + nums[right];

//                     if (sum == target) {
//                         ans.push_back({nums[i], nums[j], nums[left], nums[right]});

//                         // skip duplicates
//                         while (left < right && nums[left] == nums[left + 1]) left++;
//                         while (left < right && nums[right] == nums[right - 1]) right--;

//                         left++;
//                         right--;
//                     }
//                     else if (sum < target) {
//                         left++;
//                     }
//                     else {
//                         right--;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };

//3.
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k = 0; // index for valid elements

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != val) {
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }
//         return k;
//     }
// };
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.size();
//         int m = needle.size();

//         for (int i = 0; i <= n - m; i++) {
//             int j = 0;
//             while (j < m && haystack[i + j] == needle[j]) {
//                 j++;
//             }
//             if (j == m) return i;
//         }
//         return -1;
//     }
// };

//4.
//⁠  ⁠https://leetcode.com/problems/container-with-most-water/description/
//class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int left = 0;
//         int right = height.size() - 1;
//         int maxWater = 0;

//         while (left < right) {
//             int h = min(height[left], height[right]);
//             int width = right - left;
//             int area = h * width;

//             maxWater = max(maxWater, area);

//             if (height[left] < height[right]) {
//                 left++;
//             } else {
//                 right--;
//             }
//         }

//         return maxWater;
//     }
// };

//5.
// https://leetcode.com/problems/4sum/
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>> result;
//         int n = nums.size();
        
//         sort(nums.begin(), nums.end());
        
//         for (int i = 0; i < n - 3; i++) {
//             if (i > 0 && nums[i] == nums[i - 1]) continue;
            
//             for (int j = i + 1; j < n - 2; j++) {
//                 if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                
//                 int left = j + 1;
//                 int right = n - 1;
                
//                 while (left < right) {
//                     long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    
//                     if (sum == target) {
//                         result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
//                         while (left < right && nums[left] == nums[left + 1]) left++;
//                         while (left < right && nums[right] == nums[right - 1]) right--;
                        
//                         left++;
//                         right--;
//                     }
//                     else if (sum < target) {
//                         left++;
//                     }
//                     else {
//                         right--;
//                     }
//                 }
//             }
//         }
        
//         return result;
//     }
// };

//6.
//7. https://leetcode.com/problems/remove-element/
//8. - https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
//9. - https://leetcode.com/problems/trapping-rain-water/
//10. - https://leetcode.com/problems/valid-palindrome/description/
//11. - https://leetcode.com/problems/intersection-of-two-arrays/description/
//12. - https://leetcode.com/problems/is-subsequence/
//7.
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int index = 0;  // position to place valid elements
        
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != val) {
//                 nums[index] = nums[i];
//                 index++;
//             }
//         }
        
//         return index;  // new length
//     }
// };

//8.
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.length();
//         int m = needle.length();

//         if (m > n) return -1;

//         for (int i = 0; i <= n - m; i++) {
//             int j = 0;

//             while (j < m && haystack[i + j] == needle[j]) {
//                 j++;
//             }

//             if (j == m) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };

//9.
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int left = 0;
//         int right = height.size() - 1;
//         int leftMax = 0, rightMax = 0;
//         int water = 0;

//         while (left < right) {
//             if (height[left] < height[right]) {
//                 if (height[left] >= leftMax) {
//                     leftMax = height[left];
//                 } else {
//                     water += leftMax - height[left];
//                 }
//                 left++;
//             } else {
//                 if (height[right] >= rightMax) {
//                     rightMax = height[right];
//                 } else {
//                     water += rightMax - height[right];
//                 }
//                 right--;
//             }
//         }

//         return water;
//     }
// };

//10.
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int left = 0;
//         int right = s.length() - 1;

//         while (left < right) {
            
//             // Skip non-alphanumeric characters
//             while (left < right && !isalnum(s[left])) left++;
//             while (left < right && !isalnum(s[right])) right--;
            
//             // Compare lowercase characters
//             if (tolower(s[left]) != tolower(s[right])) {
//                 return false;
//             }
            
//             left++;
//             right--;
//         }

//         return true;
//     }
// };

//11.
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> set1(nums1.begin(), nums1.end());
//         unordered_set<int> resultSet;

//         for (int num : nums2) {
//             if (set1.count(num)) {
//                 resultSet.insert(num);
//             }
//         }

//         return vector<int>(resultSet.begin(), resultSet.end());
//     }
// };

//12.

// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int i = 0; // pointer for s
//         int j = 0; // pointer for t

//         while (i < s.length() && j < t.length()) {
//             if (s[i] == t[j]) {
//                 i++;
//             }
//             j++;
//         }

//         return i == s.length();
//     }
// };

// 13. - https://leetcode.com/problems/find-all-anagrams-in-a-string/description/?envType=problem-list-v2&envId=sliding-window
// 14. - https://www.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1
// 15. - https://leetcode.com/problems/longest-harmonious-subsequence/description/?envType=problem-list-v2&envId=sliding-window

//13.
// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int> result;
//         if (s.length() < p.length()) return result;

//         vector<int> freqP(26, 0), freqS(26, 0);

//         // Count frequency of characters in p
//         for (char c : p) {
//             freqP[c - 'a']++;
//         }

//         int windowSize = p.length();

//         for (int i = 0; i < s.length(); i++) {
//             // Add current character to window
//             freqS[s[i] - 'a']++;

//             // Remove character outside window
//             if (i >= windowSize) {
//                 freqS[s[i - windowSize] - 'a']--;
//             }

//             // Compare frequency arrays
//             if (freqS == freqP) {
//                 result.push_back(i - windowSize + 1);
//             }
//         }

//         return result;
//     }
// };

//14.
// class Solution {
//   public:
//     int minSwap(vector<int>& arr, int k) {
        
//         int n = arr.size();
//         int good = 0;
        
//         // Count elements <= k
//         for(int i = 0; i < n; i++) {
//             if(arr[i] <= k)
//                 good++;
//         }
        
//         // Count bad elements in first window
//         int bad = 0;
//         for(int i = 0; i < good; i++) {
//             if(arr[i] > k)
//                 bad++;
//         }
        
//         int ans = bad;
        
//         // Slide the window
//         for(int i = 0, j = good; j < n; i++, j++) {
            
//             // Remove left element from window
//             if(arr[i] > k)
//                 bad--;
                
//             // Add right element to window
//             if(arr[j] > k)
//                 bad++;
                
//             ans = min(ans, bad);
//         }
        
//         return ans;
//     }
// };

//15.
// class Solution {
// public:
//     int findLHS(vector<int>& nums) {
//         unordered_map<int, int> freq;
        
//         // Count frequency of each number
//         for (int num : nums) {
//             freq[num]++;
//         }
        
//         int maxLen = 0;
        
//         // Check pairs with difference 1
//         for (auto &it : freq) {
//             int key = it.first;
            
//             if (freq.count(key + 1)) {
//                 maxLen = max(maxLen, it.second + freq[key + 1]);
//             }
//         }
        
//         return maxLen;
//     }
// };

// 16. - https://leetcode.com/problems/missing-number/
// 17. - https://leetcode.com/problems/first-bad-version/
// 18. - https://leetcode.com/problems/find-right-interval/
// 19. - https://leetcode.com/problems/arranging-coins/
// 20. - https://leetcode.com/problems/single-element-in-a-sorted-array/
// 21. - https://leetcode.com/problems/valid-triangle-number/

//16.
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
        
//         int totalSum = n * (n + 1) / 2;
//         int arraySum = 0;
        
//         for (int num : nums) {
//             arraySum += num;
//         }
        
//         return totalSum - arraySum;
//     }
// };

//17.
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// class Solution {
// public:
//     int firstBadVersion(int n) {
//         long left = 1, right = n;
        
//         while (left < right) {
//             long mid = left + (right - left) / 2;
            
//             if (isBadVersion(mid)) {
//                 right = mid;   // first bad is at mid or before
//             } else {
//                 left = mid + 1;  // first bad is after mid
//             }
//         }
        
//         return left;
//     }
// };

//18.
// class Solution {
// public:
//     vector<int> findRightInterval(vector<vector<int>>& intervals) {
//         int n = intervals.size();
//         vector<int> result(n, -1);

//         // Store {start, index}
//         vector<pair<int, int>> starts;
//         for (int i = 0; i < n; i++) {
//             starts.push_back({intervals[i][0], i});
//         }

//         // Sort by start value
//         sort(starts.begin(), starts.end());

//         for (int i = 0; i < n; i++) {
//             int end = intervals[i][1];

//             // Binary search for smallest start >= end
//             int left = 0, right = n - 1;
//             int pos = -1;

//             while (left <= right) {
//                 int mid = left + (right - left) / 2;

//                 if (starts[mid].first >= end) {
//                     pos = starts[mid].second;
//                     right = mid - 1;  // try to find smaller valid start
//                 } else {
//                     left = mid + 1;
//                 }
//             }

//             result[i] = pos;
//         }

//         return result;
//     }
// };

//19.
// class Solution {
// public:
//     int arrangeCoins(int n) {
//         long left = 1, right = n;
        
//         while (left <= right) {
//             long mid = left + (right - left) / 2;
//             long coins = mid * (mid + 1) / 2;
            
//             if (coins == n) {
//                 return mid;
//             }
//             else if (coins < n) {
//                 left = mid + 1;
//             }
//             else {
//                 right = mid - 1;
//             }
//         }
        
//         return right;
//     }
// };

//20.
// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int left = 0;
//         int right = nums.size() - 1;

//         while (left < right) {
//             int mid = left + (right - left) / 2;

//             // Ensure mid is even index
//             if (mid % 2 == 1) mid--;

//             if (nums[mid] == nums[mid + 1]) {
//                 left = mid + 2;   // single element is on right side
//             } else {
//                 right = mid;      // single element is on left side
//             }
//         }

//         return nums[left];
//     }
// };

//21.
// class Solution {
// public:
//     int triangleNumber(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         int count = 0;

//         for (int i = n - 1; i >= 2; i--) {
//             int left = 0;
//             int right = i - 1;

//             while (left < right) {
//                 if (nums[left] + nums[right] > nums[i]) {
//                     count += (right - left);
//                     right--;
//                 } else {
//                     left++;
//                 }
//             }
//         }

//         return count;
//     }
// };

// 22. https://leetcode.com/problems/magnetic-force-between-two-balls/
// 23. https://leetcode.com/problems/first-bad-version/

//22.
// class Solution {
// public:
//     bool canPlace(vector<int>& position, int m, int dist) {
//         int count = 1; // first ball placed
//         int lastPos = position[0];

//         for (int i = 1; i < position.size(); i++) {
//             if (position[i] - lastPos >= dist) {
//                 count++;
//                 lastPos = position[i];
//             }
//             if (count >= m) return true;
//         }
//         return false;
//     }

//     int maxDistance(vector<int>& position, int m) {
//         sort(position.begin(), position.end());

//         int left = 1;
//         int right = position.back() - position.front();
//         int ans = 0;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;

//             if (canPlace(position, m, mid)) {
//                 ans = mid;
//                 left = mid + 1;   // try bigger distance
//             } else {
//                 right = mid - 1;  // reduce distance
//             }
//         }

//         return ans;
//     }
// };

//23.
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// class Solution {
// public:
//     int firstBadVersion(int n) {
//         long left = 1, right = n;

//         while (left < right) {
//             long mid = left + (right - left) / 2;

//             if (isBadVersion(mid)) {
//                 right = mid;      // first bad version is at mid or before
//             } else {
//                 left = mid + 1;   // first bad version is after mid
//             }
//         }

//         return left;
//     }
// };

// 24. https://leetcode.com/problems/first-unique-character-in-a-string/description/
// 25. https://leetcode.com/problems/longest-common-prefix/
// 26. https://leetcode.com/problems/longest-substring-without-repeating-characters/
// 27. https://leetcode.com/problems/group-anagrams/
// 28. https://leetcode.com/problems/string-compression/description/
// 29. https://www.geeksforgeeks.org/problems/palindrome-string0817/1
// 30. https://www.geeksforgeeks.org/problems/factorial5739/1

//24.
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int> freq(26, 0);

//         // Count frequency of each character
//         for (char c : s) {
//             freq[c - 'a']++;
//         }

//         // Find first character with frequency 1
//         for (int i = 0; i < s.length(); i++) {
//             if (freq[s[i] - 'a'] == 1) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };

// //25.
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return "";

//         string prefix = strs[0];

//         for (int i = 1; i < strs.size(); i++) {
//             while (strs[i].find(prefix) != 0) {
//                 prefix.pop_back();
//                 if (prefix.empty()) return "";
//             }
//         }

//         return prefix;
//     }
// };

//26.
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         vector<int> lastIndex(256, -1);
//         int left = 0;
//         int maxLen = 0;

//         for (int right = 0; right < s.length(); right++) {
//             if (lastIndex[s[right]] >= left) {
//                 left = lastIndex[s[right]] + 1;
//             }

//             lastIndex[s[right]] = right;
//             maxLen = max(maxLen, right - left + 1);
//         }

//         return maxLen;
//     }
// };

//27.
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string, vector<string>> mp;

//         for (string s : strs) {
//             string key = s;
//             sort(key.begin(), key.end());   // sorted string as key
//             mp[key].push_back(s);
//         }

//         vector<vector<string>> result;

//         for (auto &it : mp) {
//             result.push_back(it.second);
//         }

//         return result;
//     }
// };

//28.
// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int n = chars.size();
//         int i = 0;        // read pointer
//         int index = 0;    // write pointer

//         while (i < n) {
//             char current = chars[i];
//             int count = 0;

//             // Count consecutive characters
//             while (i < n && chars[i] == current) {
//                 i++;
//                 count++;
//             }

//             // Write character
//             chars[index++] = current;

//             // Write count if > 1
//             if (count > 1) {
//                 string cnt = to_string(count);
//                 for (char c : cnt) {
//                     chars[index++] = c;
//                 }
//             }
//         }

//         return index;
//     }
// };

//29.
// class Solution {
//   public:
//     bool isPalindrome(string& s) {
//         int left = 0;
//         int right = s.length() - 1;

//         while (left < right) {
//             if (s[left] != s[right])
//                 return false;
//             left++;
//             right--;
//         }
//         return true;
//     }
// };

//30.
// class Solution {
//   public:
//     int factorial(int n) {
//         int result = 1;
        
//         for(int i = 1; i <= n; i++) {
//             result *= i;
//         }
        
//         return result;
//     }
// };

//31. 31. https://leetcode.com/problems/valid-sudoku/
// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         vector<set<char>> rows(9), cols(9), boxes(9);

//         for (int i = 0; i < 9; i++) {
//             for (int j = 0; j < 9; j++) {

//                 if (board[i][j] == '.') continue;

//                 char num = board[i][j];
//                 int boxIndex = (i / 3) * 3 + (j / 3);

//                 // Check if number already exists
//                 if (rows[i].count(num) || 
//                     cols[j].count(num) || 
//                     boxes[boxIndex].count(num)) {
//                     return false;
//                 }

//                 rows[i].insert(num);
//                 cols[j].insert(num);
//                 boxes[boxIndex].insert(num);
//             }
//         }

//         return true;
//     }
// };

//32. https://leetcode.com/problems/power-of-two/

