#include<iostream>
#include<vector>
using namespace std;
template <class T>
class Stack :private vector<T>
{
public:
	void push(T item)
	{
		this->insert(this->end(), item);
	}
	T pop()
	{
		T item = this->back();
		this->pop_back();
		return item;
	}
	bool isempty()
	{
		return this->size() == 0;
	}
};
int main()
{
	Stack<int> q;
	for (int i = 0; i < 10; i++)
	{
		cout << "enter number please: " << endl;
		int n;
		cin >> n;
		q.push(n);
	}
	while (!q.isempty())
	{
		cout << q.pop() << endl;
	}

	return 0;
}