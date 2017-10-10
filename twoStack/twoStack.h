#ifndef TWOSTACK_H
#define TWOSTACK_H

template<class var>
class twoStack
{
    public:
        twoStack(int =0,int =0);
        void pushA(var);
        void pushB(var);
        var popA();
        var popB();
        int getSizeA();
        int getSizeB();
        bool isEmptyA();
        bool isEmptyB();
        bool isFull();



    private:
        var* stackArray;
        int topA;
        int topB;
        int length;
        void increaseLength();
};

#endif // TWOSTACK_H




