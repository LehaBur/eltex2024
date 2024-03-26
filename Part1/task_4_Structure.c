#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_ABONENTS 10

struct abonent
{
    char name[10];
    char second_name[10];
    char tel[10];
};

struct abonent create_abonent(char *p_name, char *p_second_name, char *p_tel)
{
    struct abonent user;
    strcpy(user.name, p_name);
    strcpy(user.second_name, p_second_name);
    strcpy(user.tel, p_tel);
    return user;
}

struct abonent initialization(struct abonent *p_users)
{
    for (int i; i < MAX_ABONENTS; i++)
    {
        p_users[i] = create_abonent("0", "0", "0");
    }
}

struct abonent show_abonents(struct abonent *p_users)
{
    for (int i = 0; i < MAX_ABONENTS; i++)
    {
        if (strcmp(p_users[i].name, "0"))
        {
            printf("%2d. Name:%s \t\t Second name:%s \t\t Tel: %s \n", i, p_users[i].name, p_users[i].second_name, p_users[i].tel);
        }
    }
}

int search(struct abonent *p_users, char *p_name)
{
    int finded_abonents = 0;
    for (int i = 0; i < MAX_ABONENTS; i++)
    {
        if (!strcmp(p_users[i].name, p_name))
        {
            if (!strcmp(p_name, "0"))
            {
                return i;
            }
            else
            {
                printf("%2d. Name:%s \t\t Second name:%s \t\t Tel: %s \n", i, p_users[i].name, p_users[i].second_name, p_users[i].tel);
                finded_abonents++;
            }
        }
    }
    if (!strcmp(p_name, "0"))
    {
        return -1;
    }
    else
    {
        return finded_abonents;
    }
}

struct abonent search_abonent(struct abonent *p_users)
{
    char name[10];
    printf("Введите имя искомого абонента: \n");
    scanf("%s", name);
    if (search(p_users, name) == 0)
    {
        printf("Абонентов с таким именем не найдено.\n");
    }
}

struct abonent add_new_abonent(struct abonent *p_users)
{
    int void_abonent = search(p_users, "0");
    if (void_abonent >= 0)
    {
        char name[10], second_name[10], tel[10];
        printf("Введите имя нового абонента: ");
        scanf("%s", name);
        printf("Введите фамилию нового абонента: ");
        scanf("%s", second_name);
        printf("Введите телефон нового абонента: ");
        scanf("%s", tel);
        p_users[void_abonent] = create_abonent(name, second_name, tel);
    }
    else
    {
        printf("Справочник переполнен!\n");
    }
}

struct abonent delete_abonent(struct abonent *p_users)
{
    int delete_number = -1;
    int finded_abonents = 0;
    char name[10];
    printf("Введите имя абонента: ");
    scanf("%s", &name);
    finded_abonents = search(p_users, name);
    if (finded_abonents > 0)
    {
        while ((delete_number < 0) || (delete_number >= MAX_ABONENTS))
        {
            printf("Введите позицию абонента для удаления: \n");
            scanf("%d/n", &delete_number);
        }
        p_users[delete_number] = create_abonent("0", "0", "0");
        printf("Абонент под номером %d удален\n", delete_number);
    }
    else
    {
        printf("Абонентов с таким именем не найдено\n");
    }
}

int main()
{
    printf("\033[0d\033[2J");
    struct abonent users[MAX_ABONENTS];

    initialization(users);

    bool exteed = true;
    int menu = 0;

    users[0] = create_abonent("Bob", "Baa", "48646");
    users[1] = create_abonent("Boba", "Baa", "48646");
    users[2] = create_abonent("Biba", "Baa", "48646");
    users[3] = create_abonent("ABob", "Baa", "48646");
    users[4] = create_abonent("Aboba", "Baa", "48646");
    users[5] = create_abonent("Abiba", "Baa", "48646");
    users[6] = create_abonent("Babob", "Baa", "48646");
    users[7] = create_abonent("Bibob", "Baa", "48646");
    users[8] = create_abonent("Bibab", "Baa", "48646");

    while (exteed)
    {
        printf("1) Добавить абонента\n");
        printf("2) Удалить абонента\n");
        printf("3) Поиск абонентов по имени\n");
        printf("4) Вывод всех записей\n");
        printf("5) Выход\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("\033[0d\033[2J");
            printf("---ДОБАВЛЕНИЕ АБОНЕНТА---\n");
            add_new_abonent(users);
            break;
        case 2:
            printf("\033[0d\033[2J");
            printf("---УДАЛЕНИЕ АБОНЕНТА---\n");
            delete_abonent(users);
            break;
        case 3:
            printf("\033[0d\033[2J");
            printf("---ПОИСК АБОНЕНТОВ---\n");
            search_abonent(users);
            break;
        case 4:
            printf("\033[0d\033[2J");
            printf("---ВЫВОД ВСЕХ АБОНЕНТОВ---\n");
            show_abonents(users);
            break;
        case 5:
            printf("\033[0d\033[2J");
            printf("---ВЫХОД---\n");
            exteed = false;
            break;
        default:
            printf("\033[0d\033[2J");
            printf("Нет такого пунка в меню!\n");
            break;
        }
    }

    // users[0] = create_abonent("Bob", "Baa", "48646");
    // users[1] = create_abonent("Boba", "Baa", "48646");
    // users[2] = create_abonent("Biba", "Baa", "48646");

    // for (int i = 0; i < 4; i++)
    // {
    //     add_new_abonent(users);
    // }

    // search_abonent(users);
    // show_abonents(users);
    // delete_abonent(users);
    // show_abonents(users);
}