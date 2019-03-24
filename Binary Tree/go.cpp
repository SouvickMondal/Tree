#include<bits/stdc++.h>
using namespace std;
bool sortby(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,p;
        cin>>n>>p;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr,arr+n,sortby);
        int mini = INT_MAX;
        for(int j=0;j<=n-p;j++){
                int mini1 = 0;
            for(int k = 1;k<p;k++){
                mini1+=(arr[j] - arr[j+k]);
            }
            if(mini1<mini){
                mini = mini1;
            }
        }
        cout<<"Case #"<<i<<":"<<" "<<mini<<"\n";
    }
    return 0;

}
