void displayStars();

int main()
{
    /*

    1 - Akpl3 & Okro Soup
    2 - Kenkey & Fish
    3 - Jollof Rice & Chicken
    4 - Fufu & Palmnut Soup
    5 - Ampesi & Palava Sauce
    */

    int userChoice; // this is the user's choice.

    printf("Menu\n");
    displayStars();
    printf("1 - Akpl3 & Okro Soup\n");
    printf("2 - Kenkey & Fish\n");
    printf("3 - Jollof Rice & Chicken\n");
    printf("4 - Fufu & Palmnut Soup\n");
    printf("5 - Ampesi & Palava Sauce\n");
    displayStars();
    printf("Choose a menu: ");
    scanf("%d", &userChoice);

    switch(userChoice)
    {
        case 1:
            printf("You chose Akpl3 & Okro Soup\n");
            break;
        case 2:
            printf("You chose Kenkey & Fish\n");
            break;
        case 3:
            printf("You chose Jollof Rice & Chicken\n");
            break;
        case 4:
            printf("You chose Fufu & Palmnut Soup\n");
            break;
        case 5:
            printf("You chose Ampesi & Palava Sauce\n");
            break;
        default:
            printf("You chose nothing. Whyyyy\n");
    }

    return 0;
}

void displayStars()
{
    printf("***************************\n");
}
