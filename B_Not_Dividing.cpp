# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)


/*
    Intution:
        1.This question very trick 
        2.it is depend from where you are running loop (from rightside or leftside)
        3.you know if a[i] divide a[i+1] it means a[i+1]>=a[i]
        4.in some testcases incrementing a[i]++ will not work ({2,6}) because 
        incremented a[i] can also divide a[i+1], so you have run a loop to get that number which will not divide the a[i+1], so
        sometimes it will take more than 2*n operation, so increment a[i+1] will work because a[i+1] will become more larger 
        take less operations

        void not_divisible_by_its_left( vector<int> &a, const int &n ){
            for( int i=n-2;i>=0;--i ){
                if( a[i+1]%a[i] ==0 ){
                    // in some scenarios it will take more than 2*n operations
                    // testcase - { 1, 232792560}
                    while( a[i+1]%a[i] ==0 ){
                        a[i]++;
                    }
                }
            }

            for( const int &val: a ){
                cout<<val<<" ";
            }
            cout<<endl;

            }
        this is wrong solution
        testcase - { 1, 232792560}
        you cannot run loop from right side when you do operation like a[i]++
        it will take in some case more than 2*n operation to reach that number which not to divide a[i+1] 


        5. we have to take care of a[i] =1, we will convert all 1 to 2 in begining.



*/


void not_divisible_by_its_left( vector<int> &a, const int &n ){
    for( int i=1;i<n;++i ){
        if( a[i]%a[i-1] ==0 ){
            while( a[i]%a[i-1] ==0 ){
                a[i]++;
            }
        }
    }
    for( const int &val: a ){
        cout<<val<<" ";
    }
    cout<<endl;

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
        for(int i=0;i<n;++i){
            cin>>a[i];
            if(a[i]==1) a[i]++;
        } 
        not_divisible_by_its_left( a, n );
    }

    return 0;
}