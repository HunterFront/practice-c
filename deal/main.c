#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


#define CARD_TYPE_NUM 4
#define CARD_VALUE_NUM 13

int main() {
    const char card_type[CARD_TYPE_NUM] = {'c', 's', 'd', 'h'};
    const char card_value[CARD_VALUE_NUM] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    int card_num, card_type_index, card_value_index;
    bool in_hand[CARD_TYPE_NUM][CARD_VALUE_NUM] = {false};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand:");
    scanf("%d", &card_num);

    printf("\nYour hand: ");
    while (card_num > 0) {
        card_type_index = rand() % CARD_TYPE_NUM;
        card_value_index = rand() % CARD_VALUE_NUM;
        if (!in_hand[card_type_index][card_value_index]) {
            in_hand[card_type_index][card_value_index] = true;
            card_num--;
            printf("%c%c ", card_value[card_value_index], card_type[card_type_index]);
        }
    }

    printf("\n");

    return 0;
}