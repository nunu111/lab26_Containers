#include<iostream>
#include<set>
using namespace std;

//Write function count() here.

int count(int array[],int array_size){
	int a=0;
	set<int> sint;
	for(int i=0;i<array_size;i++){
		sint.insert(array[i]);
	}
	set<int>::iterator j;
	for(j=sint.begin();j !=sint.end();j++){
		a++;
	}
	return a;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
