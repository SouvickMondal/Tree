#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct node{
    ll l;
    ll r;
    ll d;
};
bool sortby(node a,node b){
    return a.d<b.d;
}
int main(){
    int t;
    cin>>t;
    for(int kp=1;kp<=t;kp++){
        ll n,q;
        cin>>n>>q;
        node arr[q];
        for(int i=0;i<q;i++){
            int a,b;
            cin>>a;
            arr[i].l = a;
            cin>>b;
            arr[i].r = b;
            arr[i].d = b-a+1;
        }
        sort(arr,arr+q,sortby);
        vector<int> m(n+1);
        ll mini = INT_MAX;
        for(int i=0;i<q;i++){
                int counter = 0;
                for(ll j = arr[i].l;j<=arr[i].r;j++){
                    if(m[j]==0){
                        m[j] = 1;
                        counter++;
                    }
                }
            if(counter<mini){
                mini = counter;
            }
        }
        cout<<"Case #"<<kp<<":"<<" "<<mini<<"\n";
    }
    return 0;
}
