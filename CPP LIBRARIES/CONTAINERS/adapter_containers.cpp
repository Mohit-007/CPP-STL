#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<queue>
#include<algorithm> 

using namespace std;
int main()
{
	// adapter containers
	// 1) stack  (contiguous memory allocation)
	// 2) queue    (doubly linked list)
	// 3) priority queue
	
	
	cout << "stack" << endl;
	stack<int> s;
//  stack<int, dequeue<int>> s; 
//  stack<int, vector<int>> s;	
//  stack,int, list<int>> s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	s.push(25);

	cout << "size " <<s.size() << endl;

//	while(!s.empty())
//	{
//		cout << s.top() << endl;
//		s.pop();
//	}
	
	while(s.size() != 0)
	{
		cout << s.top() << endl;
		s.pop();
	}


	cout << "queue" << endl;
	queue<int> q;
//  queue<int, dequeue<int>> q; 
//  queue<int, list<int>> q;
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	q.push(25);

	cout << "size " <<q.size() << endl;

	while(!q.empty())
	{
		cout << q.front() << endl;
//		cout << q.back() << endl;
		q.pop();
	}
	
//	while(q.size() != 0)
//	{
//		cout << q.front() << endl;
//		cout << q.back() << endl;
//
//		q.pop();
//	}

	cout << "priority queue" << endl;
	priority_queue<int> pq;
//  queue<int, dequeue<int>> q; 
//  queue<int, list<int>> q;
//  priority_queue<int, vector<int>> pq;

//  note : if reverse then apply std::greater and std::less 	
	pq.push(10);
	pq.push(20);
	pq.push(30);
	pq.push(40);
	pq.push(50);
	
	pq.push(25);

	// highest value = high priority
	cout << "size " <<pq.size() << endl;

	while(!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}
	
//	while(q.size() != 0)
//	{
//		cout << q.front() << endl;
//		cout << q.back() << endl;
//
//		q.pop();
//	}
	

	return 0;
}
