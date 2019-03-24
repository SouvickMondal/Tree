using namespace std;
int allpostree(int n,int mem[]){
    if(n==0){
        if(mem[0]==-1){
            mem[0] = 1;
        }
        return mem[0];
    }
    if(n==1)
        {
            if(mem[1]==-1){
                mem[1] = 1;
            }
            return mem[1];
        }
    if(n>=2){
        cout<<"\nValue of n:"<<n<<endl;
        if(mem[n]==-1){
                cout<<"calculate"<<endl;
                int x = 0;
        for(int i=0;i<n;i++){
            x+=allpostree(i,mem)*allpostree(n-i-1,mem);
            cout<<endl<<"Value of x: "<<x<<" n = "<<n;
        }
        mem[n] = x;

    }
    return mem[n];
}
}
int main(){
    int n;
    cin>>n;
    int mem[n+1];
    for(int i=0;i<=n;i++){
        mem[i] = -1;
    }
    int x = allpostree(n,mem);
    for(int i=0;i<=n;i++){
        cout<<mem[i]<<"\n";
    }
    return 0;
}
