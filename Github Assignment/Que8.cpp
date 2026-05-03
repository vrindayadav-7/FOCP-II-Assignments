// StudentExcuseGenerator

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    // Seed random generator
    srand(time(0));

    string name;

    // Ask user for student name
    cout << "Enter student name: ";
    getline(cin, name);

    // Check empty input
    if (name.empty()) {

        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    // Store excuse templates
    vector<string> excuses = {

        "{name} couldn't complete the assignment because the laptop battery died unexpectedly.",

        "{name} tried finishing the homework, but the internet suddenly stopped working.",

        "{name} was about to submit the assignment when the file mysteriously disappeared.",

        "{name}'s computer restarted during the assignment.",

        "{name} forgot the charger and the laptop shut down.",

        "{name}'s keyboard stopped working in the middle of typing.",

        "{name} accidentally deleted the assignment folder.",

        "{name} spent hours solving the task before realizing the wrong file was open.",

        "{name} was ready to finish the homework when the Wi-Fi vanished.",

        "{name}'s system update took the entire evening to complete."
    };

    // Generate random excuse
    int randomIndex = rand() % excuses.size();

    string excuse = excuses[randomIndex];

    // Replace {name} with actual name
    size_t position = excuse.find("{name}");

    while (position != string::npos) {

        excuse.replace(position, 6, name);

        position = excuse.find("{name}");
    }

    // Display final excuse
    cout << "\nGenerated Excuse:" << endl;
    cout << excuse << endl;

    return 0;
}

