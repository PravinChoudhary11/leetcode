class Solution {
public:
    #define max_length 30
    vector<vector<int>> generate(int numRows) {
        int triangle[max_length][max_length] = {0};  
        
        for (int i = 0; i < numRows; i++) {
            triangle[i][0] = 1;
            triangle[i][i] = 1;

            for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        vector<vector<int>> vec;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(triangle[i], triangle[i] + i + 1);
            vec.push_back(row);
        }
        return vec;  
    }
};