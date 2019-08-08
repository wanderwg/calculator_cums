#include<iostream>
using namespace std;

long fibnum(int n)
{
    if(n<=0)
        return 0;
    if(n==1||n==2)
        return 1;
    long long ret[80]={0};
    ret[0]=0;
    ret[1]=1;
    for(int i=2;i<=n;++i)
        ret[i]=ret[i-1]+ret[i-2];
    return ret[n];
}

int main()
{
    int n1,n2;
    while(cin>>n1>>n2)
    {
        long long sum=0;
        for(int i=n1;i<=n2;++i)
            sum+=fibnum(i);
        cout<<sum<<endl;
    }
    return 0;
}