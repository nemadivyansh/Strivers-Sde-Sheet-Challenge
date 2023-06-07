#include <bits/stdc++.h> 
void sort012(int * nums, int n)
{
   //   Write your code here
   
        int z = 0;
        int o = 0;
        int t = 0;
        
        // vector<int> numb;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
                z++;
            if(nums[i] == 1)
                o++;
            else
                t++;
        }
        
        for(int i = 0; i < n; i++)
        {
            if(z != 0)
            {
                nums[i] = 0;
                z--;
                continue;
            }
            if(o != 0)
            {
                nums[i] = 1;
                o--;
                continue;
            }
            if(t != 0)
            {
                nums[i] = 2;
                t--;
                continue;
            }
            
        }
}