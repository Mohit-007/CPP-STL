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
	v.push_back(75);
	
	v.push_back(25);
	v.push_back(75);
	v.push_back(100);
	
	vector<int>::iterator itr ;
	itr = v.begin();
	
//  auto &val => 1) val = *itr 1) &val = itr 
	
	cout << "size of vector " << v.size() << endl;
	
	for(itr = v.begin(); itr != v.end(); itr++)
	{
		cout << *itr << endl;
	}

	// note : erase(start,end) 
	// 1) if delete or erase a element in vector the key value vacant
	// 2) it is contiguous then it will shift 
	// 3) o(n) complexity
	
	// note : remove(start,end,key)
	// 1)  it will remove all the value  = key in the range of start and end
	// 2)
	// 3) 
	

//	v.erase(v.begin()+2,v.begin()+3); 
	v.erase(v.begin()+2,v.end() - 4);	
	cout << "\n";
//	v.erase(std::remove(v.begin(),v.end(),75),v.end());
	for(itr = v.begin(); itr != v.end(); itr++)
	{
		cout << *itr << endl;
	}
	
	cout << endl;
	v.erase(std::remove(v.begin(),v.end(),75), v.end());
	
	for(itr = v.begin(); itr != v.end(); itr++)
	{
		cout << *itr << endl;
	}
	
	// note : remove (vector size same) and erase (vector size decreases)
	

}
