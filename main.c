#include "appdev.h"

int main(void)
{
    Data data;
    printf("Application Developers Rock!\n");
    printf("Enter Rocker's name: ");
    scanf_s("%s", data.rname, (unsigned)_countof(data.rname));
    srand(time(NULL));
    data.max = rand() % 50 + 51;
    data.min = rand() % 50 + 1;
    send_data(data);
    printf("Rockn'Roll\n");
    return 0;
}
