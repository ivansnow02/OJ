/**
�� 12 ��Χ����һȦ�汨����Ϸ����1����Ա��ʼ˳ʱ�뱨��������k����Ա����̭���֣���������˳ʱ�뷽��ӱ���̭�����ߵ���һ��Ա�����´� 1 ��ʼ���������� k���˱���̭��
��˼�����ֱ�����ֻʣ��һ����ʱֹͣ�����д������������ʣ�Ǹ��˵ı�š�
ע�⣺��1������μ���Ϸ���˵ı����˳ʱ�뷽������Ϊ 1 �� 12������ʹ����������Ÿ����ݣ���2��k>1�����û�ͨ�� cin ����ָ����
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, cnt = 0;
	cin>>n;
	int men[12];
	for(int i = 0;i<12;i++){
		men[i]= i+1;
	}
	int i = 0;
	int j = 0;
	for (; cnt < 11; ){
		
		if(men[i] != 0) 
			j++;
		if(j == n){
				men[i] = 0;
				cnt++;
				j = 0;
			}
		i++;
		if(i == 12) i = 0; 
	}
	for (int i = 0; i < 12; i++){
		if(men[i] != 0){
			cout<<men[i];
		}
	}
} 