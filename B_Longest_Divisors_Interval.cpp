# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

// 10^7 is Permissible size in Time Complexity
// Intuition and Proof link
// https://math.stackexchange.com/questions/4744567/longest-sequence-of-consecutive-divisors-of-an-integer



long long maximum_size_of_a_valid_interval( const long long &n ){
    
    for( long long i=1; ; i++ ){
        if( n%i!=0 ){
            return i-1;
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
        long long n;
        cin>>n;
        cout<<maximum_size_of_a_valid_interval( n )<<endl;
    }

    return 0;
}