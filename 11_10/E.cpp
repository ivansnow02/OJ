/**
���ƾ�������ԭ�͵ĺ���findLast��
           char*findLast(char*sourceStr,char*subStr);
findLast������Ҫ����Դ��sourceStr�����һ�γ���subStr���ַ�����ͷ�ַ�λ�á�
������������������������ַ���������������ʵ���������������������������NULL���-1������������ַ�������ʱͷ�ַ���ԭ�ַ������±꣬ÿ�����ռһ�С�
Ҫ��ʵ�ֳ����в���ʹ�á�string.h��ͷ�ļ����й�Ѱ���Ӵ��ı�׼�⺯����
*/
#include<bits/stdc++.h>
using namespace std;
//int cnt = 0;
char* findLast(char* sourceStr,char* subStr){
	int j = 0;
	int i = 0;
	char* last = 0;

	int flag = 0;
	for (int i = 0; i < strlen(sourceStr);i++){
		if(sourceStr[i]==subStr[0]){
			flag = 1;
			for(int j = 0; j < strlen(subStr); j++){
				if (sourceStr[i + j] != subStr[j]){
					flag = 0;
				}
			}
			if(flag == 1){
				last = sourceStr + i;
			}
		}
	}
	
	return last;
}
int main(){
	char so[200000],su[200000];
	cin.getline(so,10000000);
	cin.getline(su,12123123);
	char* a = findLast(so,su);
	if(a==NULL) cout<<-1<<endl;
	else cout<<a-so<<endl;
}
