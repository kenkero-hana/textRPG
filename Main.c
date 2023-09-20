#include <stdio.h>

#include "start.h"
#include "status.h"

int main(void){
    player player;
    
    printf("ようこそ、TEXT・RPGの世界へ\n");
    printf("プレイヤーの名前を入力してください\n");
    scanf("%s", player.name);
    printf("こんにちは、%s!ゲームを始めます。\n", player.name);
    printf("\n");
    printf("職業を決めて！");
    printf("1:戦士、２:魔法使い、３:盗賊、4:村人\n");
    scanf("%d", &job);
    switch(job){
        case 1:
            printf("戦士になりました。");
            SensiStatus(player);
            break;
        case 2:
            printf("魔法使いになりました。");
            MagicStatus(player);
            break;
        case 3:
            printf("盗賊になりました。");
            break;
        case 4:
            printf("村人になりました。");
            break;
    }
    printf("\n");

    return 0;
}