# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Think about bound(bounce) using what lowest and highest sum, of k number.
*/

string solve(int &n, int &k, long long &x){
    long long low = ( k*1LL*(1LL*k+1) )/2;
    long long high = ( ( 2*n*1LL - k*1LL + 1*1LL )* ( k*1LL ) ) / ( 2*1LL ) ;
    
    return (x<low || x>high) ? "NO" : "YES";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        long long x;
        cin>>n >>k >>x;
        cout<<solve( n, k, x )<<endl;
    }

    return 0;
}