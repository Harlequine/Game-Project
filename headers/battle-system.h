#include <iostream>
#include <string>
#include <vector>

class CombatSystem{
    public:
        void battleLog(std::vector<std::string> &consoleLog, std::string newLog);
        void displayCombat(std::string monName, std::string charName);
        int damageCounter(int dmg, int def, bool weak);
};



