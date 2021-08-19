#include <bits/stdc++.h>
using namespace std;

const long long _maxb = 1e10;
const int _maxai = 1e7;
const int _maxt = 1e5;
const int _max_sum_n = 1e6;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //int sum=0;
    int t=rand()%_maxt;
    cout<<t<<'\n';
    srand(time(0));
    for(int i=1; i<=t;i++){
        int n=rand()%(_max_sum_n/t);   //to ensure sum of n over test cases remains <= 1e6
        cout<<n<<'\n';
        for(int i=0;i<n;i++){
            int curr = rand()%(_maxai);
            cout<<curr<<' ';
        }
        long long b = rand()%(_maxb);
        cout<<b<<'\n';
        //sum+=n;
    }
    freopen("case.txt", "w", stdout);   //to save in a file
    //cout<<sum<<'\n';          //to check if sum of is indeed <1e6 or not
    return 0;
}
