#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
       vector<vector<long long int>> arr(n); 
    for(int i = 0; i < n ; i++)
    {
        // vector<int> temp;
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i )
            {
                // temp.push_back(1);
                arr[i].push_back(1);
            }
            else{
                arr[i].push_back(arr[i-1][j-1] + arr[i-1][j]);            
            }
        }
    }
    return arr;
}
