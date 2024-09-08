# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
            1. we know, Odd*Odd = Odd -----1
                        Even*Even = Even --2
                        Odd*Even = Even ---3
            2.After knowing these operations, we found that
            2(a). if we have consecutive odd or even element to make adjacent element with different
            parity so we have to multiply all even or odd element to make their adjacent element of 
            dfferent parity.
    
    Approach:
            1. Simply count consecutive odd or even elements and we need to remove and product 
            (count-1) operations.
*/

int minimum_number_of_operations(const vector<int> &a, const int &n){

    int min_ops = 0;
    for( int i=1; i<n; i++){
        int count = 1;
        while( i<n && ( ( odd(a[i-1]) && odd(a[i]) ) || ( even(a[i-1]) && even(a[i]) ) ) ){
            count++;
            i++;
        }
        min_ops += count-1;
    }
    return min_ops;
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
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<minimum_number_of_operations( a, n )<<endl;
    }

    return 0;
}