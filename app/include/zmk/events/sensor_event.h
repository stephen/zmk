/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr/kernel.h>
#include <zmk/event_manager.h>
#include <zephyr/device.h>
struct zmk_sensor_event {
    uint8_t sensor_number;
    int8_t value;
    int64_t timestamp;
};

ZMK_EVENT_DECLARE(zmk_sensor_event);