# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

/*
    Idea To solve:
    if we have consecutive 3 empty cells then middle empty cells can be filled by their left and right water cell.
    1. we fill left and right empty cell, middle empty cell by automatically fill by Action1
    2. we take out water from middle cell and fill that water to any empty cell
    and middle cell again will fill by left and right cell.
    From this we can fill any number of cell just by filling 2 empty cell.
    3. if we do not have 3 consecutive cell then we have to fill all cell one by one.

*/

int solve(const string &row, const int &n){
    int consecutive_empty_cell = 0;
    for(int j=0;j<n;j++){
        if(row[j]=='#'){
            consecutive_empty_cell = 0;
        }
        else{
            consecutive_empty_cell++;
            if(consecutive_empty_cell==3) return 2;
        }
    }

    int min_num_times_action1 = 0;
    for(int j=0;j<n;j++){
        if(row[j]=='.') min_num_times_action1++;
    }
    return min_num_times_action1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        string row;
        cin>>n >>row;
        cout<<solve( row, n )<<endl;
    }
 
    return 0;
}