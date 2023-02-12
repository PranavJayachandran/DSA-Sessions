#include<bits/stdc++.h> // this header file has all stl and inbuilt functions we need. 
// ith undel vere header file unnum venda
using namespace std; // don't worry about this talakam. just add akka
int main()
{

	vector<int> v; // vector of type int : name -> v
	// how is vector diff than array. Vector size defined alla
	// as of now its 0
	cout << "Initial size : " << v.size() << "\n";// v.size() gives the size of vector v
	// so lets add something
	v.push_back(1);
	cout << "Size now: " << v.size() << "\n";
	v.push_back(2);
	v.push_back(-10);
	cout << "Vector Elements\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";

	// We can pop back elements from vector too
	v.pop_back();
	cout << "\n\nAfter popping\n";
	cout << "Vector Elements\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";


	cout << "\n\n\nSorting----------------------------\n";
	// now lets have some fun
	// lets sort

	v.push_back(-50);
	v.push_back(-4);
	cout << "\n\nBefore Sorting\n";
	cout << "Vector Elements\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";
	sort(v.begin(), v.end()); // and its done itre ullu;
	cout << "\n\nAfter Sorting\n";
	cout << "Vector Elements\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\n\n";


	//now what if you want to predefine the size of a vector
	//pole tanne use cheyanum
	cout << "Vector as array---------\n\n";
	vector<int>p(4);// now this is same as array mostly
	p[0] = 1;
	p[1] = 2;
	p[2] = 10;
	p[3] = 4;


	for (int i = 0; i < p.size(); i++)
		cout << p[i] << " ";
	cout << "\n";


	cout << "\n\n\nVector with values during initialsation--------\n\n";
	//but vere fun is that we can initialsize a vector in declaration itself
	vector<int>o(4, 10); // size is 4 and value will be 10


	for (int i = 0; i < o.size(); i++)
		cout << o[i] << " ";
	cout << "\n";


}