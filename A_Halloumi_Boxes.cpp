# include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(const vector<int> &boxes, const int &n, const int &k){
    if(k>1){
        cout<<"YES"<<endl;
        return;
    }

    for(int i=1;i<n;i++){
        if(boxes[i-1]>boxes[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n >>k;
        vector<int> boxes(n);
        for(int i=0;i<n;i++){
            cin>>boxes[i];
        }
        solve(boxes, n, k);
    }
 
    return 0;
}