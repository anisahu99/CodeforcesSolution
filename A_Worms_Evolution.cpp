# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(vector<int> &v ,int &n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(v[i]==v[j]+v[k]){
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    return;
                }else if(v[j]==v[i]+v[k]){
                    cout<<j+1<<" "<<i+1<<" "<<k+1<<endl;
                    return;
                }else if(v[k]==v[i]+v[j]){
                    cout<<k+1<<" "<<i+1<<" "<<j+1<<endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    solve( v, n );
    return 0;
}