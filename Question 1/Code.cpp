#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int n,m=0,k=2,count=0,x=0;
	cin >> n;

	for(int i=0; i<=n; i++){
	    m=m+i;
	}
  
	int arr[m];
	char a[m];
	for(int i=0; i<m;i++){
	   int num=0; 
	   num=(k * (2 * k - 1));
	   arr[i]= num;
	   k+=2;
	}
	for(int i=0; i< n ; i++){
	    for(int j=0; j<=i; j++){
	        cout << setfill('0') << setw(5)<< arr[x] << " ";
	        x++;
	    }
	    cout << endl;
	}
	return 0;
}
