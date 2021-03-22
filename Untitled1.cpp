#include<bits/stdc++.h>
using namespace std;
int a[1005];
int quyhoach(int c[1005],int n){
	int res=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j])c[i]=max(c[i],c[j]+1);
		}
		res=max(res,c[i]);
	}
	return res;
}
//1 2 8 6 3 4 5 7 9 
int main(){
	int n;
	cin>>n;
	int c[n+5]={1};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}  
	cout<<quyhoach(c,n)<<endl;
}
