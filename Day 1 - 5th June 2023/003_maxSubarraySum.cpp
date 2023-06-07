#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    //Kadane's algorithm

    long long globalMax = 0;
    long long localMax = 0;

    for(int i = 0; i < n; i++){
        localMax = max(localMax + static_cast<long long int>(arr[i]), static_cast<long long int>(arr[i]));
        globalMax = max(localMax, globalMax);
    }
    return globalMax;

}