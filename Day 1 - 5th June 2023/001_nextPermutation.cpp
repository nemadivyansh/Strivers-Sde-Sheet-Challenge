#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
      
        int index1 = -1, index2;

        for(int i = nums.size() - 1; i >= 1 ; i--)
        {
            if(nums[i] > nums[i-1])
            {
                index1 = i - 1;
                break;
            }
        }
        if(index1 == -1)
        {
            reverse(nums.begin(), nums.end());
            return nums;
    
        }
        else
        {
            for(int i = nums.size() - 1; i > index1 ; i--)
            {
                if(nums[i] > nums[index1])
                {
                    index2 = i;
                    swap(nums[index1], nums[index2]);
                    break;
                }
            }

            reverse(nums.begin() + index1 + 1, nums.end());
            return nums;
        }
        return nums;
}