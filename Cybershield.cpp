#include <iostream>
#include <string>
using namespace std;

class CyberShield {
private:
    int score;
    int totalQuestions;

public:
    CyberShield() {
        score = 0;
        totalQuestions = 0;
    }

    void showMenu() {
        cout << "\n===== CYBERSHIELD =====\n";
        cout << "1. Phishing Email Simulation\n";
        cout << "2. Suspicious Message Simulation\n";
        cout << "3. Impersonation Simulation\n";
        cout << "4. View Results\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
    }

    void runScenario(int choice) {
        int answer;

        cout << "\n--- Simulation Scenario ---\n";

        switch (choice) {
        case 1:
            cout << "You receive an email asking you to\n";
            cout << "click a link to verify your account.\n";
            cout << "The sender and link look suspicious.\n";
            cout << "1. Click the link immediately\n";
            cout << "2. Verify the sender and report the email\n";
            cout << "Choose your response: ";

            cin >> answer;
            totalQuestions++;

            if (answer == 2) {
                cout << "Correct! Always verify suspicious emails.\n";
                score++;
            }
            else {
                cout << "Incorrect. Avoid suspicious links.\n";
            }
            break;

        case 2:
            cout << "A message claims you won a prize\n";
            cout << "and asks for personal information.\n";
            cout << "1. Share the information\n";
            cout << "2. Ignore and report the message\n";
            cout << "Choose your response: ";

            cin >> answer;
            totalQuestions++;

            if (answer == 2) {
                cout << "Correct! Do not share sensitive data.\n";
                score++;
            }
            else {
                cout << "Incorrect. Prize messages can be scams.\n";
            }
            break;

        case 3:
            cout << "Someone pretends to be technical support\n";
            cout << "and requests your password.\n";
            cout << "1. Give them your password\n";
            cout << "2. Refuse and verify through official channels\n";
            cout << "Choose your response: ";

            cin >> answer;
            totalQuestions++;

            if (answer == 2) {
                cout << "Correct! Never disclose your password.\n";
                score++;
            }
            else {
                cout << "Incorrect. Never share your password.\n";
            }
            break;

        default:
            cout << "Invalid scenario choice.\n";
        }
    }

    void showResults() {
        cout << "\n===== YOUR RESULTS =====\n";
        cout << "Correct answers: " << score << endl;
        cout << "Questions attempted: "
            << totalQuestions << endl;

        if (totalQuestions > 0) {
            double percentage =
                (score * 100.0) / totalQuestions;

            cout << "Awareness score: "
                << percentage << "%\n";

            if (percentage >= 80) {
                cout << "Excellent cybersecurity awareness!\n";
            }
            else if (percentage >= 50) {
                cout << "Good effort. Keep learning!\n";
            }
            else {
                cout << "Review cybersecurity safety practices.\n";
            }
        }
        else {
            cout << "Complete a scenario to get your score.\n";
        }
    }
};

int main() {
    CyberShield simulator;
    int choice;

    cout << "Welcome to CyberShield Simulator!\n";

    do {
        simulator.showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
        case 2:
        case 3:
            simulator.runScenario(choice);
            break;

        case 4:
            simulator.showResults();
            break;

        case 5:
            cout << "Thank you for using CyberShield!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}