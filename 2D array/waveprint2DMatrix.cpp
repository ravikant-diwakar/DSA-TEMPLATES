#include <iostream>
#include <vector>



using namespace std;

void wavePrintrow(vector<vector<int>> v){
    int n=v.size();
    int m=v[0].size();
    for(int startRow=0;startRow<n;startRow++){
        //for even rows->top to bottom
        if((startRow & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v[startRow][i]<<" ";
            }

        }
        
        else{
            
            //for odd rows-> bottom up
            for(int j=m-1;j>=0;j--){
                cout<<v[startRow][j]<<" ";

            }

        }
        
        cout<<endl;
    }

}

void wavePrintcol(vector<vector<int>> v){
    int m=v.size();
    int n=v[0].size();

    for(int startCol=0;startCol<n;startCol++){
        //even column->top to bottom
        if((startCol & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v[i][startCol]<<" ";
            }

        }
        else{
            //for odd colum-> bottom down
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startCol]<<" ";
            }
        }
        cout<<endl;
    
    }
}


int main(){
    vector<vector<int>> v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    wavePrintcol(v);

    cout<<"wave row"<<endl;
    wavePrintrow(v);
    return 0;
}
