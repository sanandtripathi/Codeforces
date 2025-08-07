#include<bits/stdc++.h>
using namespace std;
int func(string st, int n){
vector<string>vec;
    for( int i=0;i<n;i++){
        string stt=st; // condition so that my string does not change
        stt[i]=stt[i]^1; // using the xor gate property
        vec.push_back(stt);  
    }
    
    int count=0;
    for(auto s:vec){
        for(auto c:s){ // as now at every position the string is there so cannot directly compare, that is will go from vector to the particular string then to the 1 or 0
            if(c=='1') count++;
        }
    }
    
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string st;
        cin>>st;
       
        cout<<func(st, n)<<endl;}
   
}
