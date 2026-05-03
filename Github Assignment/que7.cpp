
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

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty()) {

        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    // Store roast templates
    vector<string> roasts = {

        "{name} writes code so slowly that even a turtle switched to Python.",

        "If procrastination were an Olympic sport, {name} would already have a gold medal.",

        "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",

        "{name}'s code has more bugs than a jungle.",

        "Even Google gets confused trying to understand {name}'s code.",

        "{name} treats semicolons like optional decorations.",

        "{name}'s programs crash faster than weak Wi-Fi.",

        "When {name} compiles code, even the compiler gets nervous.",

        "{name} writes comments more confusing than the actual program.",

        "{name}'s keyboard deserves compensation after all that coding."
    };

    // Generate random roast
    int randomIndex = rand() % roasts.size();

    string roast = roasts[randomIndex];

    size_t position = roast.find("{name}");

    while (position != string::npos) {

        roast.replace(position, 6, name);

        position = roast.find("{name}");
    }

    // Display final roast
    cout << "\nFunny Roast:" << endl;
    cout << roast << endl;

    return 0;
}
