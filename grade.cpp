#include<iostream>
using namespace std;
int main(){
	double score;
	{
		cout<<"Enter score: "<<endl;
		cin>>score;
	}if(score>=90){
		cout<<"Your score is A+"<<endl;
	}else if(score<90 && score>=85){
		cout<<"Your score is A"<<endl;
	}else if(score<85 && score>=80){
		cout<<"Your score is A-"<<endl;
	}else if(score<80 && score>=75){
		cout<<"Your score is B+"<<endl;
	}else if(score<75 && score>=70){
		cout<<"Your score is B"<<endl;
	}else if(score<70 && score>=65){
		cout<<"Your score is B-"<<endl;
	}else{
		cout<<"Your score is C+"<<endl;
	}
	return 0;
}