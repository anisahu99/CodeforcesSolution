# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
                1. the keen observation is if we have worst case like all elements are same then no order exist.
                2.but if we have n-1 elements same and one different element then we can put that one element 
                at second position like ( a b a a a a ) and it can make our array beautiful and follows the
                given condition.

    Approach:
            1.we will check the condition given by question on our array
            1(a).if it matches then no need to change the order.
            1(b).if not then sort the array and count which element has most occurence 
            1(ba).if occurence equals to the array of size then no order exist
            (1bb).if not then order will exist.
*/

void PrintArr(vector<int> &a){
    cout<<"YES"<<endl;
    for( int &val: a ) cout<<val<<" ";
    cout<<endl;
}

void change_the_order_of_elements_of_a(vector<int> &a, const int &n){

    int beforeSum=0;
    bool isBeautiful = true;
    for( int val: a){
        if( beforeSum == val ){
            isBeautiful = false;
            break;
        }else{
            beforeSum += val;
        }
    }

    if( isBeautiful ){
        PrintArr( a );
    }else{
        sort( a.rbegin(), a.rend() );
        int max_consecutive_occurence_element_counts = 0;
        int max_element = a[0];
        int count = 1;

        int i=1;
        while( i<n ){
            while( i<n && a[i-1]==a[i] ){
                i++;
                count++;
            }
            
            if( count>max_consecutive_occurence_element_counts ){
                max_consecutive_occurence_element_counts = count;
                max_element = a[i-1];
            }
            count = 1;
            i++;
        }
        if( count>max_consecutive_occurence_element_counts ){
            max_consecutive_occurence_element_counts = count;
            max_element = a[i-1];
        }
        if( max_consecutive_occurence_element_counts!=n ){
            // cout<<max_consecutive_occurence_element_counts<<endl;
            cout<<"YES"<<endl;
            vector<int> ans;
            for( int val: a ){
                if(val!=max_element) ans.push_back(val);
            }

            if( max_consecutive_occurence_element_counts-- ){
                cout<<max_element<<" ";
            }
            for( int val: ans ){
                if(max_consecutive_occurence_element_counts){
                    cout<<val<<" "<<max_element<<" ";
                    max_consecutive_occurence_element_counts--;
                }else{
                    cout<<val<<" ";
                }
            }
            while( max_consecutive_occurence_element_counts ){
                cout<<max_element<<" ";
                max_consecutive_occurence_element_counts--;
            }
            cout<<endl;

        }else{
            cout<<"NO"<<endl;
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
        for( int i=0; i<n; i++ ) cin>>a[i];
        change_the_order_of_elements_of_a( a, n );

    }

    return 0;
}