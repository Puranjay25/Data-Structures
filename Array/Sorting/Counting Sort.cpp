#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Number Of Elements: ";
    cin>>n;
    int a[n],i,k;
    cout<<"Elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        k=a[i];
        else
        {
            if(a[i]>k)
            k=a[i];
        }
    }
    int c[k+1]={0},b[n],j;
    for(i=0;i<n;i++)
    c[a[i]]=c[a[i]]+1;
    for(i=1;i<k+1;i++)
    c[i]+=c[i-1];
    for(i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }
    cout<<"Sorted Array: ";
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";
    return 0;
}
