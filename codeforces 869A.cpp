#include<bits/stdc++.h>
using namespace std;
int ax[2005],ay[2005];
int arr[2000005];
#define mac 2000000
int main()
{
    long long int cnt=0;
    long long int temp;
    int n;
    cin>>n;
    for(int i=0;i<=mac;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>ax[i];
        arr[ax[i]]=1;
    }
    for(int i=0;i<n;i++)
    {
        cin>>ay[i];
        arr[ay[i]]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp=ax[i]^ay[j];
            if(arr[temp]==1 && temp>=1 && temp<=mac)
            {
                cnt++;
            }
        }
    }
    if(cnt%2==0)
        cout<<"Karen"<<endl;
    else
        cout<<"Koyomi"<<endl;
    return 0;
}
