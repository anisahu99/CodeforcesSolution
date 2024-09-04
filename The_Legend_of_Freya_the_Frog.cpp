# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

void Y(){
  cout<<"YES"<<endl;
}
void N(){
  cout<<"NO"<<endl;
}

int minimum_amount_of_moves(const int &x, const int &y, const int &k){

    int min_jump_x =1;
    int min_jump_y =1;

    if(x%k==0){
        min_jump_x = x/k;
    }else{
        min_jump_x +=x/k;
    }
    if(y%k==0){
        min_jump_y = y/k;
    }else{
        min_jump_y +=y/k;
    }

    if(min_jump_x<=min_jump_y){
        return 2*min_jump_y;
    }else{
        return 2*min_jump_x-1;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int x, y, k;
        cin>>x >>y >>k;
        cout<<minimum_amount_of_moves(x, y, k)<<endl;
    }
 
    return 0;
}

/*

let x ==11 y ==9 k ==3

here x>y

(0,0)->(3,0)->(3,3)->(6,3)->(6,6)->(9,6)->(9,9)->(11,9)->

*/