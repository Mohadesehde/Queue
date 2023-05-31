//
//  main.cpp
//  Queue
//
//  Created by Mohadeseh Delavarian on 11/28/20.
//

#include <iostream>
using namespace std;

// OOP Queue int array

class Queue
{
    public :
    Queue(int c=100)
    {
        if (c<=0)
        {
            q=NULL;
            rear=front=-1;
            maxsize=0;
        }
        else
        {
            q=new int [c];
            if (!q)
            {
                rear=front=-1;
                maxsize=0;
                return;
            }
            maxsize=c;
            front =rear=-1;
        }
    }
    ~ Queue()
    {
        delete []q;
    }
    bool isfull()
    {
        if(rear==maxsize-1)
            return true;
        else
            return false;
    }
    bool add(int x)
    {
        if(isfull())
            return false;
        else
        {
            rear++;
            q[rear]=x;
            return true;
        }
    }
    
    bool isempty()
    {
        if(rear==front)
            return true;
        else
            return false;
    }
    
    int remove()
    {
        if(isempty())
            return NULL;
        else
        {
            front++;
            int x;
            x=q[front];
            return x;
        }
    }

    void display()
    {
        for(int i=front+1;i<=rear;i++)
            cout<<q[i];
    }
    
  private:
    int *q;
    int maxsize,rear, front;
};

// Structured Programming Queue

const int maxsize=100;
int q[maxsize];
int front=-1,rear=-1;

bool isfull()
{
    if(rear==maxsize-1)
        return true;
    else
        return false;
}

bool isempty()
{
    if(rear==front)
        return true;
    else
        return false;
}

bool add(int x)
{
    if(isfull())
        return false;
    else
    {
        rear++;
        q[rear]=x;
        return true;
    }
}

int remove()
{
    if(isempty())
        return NULL;
    else
    {
        front++;
        int x;
        x=q[front];
        return x;
    }
}

void display()
{
    for(int i=front+1;i<=rear;i++)
        cout<<q[i];
}
