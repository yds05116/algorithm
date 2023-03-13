#include <iostream>
using namespace std;

int main()
{
    int num;
    int ans=0;
    cin>>num;
    for(int i=num/5; i>=0; i--)
    {
        if((num-(5*i))%3==0)
        {
            ans=i+((num-(5*i))/3);
            break;
        }
        else
        ans=-1;
    }
    cout<<ans;
    return 0;
}