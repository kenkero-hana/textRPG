#include <stdio.h>

#include "start.h"
#include "status.h"

void SensiStatus(player sensi){
    //printf("%s\n", sensi.name);
    ability ability;

    ability.hart    =   100;
    ability.attack  =   50;
    ability.defense =   20;
    ability.magpower=   0;

    printf("体力  :  %d\n"    , ability.hart);
    printf("攻撃力:  %d\n"  , ability.attack);
    printf("防御力:  %d\n"  , ability.defense);
    printf("魔力  :  %d\n"    , ability.magpower);

}

void MagicStatus(player magic){
    //printf("%s\n", magic.name);
    ability ability;

    ability.hart    =   100;
    ability.attack  =   20;
    ability.defense =   25;
    ability.magpower=   30;

    printf("体力  :  %d\n"    , ability.hart);
    printf("攻撃力:  %d\n"  , ability.attack);
    printf("防御力:  %d\n"  , ability.defense);
    printf("魔力  :  %d\n"    , ability.magpower);
}