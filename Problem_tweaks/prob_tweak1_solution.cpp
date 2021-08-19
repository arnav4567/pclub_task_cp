#include <bits/stdc++.h>
using namespace std;

const int _max = 10000005;
int factors[_max]={};

bool cmp(int x,int y){
    return factors[x]>factors[y];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1;i<_max;i++){
        for(int j=i;j<_max;j+=i)
            factors[j]++;
    }

    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+5],b;
        vector<int> fc(n+1);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            fc[i] = factors[arr[i]];
        }
        cin>>b;

        bitset <100000000> var;
        var[0]=true;
        for(int i=0;i<n;i++)
            var=var|(var<<fc[i]);
        if(var[b]==true)
            cout<<"yes"<<'\n';
        else
            cout<<"no"<<'\n';

    }
    return 0;
}
