#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // For random number generation

using namespace std;

class MentalHealthSupportApp {
private:
    vector<string> resources;
    vector<string> motivationalMessages;

public:
    MentalHealthSupportApp() {
        // Add some resources and motivational messages
        resources.push_back("National Suicide Prevention Lifeline: 1-800-273-TALK (8255)");
        resources.push_back("Crisis Text Line: Text 'HELLO' to 741741");
        resources.push_back("SAMHSA's National Helpline: 1-800-662-HELP (4357)");

        motivationalMessages.push_back("You are not alone. Reach out for support.");
        motivationalMessages.push_back("Every challenge you face makes you stronger.");
        motivationalMessages.push_back("Take one step at a time. Progress, not perfection.");
    }

    void displayResources() {
        cout << "Mental Health Resources:\n";
        for (const string& resource : resources) {
            cout << "- " << resource << "\n";
        }
    }

    void displayMotivationalMessage() {
        int randomIndex = rand() % motivationalMessages.size();
        cout << "Motivational Message:\n";
        cout << motivationalMessages[randomIndex] << "\n";
    }
};

int main() {
    MentalHealthSupportApp app;

    // Display resources
    cout << "Welcome to the Mental Health Support App\n";
    app.displayResources();

    // Display a motivational message
    cout << "\n";
    app.displayMotivationalMessage();

    return 0;
}
