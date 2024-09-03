# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

void Y(){
  cout<<"YES"<<endl;
}
void N(){
  cout<<"NO"<<endl;
}

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n >>k;
        bool is_k_exist_in_array = false;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            if( x==k ) is_k_exist_in_array = true;
        }
        if(is_k_exist_in_array) Y();
        else N();
    }
 
    return 0;
}