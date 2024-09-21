# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Mine
    Intuition:
        1.if any element equal to zero then we cannot make its left less than zero
        we will simply return -1.
        2.otherwise we always have answer.

*/

int minimum_number_of_operations( vector<int> &a, const int &n ){
    
    int ops = 0;
    for( int i=n-2;i>=0;--i ){
        int right = a[i+1];
        int left = a[i];
        if(right!=0&&right<left){
            while(right<=left){
                left /=2;
                ops++;
            }
            if(right>left){
                a[i] = left;
            }else{
                return -1;
            }
        }else if( right==left && left!=0 ){
            while(right==left){
                left /=2;
                ops++;
            }
            if(right>left){
                a[i] = left;
            }else{
                return -1;
            }
        }else if(right>left){
            a[i] = left;
        }else{
            return -1;
        }
    }
    return ops;
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