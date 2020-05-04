#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,sum=0;
    cin>>a;
    stack <int> st;
    while(a!=0)
    {
        if(a%2==1)
        {
            st.push(0);
        }
        else
        {
            st.push(1);
        }
        a=a/2;
    }
    while(st.empty()!=true)
    {

        sum=sum+(st.top()*pow(2,(st.size()-1)));
        st.pop();
    }
    cout<<sum;
    return 0;
}

