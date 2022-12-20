#include<iostream>
using namespace std;

char before(char x){
	char result;
	if(x > 'A' and x <= 'Z'){
		result= x-1;
	}
	if(x == 'A'){
		result= 'Z';
	}
	if(x > 'Z'){
		result= '0';
	}
	if(x < 'A'){
		result= '0';
	}
	return result;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
