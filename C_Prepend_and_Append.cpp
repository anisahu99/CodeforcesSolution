# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition & Approach:
            1. Intuition and Approach is simple
            2. try to check both end follow the condition
            2(a).if follows then discard those elements and go inward the string
            2(b).otherwise we cannot the reduce string anymore inspite of into the string follow the condition.

*/

bool reverseOperationCondition( const string & binary_string, const int &start, const int &end ){
    if(binary_string[start]=='0' && binary_string[end]=='1') return true;
    return false;
}

int shortest_possible_string(const string & binary_string,int &n){
    
    int start = 0, end = n-1;
    bool can_we_reduce = true;
    while( n>1 && start<end && can_we_reduce ){

        // (binary_string[start]=='0' && binary_string[end]=='1' || binary_string[start]=='1' && binary_string[end]=='0')
        if( reverseOperationCondition( binary_string, start, end ) || reverseOperationCondition( binary_string , end, start ) ){
            n -= 2;
            start++, end--;
        }else{
            can_we_reduce = false;
        }
    }
    return n;
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
        string binary_string;
        cin>>binary_string;
        cout<<shortest_possible_string( binary_string, n )<<endl;
    }

    return 0;
}