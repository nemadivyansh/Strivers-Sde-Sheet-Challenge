bool searchMatrix(vector<vector<int>>& matrix, int target) {        
        int i = 0;
        int j = 0;
        
        if(matrix[0][0] == target) return true;
        if(matrix[0][0] > target) return false;
        
        while(i < matrix.size())
        {
            if(matrix[i][0] <= target && matrix[i][matrix[i].size() - 1] >= target)
            {
                while(j <= matrix[i].size() - 1)
                {
                if(matrix[i][j] == target) return true;
                j++;   
                }
                return false;
            }
            i++;
        }
        return false;
}