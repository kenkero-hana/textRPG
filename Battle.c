#include <stdio.h>
#include <math.h>

//quest1,quest2,quest3,quest4,rasut
typedef struct 
{
    int hart;           //体力
    int attack;         //攻撃力
    int defense;        //防御力
    int magpower;       //魔力
}Suraimu;


void Battle(int quest){
    if(quest == 1){
        quest1();
    }
}

void quest1(){
    Suraimu suraimu;
    suraimu.hart     = 50;
    suraimu.attack   = 5;
    suraimu.defense  = 3;
    suraimu.magpower = 0;

    while (suraimu.hart == 0)
    {
        
    }
}