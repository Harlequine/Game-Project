#include <string>
#include <vector>

class Character{
    private:
        std::string charName, title, job;
        int HP, MP, ATK, DEF, MATK, MDEF, LUK, SPD;
        unsigned int gold;
        std::vector<std::string> pInv, skills;
    public:
        Character(std::string name);
        void assignStats(int HP, int MP, int ATK, int DEF, int MATK, int MDEF, int LUK, int SPD);
        ~Character();
};

class Items{
    private:
        int recHP, recMP, itemType;
        unsigned int price;
        std::string itemName;
    public:
        Items(std::string name, int type, int recMP, int recHP, int price);
        ~Items();
}; 

class Mobs{
    private:
        std::string mName;
        int HP, DEF, EXP;
        bool is_defeated = false;
    public:
        
};