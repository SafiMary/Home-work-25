#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool palindrom(string word) {
	for (int i = 0; i < word.length(); i++) {
	word[i] = tolower(word[i]);}
	int len = word.length();
	for (int i = 0; i < len / 2; i++) {
		if (word[i] != word[len - i - 1]){
			return false;
	}}
	return true;
}

bool signs(string sig) {
	int counter = 0;
	string z = " .,!?";
	for (int i = 0; i < sig.length(); i++){
		for (int j = 0; j < z.length(); j++)
		if (sig[i] == z[j])
			 return counter++;
}
}

 bool func(string word,int num) {
	 int index = -1;
	 for (int i = word.length() - 1; i >= 0; i--)
		 if (word[i] == num)
			 index = i;
	  cout << (word.substr(index));
	  return "\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Задача 1.\n";
	string str = "Hello word!";
	cout << str << '\n';
	char sym = 'o';
	string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	cout <<  "Результат: " << res << '\n';
	cout << "Задача 2.\n";
	string n;
	cout << "Введите слово для проверки на паллиндромность: ";
	getline(cin, n);
	if (palindrom(n))
		cout << "Слово паллиндром!\n";
	else
		cout << "Это не паллиндром!\n";
	cout << "Задача 3.\n";
	string m;
	cout << "Введите предложение!! \n";
	getline(cin, m);
	cout << "Общее количество знаков: " << signs(m);
	cout << "Задача 4.\n";
	string s = "Buy Tom!";
	cout << s << '\n';
	char sym1 = 'y';
	cout << func(s, sym1);
	
	return 0;
}