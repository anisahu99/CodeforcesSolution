# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
            1. we have to take l, r, k so we create a triplet class to store them
            2. in every query we need left sum and right sum of array so we create
            array to store sum from left and right of every position.
*/

class Triplet{
    public:
    int first, second, third;
};

int answer_query(const vector<int> &a, const int &n, const vector<Triplet> &queries, const int &q){
    vector<long long>prefixSum(n+1), suffixSum(n+2);
    for( int i=1,j=n; i<=n && j>=1; ++i,--j){
        prefixSum[i] = prefixSum[i-1] + a[i];
        suffixSum[j] = a[j] + suffixSum[j+1];
    }

    for( const Triplet &t: queries ){
        int r = t.second, l = t.first, k = t.third;
        long long sum1 = ( r - l + 1 ) * k ;
        long long sum2 = prefixSum[l-1] + suffixSum[r+1];
        if( odd( sum1+sum2 ) ){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n >>q;

        vector<int> a(n+1);
        for(int i=1;i<=n;++i) cin>>a[i];

        vector<Triplet> queries(q);
        for(int i=0;i<q;++i){
            cin>>queries[i].first >>queries[i].second >>queries[i].third;
        }
        answer_query( a, n, queries, q );
    }

    return 0;
}