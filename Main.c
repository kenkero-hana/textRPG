#include <stdio.h>

#include "start.h"
#include "status.h"
#include "battle.h"

int main(void){
    int Quest = 0;
    int job   = 0;

    player player;
    player.level = 1;
    player.gold = 100;
    
    printf("ようこそ、TEXT・RPGの世界へ\n");
    printf("プレイヤーの名前を入力してください\n");
    scanf("%s", player.name);
    printf("こんにちは、%s!ゲームを始めます。\n", player.name);
    printf("\n");
    printf("職業を決めて！");
    printf("1:戦士、２:魔法使い、３:盗賊、4:村人\n");
    scanf("%d", &job);

    printf("初期ステータス\n");
    switch(job){
        case 1:
            SensiStatus(player);
            break;
        case 2:
            MagicStatus(player);
            break;
        case 3:
            printf("盗賊になりました。");
            //TozokuStatus(player);
            break;
        case 4:
            printf("村人になりました。");
            break;
    }
    printf("\n");

    printf("クエスト依頼書\n");
    printf("１:EASY\n");
    printf("２:NORMAL\n");
    printf("３:HARD\n");
    scanf("%d", &Quest);
    switch (Quest)
    {
    case 1:
        printf("スライム討伐\n");
        printf("必要レベル：１\n");
        printf("取得ゴールド：100\n");
        Battle(Quest);
        break;
    case 2:
        printf("ゴブリン討伐\n");
        printf("必要レベル：25\n");
        printf("取得ゴールド：500\n");
        break;
    case 3:
        printf("ジャイアントゴリラ\n");
        printf("必要レベル：50\n");
        printf("取得ゴールド：1000\n");
        break;
    case 4:
        break;
    default:
        break;
    }

    return 0;
}