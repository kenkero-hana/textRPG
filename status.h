#ifndef _STATUS_H_
#define _STATUS_H_

void SensiStatus(player);
void MagicStatus(player);

typedef struct 
{
    int hart;           //体力
    int attack;         //攻撃力
    int defense;        //防御力
    int magpower;       //魔力
}ability;


#endif