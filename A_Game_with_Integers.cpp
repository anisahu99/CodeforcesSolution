# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

/*
    Intution
    1. if given n is divible by 3 then Second always will win
    2. and in other cases First will win always
       because by doing (n+1 or n-1) number will divisle by 3
*/

void solve(int n){
    if( (n+1)%3 ==0 || (n-1)%3 ==0 ){
        cout<<"First"<<endl; 
        return;
    }
        
    if( n%3==0 ) cout<<"Second"<<endl; return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
 
    return 0;
}