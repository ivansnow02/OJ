/**
�ڽ��������ظ��ȼ��ʱ��������Ҫͳ��һ��Ӣ���еĵ������������ҳ�������ĵ��ʡ�
�������¶��壺char str[500];
��д����ͨ������cin.getline(str,500);ʵ�ִӼ�������һС��Ӣ�ģ����п��԰����ո񣬵���ͬһ�У������ú���ͳ�Ƹö�Ӣ���а����������ʣ�
���ͳ�Ƴ��ĵ�������������ʵĳ����Լ�������ĵ��ʣ��ո������
ע�⣺��������ʹ��void split(char *str);�������ĵ��ʲ�ֻһ������������ҵ����Ǹ���
*/
#include<bits/stdc++.h>
using namespace std;
void split(char *str){
	int len = strlen(str);
	string s[500];
//	char *ss = 0;
//	ss = strtok(str," ");
//	int  i = 0;
//	while(ss != 0){
//		s[i] = ss;
//		ss = strtok(0," ");
//		i++;
//	}
	*(str+len)=' ';
	bool flag = 0;
	int j = 0;
	for(int i = 0; i < strlen(str); i++){
		if(str[i]==' '){
			flag = !flag;
		}
		if(flag){
			j++;
			flag = 0;
			continue;
		}
		s[j]+=str[i];
		
	}
	cout<<j<<' ';
	int maxi = 0;
	int maxl = 0;
	for(int k = 0; k < j; k++){
		if(maxl < s[k].size()){
			maxl = s[k].size();
			maxi = k;
		}

	}
	cout<<maxl<<' '<<s[maxi];
} 
int main(){
	char str[500];
	cin.getline(str,500);
	split(str);
}
