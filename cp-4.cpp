#include<bits/stdc++.h>

using namespace std;

int main(){

    int i,n,a,s; cin>>n;

    vector<int>p(n); for(i=0;i<n;i++)cin>>p[i];

    cin>>s;

    sort(p.begin(),p.end());

    for(i=0;i<n;i++) {

        a=s-p[i];

        if(binary_search(p.begin(),p.end(),a)){

        cout<<p[i]<<" "<<a;

        break;}



    }
}

/*


5
1 3 5 7 9
10


1 9*/
