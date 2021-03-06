/* Copyright 2016 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IOTJS_SYSTEMIO_ARM_NUTTX_H
#define IOTJS_SYSTEMIO_ARM_NUTTX_H


void iotjs_gpio_unconfig_nuttx(int pin);


#if ENABLE_MODULE_ADC

#include <nuttx/analog/adc.h>

struct adc_dev_s* iotjs_adc_config_nuttx(int number, int timer, int pin);

#endif /* ENABLE_MODULE_ADC */


#if ENABLE_MODULE_PWM

#include <nuttx/drivers/pwm.h>

struct pwm_lowerhalf_s* iotjs_pwm_config_nuttx(int timer, int pin);

#endif /* ENABLE_MODULE_PWM */


#endif /* IOTJS_SYSTEMIO_ARM_NUTTX_H */
