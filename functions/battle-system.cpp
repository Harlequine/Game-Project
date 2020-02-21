#include <battle-system.h>

std::vector<std::string> consoleLog = {" ", " ", " ", " ", " "};

class combatSystem{
    public:
    //Display Battle Log
    void battleLog(std::vector<std::string> &consoleLog){
        //Display Log
        for (int x = consoleLog.size()-6; x < consoleLog.size(); x++){
            std::cout << consoleLog[x] << std::endl;
        }
    }

    void appendLog(std::string newLog){
        //Append Log
        consoleLog.push_back(newLog);
    }

    //Display combat
    void displayCombat(std::string monName, std::string charName){
        std::cout << "===========================================";
        std::cout << "=\t" << monName << "\t==============";
        std::cout << "===========================================";
        battleLog(consoleLog);
        std::cout << "===========================================";
        std::cout << "=\t" << charName << "\t==============";
        std::cout << "===========================================";
    }
    
    int damageCounter(int dmg, int def, bool weak){
        if (weak == true){ return def-(def*50)-dmg; }
        else { return dmg - def; }
    }


};