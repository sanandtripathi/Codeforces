#include<bits/stdc++.h>
using namespace std;
long long int fizz(long long int n) {
    long long int cycles = n/15;
    long long int sum1= cycles*3;
    int remains=n%15;
    int sum2=0;
    for(int i=0;i<=remains;i++){
        if(i%3==i%5) sum2++;
    }
    return sum1+sum2;
}

int main(){
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        cout<<fizz(n)<<endl;
     }  
   
}
