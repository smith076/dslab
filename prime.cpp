#include<iostream>
#include<iomanip>

using namespace std;

 int main(){
	int num,i,count,n;
	cout<<"ENter max range: ";
	cin>>n;
	for(num =1;num<=n;num++){
	count=0;
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				count++;
				break;
		}
	}
	if( count==0 && num!=1)
		cout<<num<<setw(3);
	}return 0;
}