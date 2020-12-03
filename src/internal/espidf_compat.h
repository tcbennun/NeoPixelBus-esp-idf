// Copyright (C) 2020 Maxilux Systems Ltd

#ifndef ESPIDF_COMPAT_H
#define ESPIDF_COMPAT_H

#ifndef ARDUINO_ARCH_ESP32
#define ARDUINO_ARCH_ESP32

#ifdef __cplusplus
#include <string>
#include <utility>
typedef  std::string  String;

extern "C" {
#endif

#include <math.h>
#include <stddef.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include <driver/gpio.h>
#include <esp_log.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include "pgmspace.h"

#define  F_CPU          (CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ * 1000000)
#define  LOW            (0)
#define  HIGH           (1)
#define  INPUT          GPIO_MODE_INPUT
#define  OUTPUT         GPIO_MODE_OUTPUT
#define  PI             (3.14159265358979323846)
#define  HALF_PI        (1.57079632679489661923)
#define  _BV(b)         (1UL << (b))
#define  log_e(msg)     ESP_LOGE(TAG, msg)
#define  pinMode(p, d)  gpio_set_direction((gpio_num_t)p, d)
#define  yield()        portYIELD()
#define  micros()       esp_timer_get_time()
#define  millis()       (esp_timer_get_time() / 1000)
#define  delay(x)       vTaskDelay(x / portTICK_PERIOD_MS)

#ifdef __cplusplus
} // extern "C"
#endif

#endif // ifndef ARDUINO_ARCH_ESP32

#endif
