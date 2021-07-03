#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
	// associative containers
	
	// 1) map   
	// 2) multimap    
	// 3) set
	// 4) multiset
	
	// 1) unordered map
	// 2) unordered multimap
	// 3) unordered set
	// 4) unordered mulitset
	
	// key and data value 
	// 1) map[key] = data  value
	
	pair<int,int> p = make_pair(10,20);
	cout << "pair" << "\n";
	cout << p.first << " " << p.second << endl ;
	
	map<int,int> m;
	
	m[5] = 500;
	m[1] = 250;
	
	m.insert(make_pair(10,100));
		
	m[10] = 750;					// it can override 
	m.insert(make_pair(10,150));    // it can not override 
	
	// each container accessed by iterator
	// iterators == pointeers
	
	map<int,int>::iterator itr ;
	itr = m.begin();
	cout << "map" << "\n" ;
	for(itr = m.begin(); itr != m.end(); itr++)
	{
		// iterator of map == pair
		
		// itr == pointeers 
		cout << itr->first << " " << itr-> second << endl;
	}
	
	// it will automaticall sort the data with value of key
	
	cout << "size of vector " << m.size() << endl;
	m.clear();
	
	cout << "size of vector " << m.size() << endl;
//
	multimap<int,int> mm;
	
	// it is not initialized by subscript operator
	// m[5] = 500;
	// m[1] = 250;
	
	// note : it can have multiple value for a single key
	// note : it is reason why m[key] = value invalid
	
	mm.insert(make_pair(10,100));
	mm.insert(make_pair(5,500));
	mm.insert(make_pair(15,1500));
	mm.insert(make_pair(15,1200));
		
	
	// each container accessed by iterator
	// iterators == pointeers
	
//	multimap<int,int>::iterator itr ;
	itr = mm.begin();
	cout << "multimap" << endl;
	for(itr = mm.begin(); itr != mm.end(); itr++)
	{
		// iterator of map == pair
		
		// itr == pointeers 
		cout << itr->first << " " << itr-> second << endl;
	}
	
	// it will automaticall sort the data with value of key
	
	cout << "size of vector " << mm.size() << endl;
	mm.clear();
	
	cout << "size of vector " << mm.size() << endl;

	cout << "set" << endl;
	set<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(40);
	s.insert(40);
	s.insert(90);
	
	// note : it will show the unique value in the sort order
	
	set<int>::iterator itr_set ;
	//for(auto &val : s)
	for(itr_set = s.begin(); itr_set != s.end(); itr_set++)
	{
		cout << *itr_set << endl ;	
	}	

	cout << "multiset" << endl;
	multiset<int> ms;
	ms.insert(100);
	ms.insert(200);
	ms.insert(40);
	ms.insert(40);
	ms.insert(90);
	
	// note : it will show the unique value in the sort order
	
	multiset<int>::iterator itr_multiset ;
	//for(auto &val : s)
	for(itr_multiset = ms.begin(); itr_multiset != ms.end(); itr_multiset++)
	{
		cout << *itr_multiset << endl ;	
	}	

	ms.erase(40);
	// it will erase all the values
	cout << endl;
	for(itr_multiset = ms.begin(); itr_multiset != ms.end(); itr_multiset++)
	{
		cout << *itr_multiset << endl ;	
	}	

	return 0;
}
