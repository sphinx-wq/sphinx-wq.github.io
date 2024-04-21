#include <iostream>
#include <map>
#include <vector>
#include <cstdlib> // For random number generation

using namespace std;

class LanguageLearningPlatform {
private:
    map<string, string> vocabulary;

public:
    void addWord(string word, string translation) {
        vocabulary[word] = translation;
    }

    string getTranslation(string word) {
        if (vocabulary.find(word) != vocabulary.end()) {
            return vocabulary[word];
        } else {
            return "Translation not found.";
        }
    }

    void quiz(int numQuestions) {
        vector<string> keys;
        for (auto const& pair : vocabulary) {
            keys.push_back(pair.first);
        }

        cout << "Quiz starting...\n";
        int score = 0;
        for (int i = 0; i < numQuestions; ++i) {
            int randomIndex = rand() % keys.size();
            string questionWord = keys[randomIndex];
            cout << "What is the translation of '" << questionWord << "'?\n";
            string userAnswer;
            cin >> userAnswer;
            if (userAnswer == vocabulary[questionWord]) {
                cout << "Correct!\n";
                score++;
            } else {
                cout << "Incorrect. The correct translation is: " << vocabulary[questionWord] << "\n";
            }
        }
        cout << "Quiz ended. Your score: " << score << "/" << numQuestions << "\n";
    }
};

int main() {
    LanguageLearningPlatform platform;

    // Add some vocabulary words
    platform.addWord("hello", "hola");
    platform.addWord("apple", "manzana");
    platform.addWord("cat", "gato");
    platform.addWord("goodbye", "adiós");

    // Start quiz
    platform.quiz(3); // Change the number of questions as needed

    return 0;
}