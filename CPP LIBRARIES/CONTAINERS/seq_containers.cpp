#include<iostream>
#include<vector>
#include<list>
#include<algorithm> 

using namespace std;
int main()
{
	// sequence containers
	// 1) vectors  (contiguous memory allocation)
	// 2) list     (doubly linked list)
	// 3) algorithm
	
	
	
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	v.push_back(25);
	
	
	// each container accessed by iterator
	// iterators == pointeers
	
	vector<int>::iterator itr ;
	itr = v.begin();
	cout << "vector" << endl;	
	cout << *itr << endl;
	int i;
	for(i=0;i<v.size();i++)
	{
		cout << *(itr + i) << endl;
	}
	sort(v.begin(),v.end());
	cout << endl;
	for(i=0;i<v.size();i++)
	{
		cout << *(itr + i) << endl;
	}

	for(itr = v.begin(); itr != v.end(); itr++)
	{
		cout << *itr << endl;
	}
	
	cout << "size of vector " << v.size() << endl;
	v.clear();
	
	cout << "size of vector " << v.size() << endl;

	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	l.push_back(50);

	// note : list => it can not be sorted by sort function
	// 1) vector => random access iterator
	// 2) list => bidirectional iterator
	// note : sort algorithm require a random access iterator
	l.push_back(25);	
	
	// each container accessed by iterator
	// iterators == pointeers
	
	
	
	list<int>::iterator itr_list ;   // auto itr ;
	itr_list = l.begin();            // itr = x.begin();

// note : it possess a bidirectional iterator

	cout << "list" << endl;	
	cout << *itr_list << endl;
//	sort(l.begin(),l.end()); (it can not sort because it is not a random access iterator)

	for(itr_list = l.begin(); itr_list != l.end(); itr_list++)
	{
		cout << *itr_list << endl;
	}
	
	cout << "size of vector " << l.size() << endl;
	l.clear();
	
	cout << "size of vector " << l.size() << endl;



//	int arr[] = { 100, 20, 250, 50} ;
//	int *begin = &arr[0] ;
//	int *end = &arr[0] + (sizeof(arr)/sizeof(int));
//	
//	// note : the sort can have random access iterators and pointeers
//	
//	sort(begin, end);
//	int i;
//	for(; begin != end; begin++)
//	{
//		cout << *begin  << endl;	
//	}	
//		
	return 0;
}
