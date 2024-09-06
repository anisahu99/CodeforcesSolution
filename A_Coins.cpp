# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

void possible_to_represent_n_burles(const long long &n, const long long &k){
    
    if( even(n) ){
        cout<<"YES"<<endl;
    }else{
        if( odd(k) ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n >>k;
        possible_to_represent_n_burles( n,k );
    }
  
    return 0;
}