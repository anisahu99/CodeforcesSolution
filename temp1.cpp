#include <bits/stdc++.h>

using namespace std;

class Tripair{
    public:
    int a,b,c;

};

bool condition(int aa,int bb, int cc, int a, int b, int c){
    if(abs(aa-a)==1&&abs(bb-b)==1&&abs(cc-c)==0) return true;
    if(abs(aa-a)==1&&abs(cc-c)==1&&abs(bb-b)==0) return true;
    if(abs(aa-a)==1&&abs(bb-b)==1&&abs(aa-a)==0) return true;

    return false;
}
// Function to solve the problem
void solve(string s[], int numStrings,
		const string queries[], int q)
{
    //cout<<"Hello"<<endl;
	unordered_map<string,Tripair> countQueries;
	unordered_map<string,Tripair> countS;
    for(int i=0;i<numStrings;i++){
        int a =0, b=0, c=0;
        for(char ch:s[i]){
            if(ch=='a') a++;
            if(ch=='b') b++;
            if(ch=='c') c++;
        }
        Tripair var;
        var.a = a;
        var.b = b;
        var.c = c;
        countS[s[i]]=var;
    }

    for(int i = 0;i<q;i++){
        int a =0, b=0, c=0;
        for(int j = 0;j<queries[i].length();j++){
            char ch=queries[i][j];
            if(ch=='a') a++;
            if(ch=='b') b++;
            if(ch=='c') c++;
        }
        Tripair var;
        var.a = a;
        var.b = b;
        var.c = c;
        countQueries[queries[i]]=var;
    }
    unordered_map<string, string> ans;

    for(auto it1:countQueries){
        int aa = it1.second.a, bb = it1.second.b, cc = it1.second.c;
        int sz1 = it1.first.length();
        bool flag = false;
        for(auto it2:countS){
            int a = it2.second.a, b = it2.second.b, c = it2.second.c;
            int sz2 = it2.first.length();
            if(sz1==sz2 && condition(aa,bb,cc,a,b,c)){
                flag = true;
                ans[it1.first] = "YES";
                break;
            }
        }
        if(!flag){
            ans[it1.first]= "NO";
        }
    }
    for(int i=0;i<q;i++){
        cout<<ans[queries[i]]<<"\n";
    }
}

// Main function
int main()
{
	// Initialize base array

	// Static input:
	string s[] = { "acbacbacb" };
	int numStrings = sizeof(s) / sizeof(s[0]);

	string queries[]
		= { "cbacbacb", "acbacbac", "aacbacbacb",
			"acbacbacbb", "acbaabacb" };
	int q = sizeof(queries) / sizeof(queries[0]);

    

	// Call the solve function
	solve(s, numStrings, queries, q);

	return 0;
}
