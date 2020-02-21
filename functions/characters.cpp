#include <characters.h>

//Assign Name
Character::Character(std::string name){ this->charName = name; }
//Assign Stats
void Character::assignStats(int HP, int MP, int ATK, int DEF, int MATK, int MDEF, int LUK, int SPD){
    this -> HP = HP;
    this -> MP = MP;
    this -> ATK = ATK;
    this -> DEF = DEF;
    this -> MATK = MATK;
    this -> MDEF = MDEF;
    this -> LUK = LUK;
    this -> SPD = SPD;
}

//Assign Item parameters
Items::Items(std::string name, int type, int recMP, int recHP, int price){
    this->itemName = name;
    this->itemType = type;
    this->recHP = recHP;
    this->recMP = recMP;
    this->price = price;
}

