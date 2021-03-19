#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int temp=0,count=1;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
			cout<<"Buoc"<<count++<<":";
			for(int k=0;k<n;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
	}
	return 0;
}
