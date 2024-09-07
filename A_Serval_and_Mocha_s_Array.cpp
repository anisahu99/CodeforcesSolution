# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition & Approach:
                1. if GCD of whole array is greater than size of array then not possible
                2. otherwise we know if we have minimum gcd greater than 3 of two elements in entire array
                then we can never order the in such fashion where 
                prefixes whose length is no less than 2 are good(all the elements in prefix is no more than its length.)
*/


int GCD(int x, int y){
    while( y!=0 ){
        x = x%y;
        swap(x,y);
    }
    
    return x;
}
// Modulo Operation is slower than bitwise operation and addition and subtraction.

void possible_to_reorder_elements_to_make_beautiful(vector<int> &a, int &n){

    
    int prev_gcd = a[0];
    for(int i=1; i<n;i++){
        prev_gcd = GCD(prev_gcd, a[i]);
    }
    if( prev_gcd > n ){
        cout<<"No"<<endl;
        return;
    }
    else{
        // find two number whose gcd is 1 or 2 then there is always exist order
        // otherwise not possible
        int min_gcd = a[0];
        for( int i=0; i<n; i++ ){
            for( int j=i+1; j<n; j++ ){
                min_gcd = min( min_gcd, GCD( a[i], a[j] ));
            }
        }
        if(min_gcd<3){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        possible_to_reorder_elements_to_make_beautiful(a,n);
    }


    return 0;
}