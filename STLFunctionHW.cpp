#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	vector<string> words{ "mom", "dad", "cousin", "uncle", "aunt", "niece" };
	
	cout << "Words with vowels" << endl;
	for_each(words.begin(), words.end(), [](string word) {
		if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i'
			|| word[0] == 'o' || word[0] == 'u') {
			cout << word << endl;
		};
	});
	
	cout << endl << "Words with more than 5 letters" << endl;
	for_each(words.begin(), words.end(), [](string word) {
		if (word.length() > 5) {
			cout << word << endl;
		};
	});

	ifstream inFile("c:\\users\\gabek\\Desktop\\words.txt");

	string word;
	words.clear(); // clear current vector

	while (getline(inFile, word)) {
		words.push_back(word);
	}

	int wordsLength = count_if(words.begin(), words.end(), [](string word) {
		if (word.length() < 5) { return true; }
		return false;
	});

	cout << endl << "Words less than 5 letters long count" << endl;
	cout << wordsLength << endl;

	vector<int> nums;
	srand(time(0));
	for (int i = 1; i <= 20; i++) {
		nums.push_back(rand() % 100 + 1);
	}
	for (int n : nums) {
		cout << n << endl;
	}
	cout << endl << endl;
	replace_if(nums.begin(), nums.end(), [](int a) { return a < 50;}, 0);
	for (int n : nums) {
		cout << n << ' ';
	}


	return 0;
}
