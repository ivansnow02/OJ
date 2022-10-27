/**
 * 利用cin.getline()函数从键盘录入一句英文，其中每个单词之间用一个空格隔开，最后用'.'结束。统计该句话中单词的个数，并依次输出每个单词。输出个数后换行，输出每个单词后也换行。注意：在本平台下，cin.getline()函数的使用方式如下：
  char s[50];
  cin.getline(s,50); //最多存储49个字符
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	char s[50];
	cin.getline(s, 50);
	s[strlen(s) - 1] = ' ';
	char *ans = 0;
	ans = strtok(s, " ");
	int cnt = 0;
	while (ans != 0) {
		cout << ans << endl;
		ans = strtok( 0, " " );
		cnt++;
	}
	cout << cnt;
}
