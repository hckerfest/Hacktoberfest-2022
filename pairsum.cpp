#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> a,int sum)
{
    unordered_set<int> s;
    vector<int> result;
    for(int i=0;i<a.size();i++)
    {
        int x=sum-a[i];
        if(s.find(x)!=s.end())
        {
            result.push_back(x);
            result.push_back(a[i]);
            return result;
        }
        s.insert(a[i]);
    }
    return {};
}
int main()
{
    vector<int> a{1,3,5,-3,56,2};
    int s=53;
    auto p = pairsum(a,s);
    if(p.size()==0)
    {
        cout<<"no pairs found";
    }
    else
    {
        cout<<"the pair is:"<<endl;
        cout<<p[0]<<","<<p[1]<<endl;
    }
    return 0;

}
