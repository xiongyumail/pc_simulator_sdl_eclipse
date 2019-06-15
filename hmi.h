#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "lv_ex_conf.h"

/**
 * Create a test screen with a lot objects and apply the given theme on them
 * @param th pointer to a theme
 */
void hmi_init(lv_theme_t *th);

#ifdef __cplusplus
} /* extern "C" */
#endif
