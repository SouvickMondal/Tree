#include<iostream>
using namespace std;
int allposways(int n,int c){
    if(c==0)
    return 1;
    if(c==1)
    return 1;
    if(c==2)
    return 2;
    if(c<n)
    {
        int x = 0;
        for(int i=0;i<c;i++){
            x += allposways(n,i)*allposways(n,c-i-1);
        }
        cout<<x<<"\n";
        return x;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int a = allposways(n,0);
    cout<<a<<" ";
    return 0;
}
