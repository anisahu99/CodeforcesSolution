# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

void Y(){
  cout<<"YES"<<endl;
}
void N(){
  cout<<"NO"<<endl;
}


/*

1. Team1(T1) all their matches and calculate total goals score by T1 and total goals of other teams
 and find out efficiency we do for all teams.

(a1+a2+a3) - (b1+c1+d1) = 3; // efficiency of Team1
(b1+b2+b3) - (a1+c2+d2) = -4; // efficiency of Team2
(c1+c2+c3) - (a2+b2+d3) = 5; // efficiency of Team3
let x is efficiency of Team 4
(d1+d2+d3) - (a3+b3+c3) = X; // efficiency of Team4

sum all four eqaution we will get 
X = -4
*/



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int total_efficiency_except_one = 0;
        for(int i=0;i<n-1;i++){
          int x;
          cin>>x;
          total_efficiency_except_one +=x;
        }
        total_efficiency_except_one = -1*total_efficiency_except_one;
        cout<<total_efficiency_except_one<<endl;
    }
 
    return 0;
}