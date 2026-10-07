class Queue1
{   int arr[10000];
    int front;
    int rear;

public:
    Queue1()
    {
        front = 0;
        rear = -1;
    }

    void push(int x)
    {
        rear++;
        arr[rear] = x;
    }

    int pop()
    {
        if (empty())
            return -1;

        int x = arr[front];
        front++;
        return x;
    }

    int peek()
    {
        if (empty())
            return -1;

        return arr[front];
    }

    bool empty()
    {
        return front > rear;
    }

    int size()
    {
        return rear - front + 1;
    }
};

class MyStack
{
    Queue1 q;

public:

    void push(int x)
    {
        q.push(x);

        int n = q.size();

        for (int i = 0; i < n - 1; i++)
        {
            q.push(q.pop());
        }
    }

    int pop()
    {
        if (empty())
            return -1;

        return q.pop();
    }

    int top()
    {
        if (empty())
            return -1;

        return q.peek();
    }

    bool empty()
    {
        return q.empty();
    }
};