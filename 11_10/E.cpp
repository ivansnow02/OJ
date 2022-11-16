/**
编制具有如下原型的函数findLast：
           char*findLast(char*sourceStr,char*subStr);
findLast函数则要返回源串sourceStr中最后一次出现subStr子字符串的头字符位置。
而后编制主函数，输入两个字符串，将它们用作实参来调用这两个函数，如果返回NULL输出-1，否则输出子字符串出现时头字符在原字符串的下标，每个结果占一行。
要求实现程序中不可使用“string.h”头文件内有关寻找子串的标准库函数。
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
