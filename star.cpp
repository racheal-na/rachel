#include <iostream> 
using namespace std;
int main(){
int a;
	cout<<"Enter number of raws that makes triangle: ";
	cin>>a;
    int rows = a; 

    for (int i = 1; i <= 5; ++i) { 

        for (int j = 1; j <= (rows - i); ++j) {
            cout << " ";
        }

    
        for (int k = 1; k <= 2*i-1; ++k) {
            cout << "*";
        }

        cout <<endl; 
    }

    return 0; 
}