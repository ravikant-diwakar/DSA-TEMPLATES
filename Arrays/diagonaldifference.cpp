//Given a square matrix, calculate the absolute difference between the sums of its diagonals.


int diagonalDifference(vector<vector<int>> arr) {
    int ldiag=0;
    int rdiag=0;
    int n=arr.size()-1;
    int diagdiff;
    for (int i=0;i<arr.size();i++){
        ldiag+=arr[i][i];
        rdiag+=arr[i][n];
        n--; 
        
    }
    diagdiff=ldiag-rdiag;
    
    return abs(diagdiff);
    

}
