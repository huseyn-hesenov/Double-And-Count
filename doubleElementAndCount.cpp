#include<iostream>
#include<Math.h>
using namespace std;
int main(){
	int count=0;
	int plus=0;
	cout<<"enter number";
	//call string number
	string number;
	cin>>number;
	//get all elements of number
	for(int i=0;i<number.length();i++){
		//check for single or double
		if(number[i]%2==0){
			//double element plural
		plus=plus+number[i];
		// calculate count
			count++;
			
		}
		
	}
	cout<<"cut ededlerin sayi: "<<count<<"\n";
		cout<<"cut ededlerin cemi: "<<plus;
	
return 1;
	
	
	
	
}
