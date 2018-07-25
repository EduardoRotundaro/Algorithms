#include<bits/stdc++.h>
using namespace std;

vector<int> data;

int binary_search(int b, int e, int value){
	
	if(e>=b){
		int mid = b + (e-b)/2;
		
		if(data[mid]==value) return mid;
		
		if(data[mid]>value) return binary_search(b, mid-1, value);
		
		return binary_search(mid+1, e, value);
	}
	
	return -1;
	
}

int main(){
	
	int size, value;
	
	cout<<"Number of elements: ";
	cin>>size;
	cout<<"Values:\n";
	for(int i = 0; i < size; i++){
		cin>>value;
		data.push_back(value);
	}
	
	cout<<"Value to search: ";
	cin>>value;
	
	(binary_search(0,size-1,value)==-1)? cout<<"Not found!\n" : cout<<"Found";
	
	return 0;
}