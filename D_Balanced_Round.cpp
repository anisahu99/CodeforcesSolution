# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
            1.the first thing is we need to remove minimum problem so we
            can do that.
            2. simply arrange elements in sorted manner
            3.find out longest interval in which consecutive absolute difference 
            between the difficulty of any two consecutive problems <= k.
    
    Approach:
            1.if one element is present then we do not need to remove any element.
            2.Sort the array ( in any order )
            3.take variable longest_balanced_length which store length of longest
            balanced length.
            3a.take length variable to store current length of interval
            4.start loop from i=1, length = 1
            4a.if we get two elements a[i-1],a[i] whose difference > k
            then store length value to longest_balanced_length 
            if (length>longest_balanced_length) and intialize length = 1
            4b.otherwise increase current_interval length(length++)

            5.the minimum remove is equal to n-longest_balanced_length.
*/

int minimum_number_of_operations( vector<int> &a, const int &n, const int &k ){
    if( n==1 ) return 0;
    sort( a.begin(), a.end() );
    int longest_balanced_length = 0;
    int length = 1;
    
    for( int i=1; i<n; ++i ){
        if( a[i] - a[i-1] > k ){
            longest_balanced_length = max( longest_balanced_length, length );
            length = 1;
        }else{
            length++;
        }
    }
    longest_balanced_length = max( longest_balanced_length, length );

    return n-longest_balanced_length;
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
        vector<int> a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        cout<<minimum_number_of_operations( a, n, k )<<endl;
    }

    return 0;
}