# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)
/*
    Intuition:
            1. The first case comes to mind when a==b==n then both permutation p and q need to be same.
            2. Otherwise we assume in entire question a is greater than b (a>b).
            2(a). if we make to a length longest common prefixes in p&q then we need to 2 elemnets to break 
            longest common prefix length otherwise its(longest common prefix length) exceed length a
            2(b). and length b not that much greater (n-a) i.e (n-a-b)>=2
            2(c).otherwise extra needed 2 elements cannot exist. 
*/

bool checkConditionForOne(int &num, int &n){
    if( num==n ) return true;
    return false;
}

void such_a_pair_of_permutations_exists(int &n, int &a, int &b){
    if( checkConditionForOne( a,n ) && checkConditionForOne( b,n ) ){
        cout<<"Yes"<<endl;
        return;
    }
    if(a<b){ // to make a>=b in entire problem to solve problem easily
        swap( a,b );
    }

    int remaining_elements = n - a;
    if( remaining_elements-b>=2 ){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n >>a >>b;
        such_a_pair_of_permutations_exists( n, a, b );
    }

    return 0;
}