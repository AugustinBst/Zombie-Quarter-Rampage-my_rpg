/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-louis.langanay
** File description:
** i_house_paper
*/

#include "rpg.h"

void i_house_paper(rpg_t *rpg, sfVector2f pos)
{
    sfVector2f pos2 = {pos.x - 28, pos.y + 10};
    char *str = get_language(rpg, "house_paper_interact", RSG);
    draw_interaction_popup(rpg, pos2, RPK->interact.key, str);

    if (sfKeyboard_isKeyPressed(RPK->interact.key)) {
        stop_quest(rpg, "go_to_annia");
        start_quest(rpg, "test_quest");
        start_quest(rpg, "find_money");
        while (sfKeyboard_isKeyPressed(RPK->interact.key));
    }
}
