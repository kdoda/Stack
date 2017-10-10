#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack{
    private:
        int *stackArray;
        int stackSize;
        int top;
        void increaseLength();

public:
    IntStack(int=1); //duhet 1 sepse po qe zero funksioni  increase nuk e inkrementon snjeher
    void push(int);
    void pop(int &);  //variablen qe merr ja ve vleren qe heq nga stacku
    bool isFull(void);
    bool isEmpty(void);

};
#endif
