#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	// Write your code here.
    set<int> found;
    for(int i = 0 ; i < nums.size(); i++)
    {
        if(!found.count(nums[i]))
            found.insert(nums[i]);
        
        else return nums[i];
    }
    return 0;
}
