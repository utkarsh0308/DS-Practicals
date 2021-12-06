#include <iostream>
using namespace std;

int main()
{
	int n,s,flag=0;
	cout << "Enter No. of Elements: ";
	cin >> n;
	int arr[n];
	cout << "Enter Elements: ";
	for (int i = 0; i < n;i++){
		cin>>arr[i];
		}
	cout << "Enter Element to be searched: ";	
		cin>>s;
		
		for (int i = 0; i < n;i++){
			if (arr[i] == s){
				flag = i+1;
				break;
				
			}
			else
			flag=0;
			}	
			if (flag > 0){
				cout << "Position of element: "<<flag<<endl;
			}
			else{
				cout << "Element not found";
			}
			
			return 0;
}
