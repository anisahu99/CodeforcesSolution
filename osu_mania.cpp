# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

void Y(){
  cout<<"YES"<<endl;
}
void N(){
  cout<<"NO"<<endl;
}

void solve(const vector<string> &beatmap, const int &n){
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<4;j++){
            if(beatmap[i][j]=='#'){
                ans[n-1-i] = (j+1);
            }
        }
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> beatmap(n);
        for(int i=0;i<n;i++){
            cin>>beatmap[i];
        }
        solve(beatmap, n);
    }
 
    return 0;
}