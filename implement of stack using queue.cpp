#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
	queue<int> q;

public:
	void push(int x)
	{
	
		q.push(x);
        int size=q.size()-1;
		while (size!=0) {
			q.push(q.front());
			q.pop();
			size--;
		}

	}

	void pop()
	{
		
		if 
		(q.empty())
		{
			return;
		}
		q.pop();
	}

	int top()
	{
		if (q.empty())
		{
			return -1;
		}
		return q.front();
	}

	int size() { return q.size(); }
};


int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "current size: " << s.size() << endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	cout << "current size: " << s.size() << endl;
	return 0;
}
