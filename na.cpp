#include<iostream>
using namespace std;
int main(){
	int a;
	{
	cout<<"Enter number: "<<endl;
	cin>>a;
}if(a>0){
	cout<<a<<"is Positive"<<endl;
}else if(a<0){	
	cout<<a<<"is negative"<<endl;
}else{
	cout<<a<<"is zero"<<endl;
}
return 0;
}