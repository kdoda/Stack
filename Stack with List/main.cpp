#include <iostream>
#include "DynInStack.h"
#include "DynInStack.cpp"

using namespace std;
int main()
{
    DynIntStack stack1;
    int catchVar;

 cout << "Pushing 5\n";
 stack1.push(5);
 cout << "Pushing 10\n";
 stack1.push(10);
 cout << "Pushing 15\n";
 stack1.push(15);
 cout << "Pushing 20\n";
 stack1.push(20);
 cout << "Pushing 25\n";
 stack1.push(25);
 DynIntStack stack2;
 stack2=stack1;
 cout << "Popping...\n";
 stack1.pop(catchVar);
 cout << catchVar << endl;
 stack1.pop(catchVar);
 cout << catchVar << endl;
 stack1.pop(catchVar);
 cout << catchVar << endl;
 stack1.pop(catchVar);
 cout << catchVar << endl;
 stack1.pop(catchVar);
cout << catchVar << endl;
cout << stack1.isEmpty()<< endl;

//DynIntStack stack1(stack);

 cout << "stack 2 Popping...\n";
 stack2.zhvendosFill(6);
 stack2.pop(catchVar);
 cout << catchVar << endl;
 stack2.pop(catchVar);
 cout << catchVar << endl;
 stack2.pop(catchVar);
 cout << catchVar << endl;
 stack2.pop(catchVar);
 cout << catchVar << endl;
 stack2.pop(catchVar);
cout << catchVar << endl;



}
