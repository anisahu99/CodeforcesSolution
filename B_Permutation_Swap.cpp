# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)
/*
    Intuition:
        1. the answer is always exist why because by choosing k=1 we can swap
        elements one by one and we will get the sorted array.
        2.how far element from its correct position

        Why TC is O(n + log(n)) : https://codeforces.com/blog/entry/63771

*/

int GCD(int x, int y){
    while( y!=0 ){
        x = x%y;
        swap(x,y);
    }
    return x;
}

int maximum_value_of_k(const vector<int> &a, const int &n){
    int gcd = 0;
    for(int i=1;i<=n;++i){
        gcd = GCD( gcd, abs(a[i]-i) );
    }
    return gcd;
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
        vector<int> a(n+1);
        for(int i=1;i<=n;++i) cin>>a[i];
        cout<<maximum_value_of_k( a, n )<<endl;
    }

    return 0;
}