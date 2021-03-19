#include<bits/stdc++.h>
using namespace std;
int n;
void resutl(int arr[],int n){
	cout<<"[";
	int b[n+5];
	for(int i=0;i<n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<arr[n-1]<<"]"<<endl;
	for(int i=0;i<n-1;i++){
		b[i]=arr[i]+arr[i+1];
	}
	if(n>1)resutl(b,n-1);
}
int main(){
	int t;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n+5];
        for (int i = 0; i <n; i++)
            cin >> arr[i];
        resutl(arr,n);
    }
}
       
