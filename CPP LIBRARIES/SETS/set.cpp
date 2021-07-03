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
	
////	pair<int,int> p = make_pair(10,20);
////	cout << p.first << " " << p.second << endl ;
//	
	map<int, string> m;
	m[10] = "abc";
	m[12] = "pqr";
	m[15] = "xyz";

	map<int, string>::iterator map_itr ;
	map_itr = m.begin();

	for(map_itr = m.begin(); map_itr != m.end(); map_itr++)
	{
		cout << map_itr->first << " " << map_itr->second << endl;
	}
	
	set<int> s;  
	set<int, less<int> > s; 
	set<int, greater<int> > s; 
	
	s.insert(100);
	s.insert(200);
	s.insert(250);
	s.insert(300);
	s.insert(400);
	s.insert(500);
	
	// note : it will store and sort the value	
		
	set<int>::iterator itr ;
	itr = s.begin();
	
	for(itr = s.begin(); itr != s.end(); itr++)
	{
		cout << *itr << endl;
	}
	
	s.erase(250);

	for(itr = s.begin(); itr != s.end(); itr++)
	{
		cout << *itr << endl;
	}

	
	// it will automaticall sort the data with value of key
	
	cout << "size of set " << s.size() << endl;
	m.clear();
	
	cout << "size of set " << s.size() << endl;

//	multimap<int,int> m;
//	
//	// it is not initialized by subscript operator
////	m[5] = 500;
////	m[1] = 250;
//	
//	// note : it can have multiple value for a single key
//	// note : it is reason why m[key] = value invalid
//	
//	m.insert(make_pair(10,100));
//	m.insert(make_pair(5,500));
//	m.insert(make_pair(15,1500));
//	m.insert(make_pair(15,1200));
//		
////	m[10] = 750;					// it can override 
////	m.insert(make_pair(10,150));    // it can not override 
//	
//	// each container accessed by iterator
//	// iterators == pointeers
//	
//	map<int,int>::iterator itr ;
//	itr = m.begin();
//	
//	for(itr = m.begin(); itr != m.end(); itr++)
//	{
//		// iterator of map == pair
//		
//		// itr == pointeers 
//		cout << itr->first << " " << itr-> second << endl;
//	}
//	
//	// it will automaticall sort the data with value of key
//	
//	cout << "size of vector " << m.size() << endl;
//	m.clear();
//	
//	cout << "size of vector " << m.size() << endl;



	return 0;
}
