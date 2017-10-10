#include <iostream>
#include <stack>

using namespace std;

template<class var>
void zhvendos(stack<var> &,int);
int main()
{
    stack<int> s;

    for(int i=1;i<=5;i++)
        s.push(2*i);

    zhvendos(s,4);

    while(!s.empty())
    {
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl;
    stack<float> s2;

    for(int i=1;i<=5;i++)
        s2.push(i+0.3);

    zhvendos(s2,5);

    while(!s2.empty())
    {
        cout<<s2.top()<<"  ";
        s2.pop();
    }
}

template<class var>
void zhvendos(stack<var> &s1,int k)
{
    if(k<=1 || k>s1.size())
        return;

    stack<var> temp;
    int nr=1;

    while(nr!=k)
    {
        temp.push(s1.top());
        s1.pop();
        nr++;
    }
    //jemi te el k
    var c=s1.top();
    s1.pop();

    while(!temp.empty())
    {
        s1.push(temp.top());
        temp.pop();
    }
    s1.push(c);

}















