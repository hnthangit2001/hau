#include<bits/stdc++.h>
using namespace std;
int a[20],count1=0,n;
int ok(int row,int col){
	for(int i=1;i<row;i++){
		if(a[i]==col||abs(row-i)==abs(col-a[i]))return 0;
	}
	return 1;
}
void Try(int i){
	for(int col=1;col<=n;col++){
		if(ok(i,col)){
			a[i]=col;
			if(i==n)count1++;
			else Try(i+1);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		count1=0;
		cin>>n;
		Try(1);
		cout<<count1<<endl;
	}
}
		
		
