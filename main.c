#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t mode = 0;

    if (mode == 0)
    {
        LED_OFF();
    }
    else
    {
        LED_Toggle();
    }

    while (1)
    {

    }
}