#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
	vector<int> array;
	int vectorSize,value,total,average;
	int largest = 0,smallest = 22876;
	cout << "How many elements in vector ?: ";
	cin >> vectorSize;
	
	for(int i = 0; i < vectorSize; i++){
		cout << "Input Value: \n";
		cin >> value;
		array.push_back(value);
	}
	
	total = accumulate(array.begin(), array.end(), 0);
	average = total/vectorSize;
	
	cout << "The average is " << average << "\n";
	
	for(int i = 0; i < vectorSize; i++){
		if(largest < array[i]){
			largest = array[i];
		}
	}
	
	cout << "The largest value is " << largest << "\n";
	
	for(int i = 0; i <  vectorSize; i++){
		if(smallest > array[i]){
			smallest = array[i];
		}
}

	cout << "The smallest value is " << smallest << "\n";
	
	
	
	
}
