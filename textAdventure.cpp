#include <iostream>

int main() {
    int start = 0;
    int scene1 = 0;
    int scene2 = 0;

    std::cout << "Welcome to the Adventure!\n";
    std::cout << "Press 1 to begin.\n";
    std::cin >> start;

    if (start == 1) {
        std::cout << "You wake up in a dark dungeon cell.\n";
        std::cout << "Press 1) To yell out to someone\n";
        std::cout << "Press 2) To search the room\n";
        std::cin >> scene1;
        if (scene1 == 1) {
            std::cout << "When you yell out, a guard comes over and says \"Shut Up Maggot!\"\n";
            std::cout << "Press 1) To try to grab the guard's weapon through the bars.\n";
            std::cout << "Press 2) To ask the guard why you're in there.\n";
            std::cin >> scene2;
            if (scene2 == 1) {
                std::cout << "When you try to lunge for the guard's weapon, he steps back punches you in the face and knocks you unconscious.\n";
                std::cout << "You wake up a few hours later.";
            }
        }
    } else {
        std::cout << "Invalid Entry";
    }
}