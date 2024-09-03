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


1< n*m ≤ 25
len(x) = n, len(s) = m
X > XX > XXXX -> XXXXXXXX -> XXXXXXXXXXXXXXXX
Worst Case
n = 1, m= 25
X = "a"
S = "aaaa .. 25times"
'a' -> 'aa' -> 'aaaa' -> aaaaaaaa -> 16 ->32
0        1       2         3          4    5

Try doing the operation 5 times
Even after 5 operations, s is not part of x > print(-1)
If after applying operation ith time > print(i)
*/

int minimum_number_of_operations(string &x, int &n, const string &s, const int &m){

    for(int ops =0;ops<=5;ops++){
        if(x.find(s)!=string::npos){
            return ops;
        }else{
            x += x;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n >>m;
        string x, s;
        cin>>x >>s;
        cout<<minimum_number_of_operations(x, n, s, m)<<endl;
    }
 
    return 0;
}