//Given an m x n matrix, return all elements of the matrix in spiral order.
// 1 2 3 
// 4 5 6
// 7 8 9

//output

// 1->2->3
//       |
// 4->5->6
// |     |
// 7<-8<-9

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        vector<int> ans;
        //index
        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;

        while(count<total){
            //printing starting row
            for(int index=startcol;count<total && index<=endcol;index++){
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++;

            //printing ending column
            for(int index=startrow;count<total && index<=endrow;index++){
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;

            //printing ending row
            for(int index=endcol;count<total && index>=startcol;index--){
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;

            //printing first column
            for(int index=endrow;count<total && index>=startrow;index--){
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }
