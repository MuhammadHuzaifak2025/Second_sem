#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Class for a Hangman game
class Hangman {
    private:
        string word;
        int numGuesses;
        string guessedLetters;
        string hiddenWord;
        int score;
        int totalScore;
    public:
        // Constructor
        Hangman(string filename) {
            word = getWord(filename);
            numGuesses = 0;
            guessedLetters = "";
            hiddenWord = string(word.length(), '_');
            score = 0;
        }
        // Function to get random word from a file
        string getWord(string filename) {
            ifstream file(filename);
            string word;
            int numWords = 0;
            while (getline(file, word)) {
                numWords++;
            }
            int randomLine = rand() % numWords + 1;
            file.clear();
            file.seekg(0, ios::beg);
            for (int i = 0; i < randomLine; i++) {
                getline(file, word);
            }
            file.close();
            return word;
        }
        // Function to play the game
        void play() {
            cout << "Welcome to Hangman!" << endl;
            //cout << "The word is " << word.length() << " letters long." << endl;
            while (numGuesses < 6 && hiddenWord != word) {
                cout << "Guess a letter: ";
                char letter;
                cin >> letter;
                cin.ignore();
                if (guessedLetters.find(letter) != string::npos) {
                    cout << "You already guessed that letter." << endl;
                    continue;
                }
                guessedLetters += letter;
                if (word.find(letter) != string::npos) {
                    cout << "Correct guess!" << endl;
                    for (int i = 0; i < word.length(); i++) {
                        if (word[i] == letter) {
                            hiddenWord[i] = letter;
                        }
                    }
                    cout << hiddenWord << endl;
                } else {
                    cout << "Incorrect guess." << endl;
                    numGuesses++;
                    cout << "You have " << 6 - numGuesses << " guesses left." << endl;
                }
            }
            if (numGuesses == 6) {
                cout << "You lose. The word was " << word << "." << endl;
            } else {
                cout << "Congratulations, you win!" << endl;
                int points = 0;
                switch (word.length()) {
                    case 3:
                    case 4:
                        points = 10;
                        break;
                    case 5:
                    case 6:
                        points = 20;
                        break;
                    default:
                        points = 50;
                        break;
                }
                score += points;
                cout << "You scored " << points << " points!" << endl;
            }
            totalScore += score;
            cout << "Your total score so far is: " << totalScore << endl;
            ofstream file;
            file.open("Current_User_hangman_Score.txt", ios_base::out);
            if (file.is_open()) {
                file << totalScore << endl;
                file.close();
            }
            sleep(1);
            system("CLS");
        }
        // Function to get the score for the game
        int getScore() {
            return score;
        }
};

int main() {
    srand(time(NULL));
    int choice, totalScore = 0;
    cout << "..........WELCOME TO HANGMAN........\n";
    cout << "1. PLAY\n";
    cout << "2. EXIT\n";
 cin >> choice;
    sleep(1);
    system("CLS");
    if (choice == 1) {
        do {
            cout << "Select difficulty level:" << endl;
            cout << "1. Easy" << endl;
              cout << "2. Medium" << endl;
            cout << "3. Hard" << endl;
            cout << "4. Quit\n";
cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: {
                Hangman game("easy.txt");
                game.play();
                break;
            }
            case 2: {
                Hangman game("medium.txt");
                game.play();
                break;
            }
            case 3: {
                Hangman game("hard.txt");
                game.play();
                break;
            }
            case 4:
                cout << "Goodbye!" << endl;
                return 0;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);}
	else {
		cout<<"GOOD BYE!!!";
    return 0;
}}
