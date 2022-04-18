using namespace std;
#include<bits/stdc++.h>

int main(){
    int t;
    int r, g, b, w;

    for(cin>>t; t; t--){
        cin>>r>>g>>b>>w;

        w = r%2+g%2+b%2+w%2;

        if(w<2 || w>2  && r*g*b) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}