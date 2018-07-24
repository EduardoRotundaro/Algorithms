#include <bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int> data;
	int size, value, rangemax, rangemin;
	
	printf("Number of values: ");
	cin>>size;
	printf("Range min: ");
	cin>>rangemin;
	printf("Range max: ");
	cin>>rangemax;
	printf("Values:\n");
	
	int rangesize = rangemax-rangemin+1;
	vector<int> aux(rangesize,0);
	vector<int> final(size,0);
	
	for(int i = 0; i < size; i++){
		cin>>value;
		data.push_back(value);
	}
	
	for(int i = 0; i < size; i++) aux[data[i]]++;
	
	value = aux[0];
	for(int i = 1 ; i < rangesize; i++){
		aux[i]+= value;
		value= aux[i];
	}
	
	for(int i = 0; i < size; i++) final[--aux[data[i]]] = data[i];
	
	for(int i = 0; i < size; i++) cout<<final[i]<<" "; cout<<endl;
	
	return 0;
}