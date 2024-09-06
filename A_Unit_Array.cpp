# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int minimum_number_of_operations(int &CountPlusOne, int &CountMinusOne){
    if( CountPlusOne>CountMinusOne ){
        // cout<<"Hello1"<<endl;
        
        if(!(CountMinusOne&1) ) return 0;
        if( CountMinusOne ) return 1;
    }else if( CountPlusOne==CountMinusOne ){
        // cout<<"Hello2"<<endl;

        if( CountMinusOne&1 ) return 1;
        else{
            return 0;
        }
    }
    else{
        // cout<<"Hello3"<<endl;

        int difference = abs(CountPlusOne+(-1*CountMinusOne));
        //  but we convert -1 to 1 so our gain will be the +2
        int required_turn = difference/2;
        if(difference&1) required_turn++;
        
        if( ( abs(required_turn-CountMinusOne)&1 ) ) return required_turn+1;
        else return required_turn;
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
        int CountMinusOne = 0;
        int CountPlusOne = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                CountPlusOne++;
            }else{
                CountMinusOne++;
            }
        }
        cout<<minimum_number_of_operations(CountPlusOne, CountMinusOne)<<endl;
    }
    return 0;
}