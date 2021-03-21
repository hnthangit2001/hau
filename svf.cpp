#include <bits/stdc++.h>
using namespace std;
int n,A[20],B[20]={0};
string str;
void in(){
	for(int i=1;i<=n;i++){
		cout<<str[A[i]-1];
	}
	cout<<" ";
}
void Try(int i) {
    int j;
    for (j = 1; j <=n; j++) {
    	if(!B[j]){
    		B[j]=1;
            A[i] = j;           
            if (i == n)in();
            else Try(i+1);
            B[j]=0;
        }
    }
}

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        cin >> str;
        n = str.length();
        Try(1);
        cout << endl;
    }
    return 0;
}
