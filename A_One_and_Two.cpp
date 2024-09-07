# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

const int MOD = 1e9+7;

/*
    Intuition & Approach:
                make count2 variable which counts '2' and then see how many count on left and right.
*/

int smallest_possible_k(const vector<int> &a, const int &n){
    int count2 = 0;
    for(int i=0;i<n;i++){
        count2 +=(a[i]==2);
    }

    int leftCount2 = (a[0]==2);
    int rightCount2 = (count2-leftCount2);

    int k=1;
    while(k<n-1){
        if( leftCount2 == rightCount2 ) return k ;
        else{
            leftCount2 += (a[k]==2);
            rightCount2 -= (a[k]==2);
            k++;
        }
    }
    if( leftCount2 == rightCount2 ) return k ;
    else return -1;
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
        cout<<smallest_possible_k( a, n )<<endl;
    }

    return 0;
}