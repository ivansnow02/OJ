/**
����򣬰����·�����A�����ת�þ���B��
��������������m��n������ͨ��ʹ��ָ�����new���������һ��m��n�еĶ�ά��̬����A�Լ���һ��n��m�еĶ�ά��̬����B��
֮��ΪA�������ݣ�A�������ݣ��������������룬���������ת�þ���B������A�е��д�ų�B�е��У������������������������
ÿһ������ռһ�У�ͬһ�е����ո������
ע�⣺���뱣֤ȫ��������
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n;
	cin>>m>>n;
	int **a = new int*[m];
	for (int i = 0; i < m; i++){
		a[i] = new int[n];
	}
	int **b = new int*[n];
	for (int i = 0; i < n; i++){
		b[i] = new int[m];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			b[j][i]=a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<b[i][j]<<' ';
		}
		cout<<endl;
	}
}
