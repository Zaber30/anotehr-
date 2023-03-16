#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,v;
    int i,j=0,cnt=0;
    cin>>s>>v;
    for(i=0,j=0;i<s.size();i++)
    {
        if(s[i]==v[j])
        {
            j++;
            if(j==v.size())
            {

                j=0;
                cnt++;
            }
        }
        else
            {

               j=0;
            }


    }
    cout<<cnt<<endl;
}
