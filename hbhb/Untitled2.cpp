#include <iostream>
using namespace std;
int n;
int a[105];

void swapt(int &c, int &b) {
	int tmp = c;
	c = b;
	b = tmp;
}
int dem = 1;
void Tsort() {
	for (int i = 0; i < n - 1; i++) {
		int tmp = a[i];
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swapt(a[i], a[j]);
			}
		}
		if (a[i] != tmp) {
			cout << "Buoc " << dem << ": ";
			dem++;
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}

}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Tsort();
	
	return 0;
}
