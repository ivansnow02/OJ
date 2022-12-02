#include<iostream>
using namespace std;
class Cset {
  private:
	int n;
	int* data;
  public:
	Cset(int a) {
		n = a;
		data = new int[n];
	}
	void setCset() {
		for (int i = 0; i < n; i++) {
			cin >> data[i];
		}
	}
	void print() {
		for (int i = 0; i < n; i++) {
			cout << data[i] << " ";
		}
	}
	friend void operator+(Cset&, Cset&);
	friend Cset operator-(Cset&, Cset&);
	friend void operator*(Cset&, Cset&);
};
void operator+(Cset& a, Cset& b) {
	for (int i = 0; i < a.n; i++) {
		cout << a.data[i] << " ";
	}
	for (int i = 0; i < b.n; i++) {
		bool flag = 0;
		for (int j = 0; j < a.n; j++) {
			if (b.data[i] == a.data[j])
				flag = 1;
		}
		if (!flag)
			cout << b.data[i] << " ";
	}
}
Cset operator-(Cset& a, Cset& b) {
	int c = 0;
	int t[20] = {};
	for (int i = 0; i < a.n; i++) {
		bool flag = 0;
		for (int j = 0; j < b.n; j++) {
			if (a.data[i] == b.data[j])
				flag = 1;
		}
		if (!flag) {
			t[c] = a.data[i];
			c++;
		}
	}
	Cset ans(c);
	for (int i = 0; i < c; i++) {
		ans.data[i] = t[i];
	}
	return ans;
}
void operator*(Cset& a, Cset& b) {
	for (int i = 0; i < a.n; i++) {
		bool flag = 0;
		for (int j = 0; j < b.n; j++) {
			if (a.data[i] == b.data[j])
				flag = 1;
		}
		if (flag)
			cout << a.data[i] << " ";
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		Cset c1(a);
		c1.setCset();
		int b;
		cin >> b;
		Cset c2(b);
		c2.setCset();
		cout << "A:";
		c1.print();
		cout << endl << "B:";
		c2.print();
		cout << endl << "A+B:";
		c1 + c2;
		cout << endl << "A*B:";
		c1 * c2;
		cout << endl << "(A-B)+(B-A):";
		Cset x1 = c1 - c2, x2 = c2 - c1;
		x1 + x2;
		cout << endl;
		cout << endl;
	}
}
