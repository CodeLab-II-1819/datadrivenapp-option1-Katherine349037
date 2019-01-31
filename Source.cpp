#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string myData;
	int userInput;
	char reply;
	ifstream inFile;
	inFile.open("sampleTweets.csv");

	do {

		cout << "Press 1 for - #Paris" << endl;
		cout << "Press 2 for - #Dreamworks" << endl;
		cout << "Press 3 for - #Uber" << endl;
		cout << "Press 4 for - #Politics" << endl;
		cout << "Press 5 for - #Money" << endl;
		cout << "Press 6 for - #London" << endl;
		cout << "Press 7 for - #Barbados" << endl;
		cout << "Press 8 for - #Rogue" << endl;
		cout << "Press 9 for - #FirstLook" << endl;
		cout << "Press 10 for - #Stay" << endl;
		cout << "Something else? Press 11 - " << endl;
		cin >> userInput;
		string line;
		string tweet;
		if (userInput == 11) {
			cout << "Please enter what you want to search for." << endl;
			cin.ignore(1000, '\n');
			getline(cin, line);
		}
		int counter = 0;
		if (inFile.good()) {

			if (userInput == 1) {
				while (!inFile.eof()) {

					getline(inFile, tweet);
					if (tweet.find("#Paris") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 2) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("#Dreamworks") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 3) {
				while (!inFile.eof()) {

					getline(inFile, tweet);
					if (tweet.find("#Uber") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 4) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("Politics") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 5) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("Money") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 6) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("#London") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 7) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("#Barbados") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 8) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("#Rouge") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 9) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("#FirstLook") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 10) {
				while (!inFile.eof()) {
					getline(inFile, tweet);
					if (tweet.find("#Stay") <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}

				}
			}
			else if (userInput == 11) {

				while (!inFile.eof()) {

					getline(inFile, tweet);
					if (tweet.find(line) <= tweet.length()) {
						cout << tweet << endl;
						counter++;
						cout << "Total tweets found - " << counter << endl;

					}
					


				}
			}
		}
		inFile.clear();
		inFile.seekg(0, ios::beg);
		cout << "Search for something else? Type 'Y' for yes and 'N' for no." << endl;
		cin >> reply;
	}while (reply == 'Y' || reply == 'y');
	system("pause");
	return 0;
}