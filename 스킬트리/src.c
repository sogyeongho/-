#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int     get_skill_num (char *skill, char skill_tree)
{
    int index = 0;
    while (skill[index] != '\0')
    {
        if (skill[index] == skill_tree)
            return (index);
        index++;
    }
    return (99);
}
int     solution(const char* skill, const char* skill_trees[], size_t skill_trees_len)
{
    int n;
    bool check = true;
    int temp;
    int answer = 0;
    int temp2 = 0;
    char *skill_cp = (char *)malloc(sizeof(char) * (strlen(skill) + 1));
    strcpy(skill_cp, skill);
    for (int i = 0; i < skill_trees_len; i++)
    {
        n = 0;
        temp = -1;
        check = true;
        while (skill_trees[i][n] != '\0')
        {
            if ((temp2 = get_skill_num(skill_cp, skill_trees[i][n])) != 99 && check == true)
            {
                if (temp2 == temp + 1)
                    temp = temp2;
                else
                    check = false;
            }
            n++;
        }
        if (check == true)
            answer++;
    }
    return (answer);
}