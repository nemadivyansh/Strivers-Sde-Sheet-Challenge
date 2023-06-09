// You are given an array/list 'ARR' of integers of length ‘N’. You are supposed to find all the elements that occur strictly more than floor(N/3) times in the given array/list.

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
       unordered_map<int, int> freq;
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++)
        freq[arr[i]]++;

    for(auto a : freq)
        if(a.second > arr.size()/3) ans.push_back(a.first);

    return ans;

}