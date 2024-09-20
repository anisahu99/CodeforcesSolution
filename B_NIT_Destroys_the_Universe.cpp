# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
            1.We know For a collection of integers S, define mex(S) as the smallest
            non-negative integer that does not appear in S.
            2.if you carefully observe the maximum operation required is 2.
            you can understand by looking the condition below.
*/

int minimum_number_of_operations(const vector<int> &a, const int &n){
    int countContinousZeroSubarray = 0;
    int countContinousNonZeroSubarray = 0;
    for(int i=0;i<n;){
        while( i<n && a[i]==0 ) i++;
        countContinousZeroSubarray++;
        if(i<n){
            countContinousNonZeroSubarray++;
            while( i<n && a[i]!=0 ) i++;
        }
    }
    if( countContinousZeroSubarray ==1 ){
        if( countContinousNonZeroSubarray ==1 ){
            return 1;
        }else if( countContinousNonZeroSubarray == 2 ){
            return 2;
        }else{
            return 0;
        }
    }else if( countContinousZeroSubarray >1 ){
        if( countContinousNonZeroSubarray == 1 ) return 1;
        else{
            return 2;
        }
    }else{
        return 1;
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
        for(int i=0;i<n;++i) cin>>a[i];
        cout<<minimum_number_of_operations( a, n )<<endl;
    }

    return 0;
}