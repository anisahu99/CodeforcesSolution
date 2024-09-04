# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

void Y(){
  cout<<"YES"<<endl;
}
void N(){
  cout<<"NO"<<endl;
}

/*

the problem is all about how will you make condition
and how will you give points

*/
int Points(int row, int col){
    for(int i=0, j=0; i<5; i++, j++){
        if( (row==i && i-1<col&&col<10-i) || (row==9-i && i-1<col&&col<10-i) || (col==j && j-1<row&&row<10-j) || (col==9-j && j-1<row&&row<10-j) ){
            return (i+1);
        }
    }

    int point =0;
    // cout<<"( "<<row<<", "<<col<<" )"<<endl;
    // if( (row==0 && -1<col&&col<10) || (row==9 && -1<col&&col<10) || (col==0 && -1<row&&row<10) || (col==9 && -1<row&&row<10) ){
    //     point+=1;
    //     cout<<1<<endl;
    // }
    // else if( (row==1 && 0<col&&col<9) || (row==8 && 0<col&&col<9) || (col==1 && 0<row&&row<9)|| (col==8 && 0<row&&row<9) ){
    //     point+=2;
    //     cout<<2<<endl;
        
    // }
    // else if( (row==2 && 1<col&&col<8) || (row==7 && 1<col&&col<8) || (col==2 && 1<row&&row<8)|| (col==7 && 1<row&&row<8) ){
    //     point+=3;
    //     cout<<3<<endl;
        
    // }
    // else if( (row==3 && 2<col&&col<7) || (row==6 && 2<col&&col<7) || (col==3 && 2<row&&row<7) || (col==6 && 2<row&&row<7) ){
    //     point+=4;
    //     cout<<4<<endl;
        
    // }
    // else if( (row==4 && 3<col&&col<6) || (row==5 && 3<col&&col<6) || (col==4 && 3<row&&row<6) || (col==5 && 3<row&&row<6) ){
    //     point+=5;
    //     cout<<5<<endl;
    // }
    // return point;
}

int total_number_of_points_of_the_arrows(const vector<string> &target){
    int point = 0;

    for(int row=0; row<10; row++){
        for(int col =0; col<10; col++){
            if(target[row][col]=='X'){
                point+=Points(row,col);
                
            }
        }
    }
    return point;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        vector<string> target(10);
        for(int i=0;i<10;i++){
            cin>>target[i];
        }
        cout<< total_number_of_points_of_the_arrows(target)<<endl;
    }
 
    return 0;
}