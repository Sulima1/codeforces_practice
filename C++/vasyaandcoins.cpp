#include<bits/stdc++.h>
using namespace std;
int t; //number of test cases
int a, b; //number of burle coins
int s;
int main(){
    for(cin>>t;t;t--){
        cin>>a;
        cin>>b;
        if (a == 0)
            s = 1;
        else if (b == 0)
            s = a + 1;
        else
            s = (2*b) + (a+1);
        
        cout<<s<<endl;
    }
}
