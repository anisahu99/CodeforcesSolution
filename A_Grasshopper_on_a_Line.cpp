# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

void the_smallest_number_of_moves(int x, int k){
    if(x%k!=0){
        cout<<1<<endl<<x<<endl;
    }else{
        cout<<2<<endl<<x+1<<" "<<-1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int x, k;
        cin>>x >>k;
        the_smallest_number_of_moves(x, k);
    }
  
    return 0;
}