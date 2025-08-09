#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int value=n/2;
        if(n%2==0) cout<<(value*2-1)<<endl;
        else cout<<(value*2)<<endl;
    }
}
