# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
        1. if we want fill array with same element then
        1a. we have to pick that element which occurence most in the array
        1c.because after clonning array that element becomes more in count and which
        full fill our requirements.
*/

long long minimum_number_of_operations(const vector<int> &a, const int &n){
    map< int,int > freq;
    int count = 0;
    for( const int &val : a ){
        freq[val]++;
        count = max( count, freq[val] );
    }
    int initialCount = count;
    int countClone = 0;

    while( count != n ){
        if( count*2 <= n ){
            countClone++;
            count *=2;

        }else if( count*2 > n ){
            countClone++;
            count += ( n-count );
        }
    }
    return count + countClone - initialCount ;  
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
        vector<int> a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        cout<<minimum_number_of_operations( a, n )<<endl;
    }

    return 0;
}