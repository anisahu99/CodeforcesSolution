# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(int a, int b, int c){
    if(c&1) a++;
    if(a>b){
        cout<<"First"<<endl;
    }else{
        cout<<"Second"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a >>b >>c;
        solve(a, b, c);
    }
  
    return 0;
}