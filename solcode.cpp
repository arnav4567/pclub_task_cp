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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>b;

        sort(arr,arr+n, cmp);

        long long tokens_now = 0;
        bool possible = false;
        vector<int> nums_to_take;

        for(int i=0;i<n;i++){
            tokens_now+=factors[arr[i]];
            nums_to_take.push_back(arr[i]);
            if(tokens_now>=b){
                possible = true;
                break;
            }
        }
        if(possible){
            cout<<nums_to_take.size()<<'\n';
            for(int i=0;i<nums_to_take.size();i++)
                cout<<nums_to_take[i]<<" ";
            cout<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}
