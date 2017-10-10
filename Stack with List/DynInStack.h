#ifndef DYNINSTACK_H
#define DYNINSTACK_H
#include<iostream>
class DynIntStack
{
private:
    struct StackNode
    {
        int value;
        StackNode *next;
    };

    StackNode *top;
    void kopjo(StackNode *);

public:
    DynIntStack()
    {top = NULL;}
    ~DynIntStack(); //destructor
    DynIntStack(const DynIntStack &); //copy constructor
    void push(const int &);
    void pop(int &);  //jep variablin qe do marresh kur ekz pop
    bool isEmpty();
    void zhvendosFill(const int &); //merr pozicion dhe e zhvendos ne fillim
    //operator
    DynIntStack & operator=(const DynIntStack &);

    friend void krahasoPrinto(const DynIntStack & s1,const DynIntStack & s2)
    {
        StackNode *current1=s1.top;
        StackNode *current2=s2.top;
        int flag=0;  //flag=1 nqs s1 >s2
        while(current1!=NULL && current2!=NULL)
        {
            if(current1->value>current2->value)
                {flag=1;
            break;}
            else if(current1->value<current2->value)
                {flag=2;
            break;}
            current1=current1->next;
            current2=current2->next;

        }


    }
};

#endif // DYNINSTACK_H
