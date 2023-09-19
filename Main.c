#include <stdio.h>

typedef struct
{
    char name[50];
    int health;
    int Score;
}player;


int main(void){
    player player;
    printf("ようこそ、TEXT・RPGの世界へ\n");
    printf("プレイヤーの名前を入力してください\n");
    scanf("%s", player.name);
    printf("こんにちは、%s!ゲームを始めます。\n", player.name);

    return 0;
}