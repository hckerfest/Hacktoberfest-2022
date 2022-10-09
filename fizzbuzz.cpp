#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> fizzbuzz(int n)
{
    vector<string> result;
    for(int i=0;i<n;i++)
    {
        if(i%15==0)
        {
         result.push_back("fizzbuzz");
        }
        else if(i%3==0)
        {
         result.push_back("fizz");
        }
        else if(i%5==0)
        {
         result.push_back("buzz");
        }
        else
        {
         result.push_back(to_string(i));
        }
    }
    return result;
}
int main()
{
    int n;
    cin>> n;
    cout<<"Enter the upper limit: ";
    vector<string> ans=fizzbuzz(n);
    for(string x : ans)
    {
        cout<< x <<endl;
    }
}
