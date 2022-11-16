/**
在进行文章重复度检查时，经常需要统计一段英文中的单词数量，并找出长度最长的单词。
设有如下定义：char str[500];
编写程序，通过利用cin.getline(str,500);实现从键盘输入一小段英文（其中可以包含空格，但在同一行），利用函数统计该段英文中包含几个单词，
输出统计出的单词数量、最长单词的长度以及长度最长的单词，空格隔开。
注意：函数声明使用void split(char *str);如果有最长的单词不只一个，输出最先找到的那个。
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
