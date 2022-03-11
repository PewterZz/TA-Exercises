#include <iostream>
using namespace std;

int main(){
	string name1,name2,name3,name4,name5;
	double total;
	double array[5];
	int number;
	cout << "Please enter the last name of the frist person: ";
	cin >> name1;
	cout << "Enter the votes: ";
	cin >> array[0];
	cout << "Please enter the last name of the second person: ";
	cin >> name2;
	cout << "Enter the votes: ";
	cin >> array[1];
	cout << "Please enter the last name of the third person: ";
	cin >> name3;
	cout << "Enter the votes: ";
	cin >> array[2];
	cout << "Please enter the last name of the fourth person: ";
	cin >> name4;
	cout << "Enter the votes: ";
	cin >> array[3];
	cout << "Please enter the last name of the fifth person: ";
	cin >> name5;
	cout << "Enter the votes: ";
	cin >> array[4];
	total = array[0] + array[1] + array[2] + array[3] + array[4];
	
	cout << "\nCandidate\t\tVotesReceived\t\t%ofTotalVotes\n";
	cout << name1 << "\t\t\t" << array[0] << "\t\t\t" << (array[0]/total) * 100 << "\n";
	cout << name2 << "\t\t\t" << array[1] << "\t\t\t" << (array[1]/total) * 100 << "\n";
	cout << name3 << "\t\t\t" << array[2] << "\t\t\t" << (array[2]/total) * 100 << "\n";
	cout << name4 << "\t\t\t" << array[3] << "\t\t\t" << (array[3]/total) * 100 << "\n";
	cout << name5 << "\t\t\t" << array[4] << "\t\t\t" << (array[4]/total) * 100 << "\n";
	cout << "Total is " << total << "\n";
	
	for(int i = 0; i<5; i++){
		if(array[0] < array[i]){
			array[0] = array[i];
			number = i;
		}
		
		}
	string names[5] = {name1,name2,name3,name4,name5};
	cout << "The winner of the election is " << names[number];
	
	return 0;
	
	
	
	
}
