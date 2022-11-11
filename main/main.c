#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "rgb_led.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    while (true) {
        printf("Hello from app_main11111111111111!\n");
        sleep(1);

       	rgb_wifi_app_started();
        vTaskDelay(300 / portTICK_PERIOD_MS);
    }
}
