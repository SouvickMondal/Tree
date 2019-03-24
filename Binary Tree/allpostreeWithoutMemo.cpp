#include<iostream>
using namespace std;
int allpostreeRecursive(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n>=2){
        cout<<"\nValue of n"<<n<<endl;
        int x = 0;
        for(int i=0;i<n;i++){
            cout<<endl<<"value of i"<<i<<" , "<<n-i-1<<" "<<"Value of n"<<n<<endl;
            x+=allpostreeRecursive(i)*allpostreeRecursive(n-i-1);
            cout<<endl<<"Val  of x"<<x<<endl;
        }
        return x;
    }
}
int main(){
    int n;
    cin>>n;
    int x = allpostreeRecursive(n);
    cout<<"Ans"<<x;
    return 0;
}
