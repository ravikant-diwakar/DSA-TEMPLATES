//Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

//Integers in each row are sorted in ascending from left to right.
//Integers in each column are sorted in ascending from top to bottom.

//ex-:
// 1 4 7 11 15
// 2 5 8 12 19
// 3 6 9 16 22
//10 13 14 17 24
//18 21 23 26 30



bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rowindex=0;
        int colindex=col-1;
        while(rowindex<row && colindex>=0){
            int element=matrix[rowindex][colindex];
            if(element==target)
            {
                return true;

            }
            else if(element<target){
                rowindex++;
            }
            else{
                colindex--;
            }
        }
        return 0;
    
    }
