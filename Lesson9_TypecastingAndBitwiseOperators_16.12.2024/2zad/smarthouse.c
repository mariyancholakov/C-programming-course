#include <stdio.h>

unsigned char switch_lights(int room_number, unsigned char lights_state)
{
    return lights_state ^= (1 << room_number - 1);
}

void print_state(unsigned char lights_state)
{
    size_t bitSize = sizeof(lights_state) * 8;
    printf("The lights are on in rooms: ");
    for (char i = 0; i < bitSize; i++)
    {
        if ((lights_state >> i) & 1)
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}
int main()
{
    unsigned char lights = 0;
    int choice, roomNumber;
    while (1)
    {
        printf("\nMenu: \n");
        printf("1. Switch the lights in a room\n");
        printf("2. Print the state of the rooms\n");
        printf("3. Exit the menu\n");

        printf("Enter your choice(1,2 or 3): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter room number(1 to 8): ");
            scanf("%d", &roomNumber);
            lights = switch_lights(roomNumber, lights);
            printf("Light %d was switched!\n", roomNumber);
            break;
        case 2:
            print_state(lights);
            break;
        case 3:
            printf("Exiting the menu...\n");
            return 0;

        default:
            printf("Please enter a valid choice(1,2 or 3)\n");
            break;
        }
    }

    return 0;
}