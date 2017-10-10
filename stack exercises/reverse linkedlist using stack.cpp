#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseString(string & );
int main()
{

string s;

cout<<"jep strinen:   ";
getline(cin,s);
//cin>>s;  merr vetem fjalen e pare

reverseString(s);

cout<<endl<<s;
}


void reverseString(string & a)
{
     stack<char> st1;

     for(int i=0;i<a.length();i++) //mbush stackun
        st1.push(a[i]);

     for(int i=0;i<a.length();i++)
     {
         a[i]=st1.top(); //shtojme nga fillimi ne string el top te stack
         st1.pop();  //heqim top nga stack
     }
}

