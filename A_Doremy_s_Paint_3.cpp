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
    Logic is if we have more than 2 distinct number it never possible to get adjacent sum same
*/

void solve(const vector<int> &a, const int &n){
    unordered_map<int,int> numFreq;

    for(const int &val:a){
        numFreq[val]++;
        if(numFreq.size()>2){
            N();
            return;
        }
    }
    int first_num_count = 0, second_num_count = 0;
    int i=0;
    for( auto it:numFreq ){
        if(i==0){
            first_num_count = it.second;
        }
        else{
            second_num_count = it.second;
            break;
        }
        i++;
    }
    // cout<<first_num_count<<", "<<second_num_count<<endl;
    if(first_num_count&&second_num_count&&abs(first_num_count-second_num_count)>1){
        N();
        return;
    }
    Y();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(a,n);
    }
 
    return 0;
}