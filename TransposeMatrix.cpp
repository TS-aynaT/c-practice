vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int s= matrix.size();
    int temp=0;
    for(int i=0;i<s;i++)
    {
        for(int j=i;j<s;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
                {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }
        }
    }
    return matrix;
}
